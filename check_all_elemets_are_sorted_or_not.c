#include <stdio.h>
#include<stdbool.h>
bool sorted(int arr[], int n){
    for (int i=1;i<n;i++){
        if (arr[i-1] > arr[i]){
            return false;
        }
    }
    return true;
}
int main() {
    int arr[] = { 20, 30, 50, 40, 50 };
    int n = sizeof(arr) / sizeof(arr[0]);

    if (sorted(arr, n))
        printf("true\n");
    else
        printf("false\n");

    return 0;
}
// Created by Suprakash Ghosh on 01-10-2025.
//
