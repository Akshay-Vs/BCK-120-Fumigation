#include <stdio.h>

int main()
{
    int n, i, j, a[100][100], b[100][100], c[100][100];
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    printf("Enter the elements in array1:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("Enter the elements in array2:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    
    printf("Sum of the two arrays:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
