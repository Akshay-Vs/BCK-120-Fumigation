#include <stdio.h>
#include <string.h>

int main()
{
    char string[] = "MALAYALAM";

    int len = strlen(string);
    char temp[len];
    int start = 0, end = len - 1;
    strcpy(temp, string);

    while (start < end)
    {
        int temp = string[start];
        string[start] = string[end];
        string[end] = temp;

        start++;
        end--;
    }
    string[len] = '\0';
    if(strcmp(string, temp)==0) printf("palintrome\n");
    else printf("is not palintrome\n");
}