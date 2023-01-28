#include <stdio.h>

int isDivisibleBy3(int num)
{
    if (num % 3 == 0)
    {
        return 1;
    }
    return 0;
}

int isDivisibleBy5(int num)
{
    if (num % 5 == 0)
    {
        return 1;
    }
    return 0;
}

int main()
{
    int n, i, count = 0;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (isDivisibleBy3(arr[i]) && isDivisibleBy5(arr[i]))
        {
            count++;
            continue;
        }
        if (isDivisibleBy3(arr[i]))
        {
            count++;
        }
        if (isDivisibleBy5(arr[i]))
        {
            count++;
        }
    }

    if (count == 0)
    {
        printf("-1");
    }
    else
    {
        printf("%d", count);
    }
    return 0;
}
