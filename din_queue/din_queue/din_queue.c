#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "din_queue.h"

struct queue_item_t
{
    int value;
    struct queue_item_t *next;
};

struct queue_item_t *queue = NULL;

void show(void)
{
    if(is_empty())
    {
        printf("queue is empty\n");
    }
    else
    {
        struct queue_item_t *queue_copy = queue;
        while(queue_copy)
        {
            printf("%d\t", queue_copy->value);
            queue_copy = queue_copy -> next;
        }
        printf("\n");
    }
}

bool is_empty(void)
{
    return(!queue);
}



int push(int n)
{
    struct queue_item_t *new_queue_item=malloc(sizeof(struct queue_item_t));
    new_queue_item->value=n;
    new_queue_item->next=NULL;
    if(is_empty())
    {
        queue=new_queue_item;
    }
    else
    {
        struct queue_item_t *queue_copy = queue;

        while(queue_copy->next)
        {
            queue_copy = queue_copy->next;
        }
        queue_copy->next = new_queue_item;

    }
    return 0;
}



int pop(void)
{
    if(is_empty())
    {
        return -1;
    }
    struct queue_item_t *top = queue;
    int value = top->value;
    queue = top->next;
    free(top);
    printf("\n");
    return value;
}
