// Write a function to reverse the elements of an array.

#include <stdio.h>

int reverse(int *arr, int len)
{
    int start = 0;
    int end = len - 1;

    while (start <= end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    for (int i = 0; i < len; i++)
        printf("%d ", arr[i]);
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int len = sizeof(arr)/sizeof(arr[0]);

    reverse(arr, len);
    printf("\n");
    return 0;
}