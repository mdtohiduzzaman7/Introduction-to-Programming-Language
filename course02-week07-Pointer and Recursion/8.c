#include <stdio.h>
#include <string.h>

void broken_keyboard(char *s)
{
    int i, j, len = strlen(s);
    for (i = 0; i < len; i++)
    {
        printf("%c", s[i]);
        if ((i + 1) % 2 == 0)
        {
            printf("%c", s[i]);
        }
    }
}

int main()
{
    char s[100];
    scanf("%s", s);
    broken_keyboard(s);
    return 0;
}
