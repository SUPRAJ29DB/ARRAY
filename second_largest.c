int getSecondLargest(int *arr, int n) {
    // code here
    if(n<2){
        return -1;
    }
    int largest;
    int second_largest;
    if(arr[0]>arr[1]){
        largest=arr[0];
        second_largest=arr[1];
    }
    else if(arr[0]<arr[1]){
        largest=arr[1];
        second_largest=arr[0];
    }
    else{
        largest=arr[0];
        second_largest=-1;
    }
    

    for(int i=2;i<n;i++){
        if(arr[i]>largest){
            second_largest=largest;
            largest=arr[i];
        }
        else if (arr[i]>second_largest && arr[i]!=largest){
            second_largest=arr[i];
        }
    }
    return second_largest;
}
