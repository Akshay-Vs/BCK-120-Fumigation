//Merge 2arrays and sort

#include <stdio.h>

void sort(int arr[], int len)
{
    for (int i = 0; i < len; i++)
        for (int j = 0; j < i; j++)
            if (arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
}

void merge(int arr1[], int arr2[], int len1, int len2, int arr3[])
{
    int len3 = len1 + len2;
    int i, j;

    for (i = 0; i < len1; i++)
        arr3[i] = arr1[i];

        for (j = 0; j < len2; j++, i++)
          arr3[i] = arr2[j];
}

int main()
{
    int arr1[] = {6, 7, 8, 9};
    int arr2[] = {1, 3, 2, 4, 5};

    int len1 = sizeof(arr1) / sizeof(arr1[0]);
    int len2 = sizeof(arr2) / sizeof(arr2[0]);

    int merge_len = len1 + len2;
    int merge_arr[merge_len];

    merge(arr1, arr2, len1, len2, merge_arr);
    sort(merge_arr, merge_len);

    printf("Merged array in descending order: ");
    for (int i = 0; i < merge_len; i++)
    {
        printf("%d ", merge_arr[i]);
    }
    printf("\n");

    return 0;
}