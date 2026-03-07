#include <stdio.h>

int sum(int a, int b)
{
    int result = a + b;
    return result;
}

int main()
{
    int x, y, answer;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    answer = sum(x, y);

    printf("Sum = %d\n", answer);

    return 0;
}