#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int n, i;
    scanf("%d", &n);
    int arr[n];
    for (i = 1; i <= n; i++)
    { // Consider the array as 1 based index
        scanf("%d", &arr[i]);
    }

    int q;
    scanf("%d", &q);
    while (q--)
    {
        int l, r;
        scanf("%d%d", &l, &r);
        swap(&arr[l], &arr[r]);
    }

    for (i = 1; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
