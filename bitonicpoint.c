#include <iostream>
using namespace std;

int bitonic(int arr[], int n)
{
    int left = 0, right = n - 1;

    while (left < right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] < arr[mid + 1])
        {
            left = mid + 1;   // increasing part
        }
        else
        {
            right = mid;     // decreasing part or peak
        }
    }

    return arr[left]; // bitonic point
}

int main()
{
    // Static array
    int arr[] = {1, 3, 8, 12, 9, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Bitonic Point (Maximum Element) is: "
         << bitonic(arr, n) << endl;

    return 0;
}
