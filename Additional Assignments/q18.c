#include <stdio.h>

int main()
{
    char str[100];
    int len = 0;

    printf("Enter the string: ");
    scanf("%s", str);

    while (str[len] != '\n')
        len++;

    for(int i=0; i<len; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
    }
    printf("Upper Case: %s", str);
    printf("\n");
    return 0;
}
