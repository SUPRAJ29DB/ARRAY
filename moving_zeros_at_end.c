#include<stdio.h>
void push_zeros_at_end(int arr[], int n)
{
    int count=0;
    for (int i=0;i<n;i++)
    {
        if (arr[i] != 0)
        {
            int temp = arr[count];
            arr[count] = arr[i];
            arr[i] = temp;
            count++;
        }
    }
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d\t", arr[i]);
    printf("\n");
}
int main()
{
    int arr1[]={10,20,30,40};
    int n1=(sizeof(arr1)/sizeof(arr1[0]));
    int arr2[]={1,2,4,0,6,5,0,9,0};
    int n2=(sizeof(arr2)/sizeof(arr2[0]));
    int arr3[]={0,0};
    int n3=(sizeof(arr3)/sizeof(arr3[0]));
    push_zeros_at_end( arr1, n1);
    printArray( arr1, n1);
    push_zeros_at_end(arr2, n2);
    printArray(arr2, n2);
    push_zeros_at_end(arr3, n3);
    printArray(arr3, n3);
    return 0;
}

//
// Created by Suprakash Ghosh on 31-10-2025.
//