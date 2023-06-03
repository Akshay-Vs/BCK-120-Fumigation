// Write a function to sort an array of integers in ascending order.

#include <stdio.h>

int main()
{
    int arr[] = {1, 6, 2, 9, 3, 8, 0};
    int len = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
            if (arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
    }

    for(int i=0; i<len; i++) printf("%d\n", arr[i]);
}