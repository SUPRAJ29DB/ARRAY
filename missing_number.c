int missingNum(int arr[], int size) {
    // code here
    long long int total=(long long)(size+2)*(size+1)/2;
    long long int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    return (int) total-sum;

}
