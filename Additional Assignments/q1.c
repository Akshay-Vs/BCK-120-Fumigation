#include <stdio.h>

void printStr(char *str, int count)
{
    if(count < 1) return;
    printf("%s\n", str);
    printStr(str, count-1);

}
int main()
{
    char string[15];
    printf("Enter a string: ");
    scanf("%s", string);
    printStr(string, 7);
}