#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int length(char *string)
{
    int length = 0;
    while (string[length] != '\0')
        length++;
    printf("Length of the string is: %d\n", length);
    return length;
}

void reverse(char *string)
{
    int len = length(string);
    int start = 0, end = len - 1;

    while (start <= end)
    {
        int temp = string[start];
        string[start] = string[end];
        string[end] = temp;
        start++;
        end--;
    }
    printf("Reversed string is: %s", string);

    return;
}

void concatinate(char *string1, char *string2)
{
    printf("Concatinated string is: %s%s", string1, string2);
}

void Exit() { exit(0); }

int main()
{
    int input;
    char str[100];

    while (true)
    {
        printf("\n\n\n\t1. STRING LENGTH\n");
        printf("\t2. STRING CONCATENATION\n");
        printf("\t3. STRING REVERSE\n");
        printf("\t4. Exit\n");

        printf("\nEnter Your Choice: ");
        scanf("%d", &input);

        if (input == 4)
            Exit();
            
        printf("\nEnter Your String: ");
        scanf("%s", str);

        if (input == 1)
            length(str);

        else if (input == 2)
        {
            char str2[100];
            printf("Enter other string to concatinate: ");
            scanf("%s", str2);
            concatinate(str, str2);
        }

        else if (input == 3)
            reverse(str);

        else
            printf("invalid input\n");
    }
    return 0;
}