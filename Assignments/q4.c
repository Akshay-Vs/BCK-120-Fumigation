#include <stdio.h>

int main()
{
    int mark;
    printf("Enter Your Mark: ");
    scanf("%d", &mark);

    if (mark > 50 && mark < 100)
    {
        printf("You passed!\n");
    }
    else if (mark < 50)
        printf("You Failed!\n");
    
    else printf("Invalid Input\n");
}