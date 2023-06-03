// Write a program to print all prime numbers in an array.
#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num)
{
    if (num <= 1)
    {
        return false;

        for (int i = 2; i * i <= num; i++)
        {
            if (num % i == 0)
                return false;
        }

        return true;
    }
}

void findPrime(int arr[], int len)
{
    for (int i = 0; i < len; i++)
        if (isPrime(arr[i]))
        {
            printf("%d", arr[i]);
        }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int len = sizeof(arr) / sizeof(arr[0]);
    findPrime(arr, len);
    return 0;
}