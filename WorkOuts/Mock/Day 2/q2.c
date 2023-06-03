// Write a program to print all unique elements in an array.
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 2, 4, 6, 8};
    int len = sizeof(arr) / sizeof(arr[0]);
    bool is_unique;

    for (int i = 0; i < len; i++)
    {
        is_unique = true;
        for (int j = 0; j < len; j++)
        {
            if (arr[i] == arr[j] && i!=j)
            {
                is_unique = false;
                break;
            }
        }

        if (is_unique)
            printf("%d\n", arr[i]);
    }
}