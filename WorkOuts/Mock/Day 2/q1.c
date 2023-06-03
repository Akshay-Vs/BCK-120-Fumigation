//Write a program to count the total number of duplicate elements in an array.

#include <stdio.h>

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,3,5,7,9};

    int len = sizeof(arr)/sizeof(arr[0]);
    int count = 0;

    for(int i=0; i<len; i++)
    {
        for(int j=0; j<i; j++)
        {
            if(arr[i]==arr[j] && i!=j)
            {
                count++;
            }
        }
    }

    printf("There are %d duplicate elements\n",count);
}