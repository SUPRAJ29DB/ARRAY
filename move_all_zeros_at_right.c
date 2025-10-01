#include<stdio.h>
void move(int arr[], int n){
    int temp[n];
    int j=0;
    for (int i=0;i<n;i++){
        if (arr[i]!=0){
            temp[j++]=arr[i];
        }
    }
    while (j<n){
        temp[j++]=0;
    }
    for (int i = 0; i < n; i++){
        arr[i] = temp[i];
}
}
int main() {
    int arr[] = {1, 2, 0, 4, 3, 0, 5, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    move(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}//
// Created by Suprakash Ghosh on 02-10-2025.
//
