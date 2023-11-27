/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

unsigned binary_array_to_numbers(const unsigned bits[/*count*/], size_t count)
{
    int result = 0;
    int factor = 1;
    for(size_t i = 0; i < count; i++)
    {
        result += bits[count - i - 1]* factor;
        factor *= 2;
    }
	return result;
}

int main()
{
    int arr[4] = {0,0,1,1};
    printf("%d", binary_array_to_numbers(arr,4));

    return 0;
}
