#include <stdio.h>

int check_beauty(int *arr, int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 10 == 7 || arr[i] / 10 % 10 == 7 || arr[i] / 100 == 7)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int count = check_beauty(arr, n);
    if (count >= 3)
    {
        printf("Beautiful");
    }
    else
    {
        printf("Ugly");
    }
    return 0;
}
