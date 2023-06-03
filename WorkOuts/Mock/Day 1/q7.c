// Given two arrays of integers, write a function to find the common elements between them.

#include <stdio.h>

int main()
{
    int arr1[] = {1, 2, 3, 4, 5, 6, 7};
    int arr2[] = {2, 4, 6, 8, 9, 6, 8};
    int len1 = sizeof(arr1) / sizeof(arr1[0]);
    int len2 = sizeof(arr2) / sizeof(arr2[0]);

    for (int i = 0; i < len1; i++)
    {
        for(int j=0; j<len2; j++)
        {
            if(arr1[i]==arr2[j]) printf("%d \n", arr1[i]);
        }
    }
}