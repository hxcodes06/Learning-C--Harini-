#include <stdio.h>

int power(int base, int exp)
{
    int result = 1;
    int i;

    for(i = 1; i <= exp; i++)
    {
        result = result * base;
    }

    return result;
}

int main()
{
    int base, exp;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exp);

    printf("Result = %d\n", power(base, exp));

    return 0;
}