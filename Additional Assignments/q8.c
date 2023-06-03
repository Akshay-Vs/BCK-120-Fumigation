#include <stdio.h>

int main()
{
    int arr[25];
    int len;

    printf("Enter the lenght: ");
    scanf("%d", &len);

    printf("\nEnter the elements one by one: ");

    for (int i = 0; i < len; i++)
    {
        scanf("%d", &arr[i]);
    }

    // bubble sort
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(int i=0; i<len; i++)
        printf("%d", arr[i]);
    printf("\n");
}