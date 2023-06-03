#include <stdio.h>

int main()
{
    int len;

    printf("Enter the size of the array: ");
    scanf("%d", &len);
    int arr1[len], arr2[len];

    printf("Enter the elements of arr1: ");
    for (int i = 0; i < len; i++)
        scanf("%d", &arr1[i]);

    printf("Enter the elements of arr2: ");
    for (int i = 0; i < len; i++)
        scanf("%d", &arr2[i]);

    for (int i = 0; i < len; i++)
    {
        int temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }

    printf("Arr1: ");
    for (int i = 0; i < len; i++)
    {
        printf("%d", arr1[i]);
    }

    printf("\nArr2: ");
    for (int i = 0; i < len; i++)
    {
        printf("%d", arr2[i]);
    }
    printf("\n");
    return 0;
}