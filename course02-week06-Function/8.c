#include <stdio.h>
#include <string.h>

int main()
{
    char string[100];
    int shift;
    int i;

    printf("Enter a String: ");
    scanf("%s", string);
    printf("Enter string Size: ");
    scanf("%d", &shift);

    for (i = 0; i < strlen(string); i++)
    {
        string[i] = (string[i] - 97 + shift) % 26 + 97;
    }

    printf("%s", string);

    return 0;
}