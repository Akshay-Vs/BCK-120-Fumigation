#include <stdio.h>

int main()
{
    char str[25] = "Hello";
    char copy[25] = "";
    int len = 0;

    while (str[len] !='\0') len++;

    for (int i = 0; i < len; i++)
    {
        copy[i] = str[i];
    }

    printf("Orginal str: %s\nCopied str:%s\n", str,copy);
}