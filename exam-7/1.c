#include <stdio.h>

int main()
{
    int n, i, sum = 0, sign = 1;

    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum += i * sign;
        if (i % 3 == 0)
        {
            sign = -sign;
        }
    }
    printf("%d", sum);
    return 0;
}