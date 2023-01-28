
#include <stdio.h>
#include <string.h>

int findDigit(char str[], char c)
{
    int i;
    for (i = 0; i < strlen(str); i++)
        if (str[i] == c)
            return 1;
    return 0;
}

int main()
{
    char str[50];
    int flag = 0;
    scanf("%s", str);

    if (findDigit(str, '1'))
        flag++;
    if (findDigit(str, '9'))
        flag++;
    if (findDigit(str, '7'))
        flag++;

    if (flag == 3)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}