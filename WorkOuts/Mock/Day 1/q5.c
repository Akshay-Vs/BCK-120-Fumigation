// Given an array of integers, write a function to find the average of all the elements.

#include <stdio.h>

void average(int *arr, int len)
{
    int sum;
    int average;

    // find sum
    for (int i = 0; i < len; i++)
        sum += arr[i];

    average = sum / len;
    printf("%d\n", average);
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int len = sizeof(arr) / sizeof(arr[0]);
    average(arr, len);
}