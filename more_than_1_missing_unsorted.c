#include<stdio.h>
void missing_unsorted(int arr[], int n, int range){
    int present[range+1];
    for(int i=0; i<=range; i++){
        present[i] = 0;
    }
    for (int i = 0; i < n; i++){
        if (arr[i]<=range&&arr[arr[i]]>=0){
            present[arr[i]]++;
        }
    }
    printf("Missing numbers: ");
    for (int i = 1; i <= range; i++) {
        if (present[i] == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}
int main() {
    int arr[] = {7, 3, 1, 5};  // Missing: 2, 4, 6
    int n = sizeof(arr) / sizeof(arr[0]);
    int range = 7; // Numbers should be from 1 to 7
    missing_unsorted(arr, n, range);
    return 0;
}
