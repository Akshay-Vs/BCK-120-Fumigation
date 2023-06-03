// Given an array of integers, write a function to find the maximum element in the array.

#include <stdio.h>

void max(int *arr, int len)
{
    int max = 0;
    for (int i = 0; i < len; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    printf("Maximum element is %d\n", max);
}
 
int main()
{
    int arr[] = {1, 3, 7, 88};
    int len = sizeof(arr) / sizeof(arr[0]);

    max(arr, len);
}