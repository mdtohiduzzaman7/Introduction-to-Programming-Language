#include <stdio.h>
#include <string.h>

void sortDescending(char str[])
{
    int n = strlen(str);
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (str[i] < str[j])
            {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

int main()
{
    char str[100];

    scanf("%s", str);
    sortDescending(str);
    printf("%s", str);
    return 0;
}
