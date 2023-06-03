void max(int arr[])
{
    int len = sizeof(arr) / sizeof(arr[0]);
    int max = 0;
    for(int i=0; i<len; i++)
    {
        if(arr[i]>max) max=arr[i];
    }
    printf("Maximum element is %d", max);
}