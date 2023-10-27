#include "queue.h"
#include <stdio.h>
#include "stdbool.h"
#define STACK_MAX_SIZE 5

int stack[STACK_MAX_SIZE];
int count = 0;
int pw = 0;
int pr = 0;

void show(void)
{
    for(int i = pr; i < STACK_MAX_SIZE; i++)
    {
        printf("%d ",stack[i]);
    }
    for(int i = 0; i < pr; i++)
    {
        printf("%d ",stack[i]);
    }
    printf("\n");
}

bool is_fool(void)
{
    if (count == STACK_MAX_SIZE)
    {
        return true;
    }
    return false;
}

bool is_empty(void)
{
    if (pw == pr)
    {
        return true;
    }
    return false;
}

int push(int n)
{
    if(is_fool()){
        return -1;
    }

    stack[pw] = n;
    pw++;
    count++;
    pw = pw%STACK_MAX_SIZE;

    return 0;

}


int pop(void)
{
    if (is_empty())
    {
        return -1;
    }
    int temp = stack[pr];
    stack[pr] = 0;
    pr++;
    count--;
    pr = pr%STACK_MAX_SIZE;
    return temp;
}





