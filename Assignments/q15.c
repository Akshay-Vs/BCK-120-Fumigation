#include <stdio.h>

int getarr(int arr[], int len)
{
    printf("Enter the elements of array: ");
    for(int i=0; i<len; i++)
    {
        scanf("%d", &arr[i]);
    }
}

int printarr(int arr[], int len)
{
    for(int i=0; i<len; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int len;
    printf("Enter the size of array: ");
    scanf("%d",&len);
    int arr[len];

    getarr(arr, len);

    printf("The array is: ");
    printarr(arr, len);
    printf("\n");
    return 0;
}