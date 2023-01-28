#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

float average(int *arr, int size)
{
    int sum = 0, count = 0;
    for (int i = 0; i < size; i++)
    {
        if (*(arr + i) % 2 == 0)
        {
            sum += *(arr + i);
            count++;
        }
    }
    return (float)sum / count;
}

int main()
{
    int n, primeCount = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (isPrime(arr[i]))
            primeCount++;
    }
    printf("Prime numbers: %d\n", primeCount);
    printf("Average of all even integers: %.2f\n", average(arr, n));
    return 0;
}
