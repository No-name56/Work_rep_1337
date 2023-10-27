#include "stack.h"
#include <stdio.h>
#include "stdbool.h"
#define STACK_MAX_SIZE 5

int stack[STACK_MAX_SIZE];
int cnt = 0;
void show(void)
{
    for(int i = 0; i < STACK_MAX_SIZE; i++)
    {
        printf("%d ",stack[i]);
    }
}

bool is_fool(void)
{
    if (cnt == STACK_MAX_SIZE)
    {
        return true;
    }
    return false;
}

bool is_empty(void)
{
    if (cnt == 0)
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

    stack[cnt] = n;
    cnt++;

    return 0;

}


int pop(void)
{
    if (is_empty())
    {
        return -1;
    }
    int temp = stack[cnt];
    stack[cnt-1] = 0;
    cnt--;
    return temp;
}




