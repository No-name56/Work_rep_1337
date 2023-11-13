#include <stdio.h>
#include <stdlib.h>
#include "din_queue.h"

int main()
{
    show();
    push(1);
    show();
    push(2);
    show();
    push(3);
    show();
    pop();
    show();
    pop();
    show();
    return 0;
}
