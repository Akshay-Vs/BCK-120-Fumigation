// Write a function to check if an array contains a specific element. The function should return true if the element is found, and false otherwise.

#include <stdio.h>
#include <stdbool.h>

bool find_element(int *arr, int len, int find)
{
    for(int i=0; i<len; i++)
        if(arr[i] == find)
        {
            printf("True\n");
            return true;
        }
        else false;
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    int len = sizeof(arr)/sizeof(arr[0]);
    int find = 2;
    find_element(arr, len, find);
    
}