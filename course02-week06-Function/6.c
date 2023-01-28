#include <stdio.h>

int factorial(int n);
float ratioFactorials(int n1, int n2);

int main()
{
    int num1;
    int num2;
    scanf("%d %d", &num1, &num2);

    float ratio;

    ratio = ratioFactorials(num1, num2);
    printf("Ratio of factorials of %d and %d is %f\n", num1, num2, ratio);

    return 0;
}

int factorial(int n)
{
    int i, fact = 1;

    for (i = 2; i <= n; i++)
        fact = fact * i;

    return fact;
}

float ratioFactorials(int n1, int n2)
{
    int fact1 = factorial(n1);
    int fact2 = factorial(n2);

    return (float)fact1 / fact2;
}