#include <stdio.h>
#include <ctype.h>

void q12(char *str)
{
    int len = 0;

    int string = 0;
    int digit = 0;
    int special = 0;

    // find len
    while (str[len] != '\0')
        len++;

    for (int i = 0; i < len; i++)
    {
        // check for approproate items
        if (str[i] > 'A' && str[i] < 'z')
            string++;

        else if (isdigit(str[i]))
            digit++;

        else
            special++;
    }

    printf("Number of Alphabets in the string is: %d\n", string);
    printf("Number of Digits in the string is: %d\n", digit);
    printf("Number of Special Characters in the string is: %d\n", special);
}

int main()
{
    char str[] = "hello, Welcome to District B-13 ";

    q12(str);
    return 0;
}