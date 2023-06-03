#include <stdio.h>

int main()
{
    char str1[10];
    char str2[10];
    int len = 0, count = 0;

    printf("Enter string 1: ");
    scanf("%s", str1);

    printf("Enter string 2: ");
    scanf("%s", str2);

    while (str1[len] != '\0')
        len++;

    for (int i = 0; i < len; i++)
    {
        if (str1[i] == str2[i])
        {
            count++;
        }
    }

    if (count == len)
        printf("Str is same\n");
    else
        printf("Str is different\n");
}