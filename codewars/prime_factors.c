#include <stdio.h>
#include <math.h>

unsigned long long factors[12];

int prime_factors (unsigned long long n, unsigned long long factors[])
{
    int count = 0;
    unsigned long long value = n;

    for(unsigned long long i = 2; i < sqrt(value) + 1; i++)
    {
        while(value%i == 0)
        {
            value = value/i;
            printf("i == %d, value == %d, count == %d\n", i, value, count);
            factors[count] = i;

            count++;
        }
    }
    if (value != 1)
    {
        factors[count] = value;
        printf("value == %d, count == %d\n", value, count);
        count++;
    }

	return count;
}

int main()
{
    printf("%d", prime_factors(2088, factors));

    return 0;
}
