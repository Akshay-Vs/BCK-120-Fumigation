#include <stdio.h>

int main()
{
    int a[100][100], b[100][100], c[100][100];
    int len;
    printf("Enter the lenght of array: ");
    scanf("%d", &len);

    // array1
    printf("Enter elements for Array1: ");
    for (int i = 0; i < len; i++)
        for (int j = 0; j < len; j++)
            scanf("%d", &a[i][j]);

    // array2
    printf("Enter elements for Array2: ");
    for (int i = 0; i < len; i++)
        for (int j = 0; j < len; j++)
            scanf("%d", &b[i][j]);

    // sum
    printf("The sum is:\n");
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}