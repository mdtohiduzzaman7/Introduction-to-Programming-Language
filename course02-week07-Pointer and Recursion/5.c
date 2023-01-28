#include <stdio.h>

int sum_of_indices_and_values(int n, int arr[])
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if ((i % 2 == 0) && (arr[i] % 2 == 0))
        {
            sum += (i + arr[i]);
        }
        else if ((i % 2 != 0) && (arr[i] % 2 != 0))
        {
            sum += (i + arr[i]);
        }
    }
    return sum;
}

int main()
{
    int n, arr[1002], sum;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }
    sum = sum_of_indices_and_values(n, arr);
    printf("%d", sum);
    return 0;
}
