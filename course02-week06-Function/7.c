#include <stdio.h>

float median(int arr[], int n)
{

    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    if (n % 2 == 0)
        return (arr[(n - 1) / 2] + arr[n / 2]) / 2.0;
    else
        return arr[n / 2];
}

int main()
{
    printf("Give a Array size :");
    int n;
    printf("Give a Array :");
    scanf("%d", &n);
    int arr[100];
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &arr[i]);
    }

    printf("Median of the array is %.1f", median(arr, n));
    return 0;
}