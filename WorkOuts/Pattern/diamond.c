#include <stdio.h>
int main()
{
    int rows = 6;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            if (j + i < 5)
                printf(" ");
            else
                printf("*");
        }

        for (int k = 0; k < i; k++)
        {
            printf("*");
        }
        printf("\n");
    }


    return 0;
}