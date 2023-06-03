// Write a function that takes an array of integers and returns the sum of all the elements.

#include <stdio.h>

int main()
{
    int arr[20];
    int len=0;
    int sum;

    printf("Enter the limit: ");
    scanf("%d",&len);
    printf("Enter the elements one by one:\n");

    for(int i=0; i<len; i++)
        scanf("%d", &arr[i]);
    
    for(int i=0; i<len; i++)
        sum += arr[i];
    
    printf("Sum is %d\n", sum);
}