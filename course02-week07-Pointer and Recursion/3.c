#include <stdio.h>

int main()
{
    int x, y;
    int *ptrX, *ptrY;

    scanf("%d", &x);

    scanf("%d", &y);
    ptrX = &x;
    ptrY = &y;
    printf("%d\n", *ptrX);
    printf("%d\n", *ptrY);
    return 0;
}
