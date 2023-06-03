#include <stdio.h>

int main()
{
    int rows = 6;
    for(int i = 0; i < rows; i++) {
        
        for(int j = 0; j < rows - i; j++)
            printf(" ");

        for(int k = 1; k < i+1; k++)
            printf("%d ",k);

        printf("1\n");
    }
}