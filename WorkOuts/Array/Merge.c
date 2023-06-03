#include <stdio.h>

int main()
{
    char arr1[] = {1, 2, 3, 4, 5};
    char arr2[] = {6, 7, 8, 9, 10};
    int len1 = sizeof(arr1) / sizeof(arr1[0]);
    int len2 = sizeof(arr2) / sizeof(arr2[0]);
    int len3 = len1 + len1;
    char arr3[len3];

    for (int i = 0; i < len1; i++)
        arr3[i] = arr1[i];

    for (int i = 0; i < len2; i++)
        arr3[len1 + i] = arr2[i];

    for (int i = 0; i < len3; i++)
        printf("%d", arr3[i]);

    printf("\n");
}