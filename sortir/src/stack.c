#include "stack.h"

#include "stack.h"
#include <stdio.h>
#define STACK_MAX_SIZE 5

int stack[STACK_MAX_SIZE];
int cnt = 0;

void show (void) {
    if (cnt != 0) {
        for (int i = 0; i < cnt; i++) {
            printf ("%d ",stack[i]);
        }
    }
}

int pick (void) {
    return stack[cnt-1];
}

void init (void) {
    cnt = 0;
    for (int i = 0; i < STACK_MAX_SIZE; i++) {
        stack[i] = 0;
    }
}

_Bool is_fool (void) {
    if (cnt == STACK_MAX_SIZE) {
        return 1;
    }
    return 0;
}

_Bool is_empty (void) {
    if (cnt == 0 && stack[0] == 0)  {
        return 1;
    }
    return 0;
}

int push (int n) {
    if (is_fool()) {
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
    int temp = stack[cnt-1];
    stack[cnt-1] = 0;
    cnt--;
    return temp;
}




