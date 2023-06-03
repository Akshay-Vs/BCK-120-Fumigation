#include <stdio.h>
#include <stdbool.h>

int main()
{
    int arr[] = {2, 9,  4,  6,  9,  4};
    int len = 0;
    bool is_repeating;

    while (arr[len] != '\0')
        len++;

    for (int i = 0; i < len; i++)
    {
        is_repeating = false;
        for (int j = i; j < len; j++)
        {
            if (arr[i] == arr[j] & i != j)
            {
                is_repeating = true;
                break;
            }
        }

        if(is_repeating==true)printf("%d is repeating\n", arr[i]);
    }
}