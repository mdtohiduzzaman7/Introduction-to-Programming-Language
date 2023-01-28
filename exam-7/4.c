#include <stdio.h>

void sum(int N)
{
    int a, b, c, d;
    a = N / 4;
    b = a + 2;
    c = b + 2;
    d = c + 2;

    a = a - 3;
    b = b - 3;
    c = c - 3;
    d = d - 3;
    printf("%d %d %d %d", a, b, c, d);
}

int main()
{
    int t, N;

    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &N);
        sum(N);
    }

    return 0;
}