#include <stdio.h>

int main()
{
    char str[25];
    int len = 0;

    printf("Enter input: ");
    scanf("%s", str);

    while(str[len] != '\0') len++;

    for(int i =0; i<len; i++)
        printf("%d", str[i]);
    
    printf("\n");

    return 0;
}