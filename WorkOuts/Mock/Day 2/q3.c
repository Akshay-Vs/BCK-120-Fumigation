// Write a program to print all prime numbers in an array.
#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num)
{
    if(num==0 || num==1)
    {
        return false;
    }

    for(int i=2; i<=num/2; ++i)
        if(num%i==0) return false;
    
    return true;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int len = sizeof(arr) / sizeof(arr[0]);
    

    for(int i=0; i<len; i++)
        if(isPrime(arr[i]))
            printf("%d\n",arr[i]);

    return 0;
}