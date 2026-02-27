int subarraySum(int* arr, int n, int target, int* res) {
    int start = 0;
    int current_sum = 0;
    for (int end = 0; end < n; end++) {
        current_sum += arr[end];
        while (current_sum > target && start <= end) {
            current_sum -= arr[start];
            start++;
        }
        if (current_sum == target) {
            res[0] = start + 1;   
            res[1] = end + 1;
            return 1;           
        }
    }
    return 0;  
}
