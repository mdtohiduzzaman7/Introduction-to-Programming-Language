#include <stdio.h>

int main()
{
    int n, k, i;

    scanf("%d %d", &n, &k);

    for (i = 2; i <= n; i += 2)
        printf("%d ", i);

    for (i = 1; i <= n; i += 2)
        printf("%d ", i);
    int m = (k % 2 == 0) ? (k / 2) * 2 : (k / 2) * 2 + 1;

    printf("\nThe %dth element in this sequence is %d.",
           k, m);

    return 0;
}