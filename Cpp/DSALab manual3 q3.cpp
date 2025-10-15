// Write a C++ program to find the number of 1's in a sorted binary array (using binary search)
#include <iostream>
using namespace std;

// Function to find the index of the first 1 using binary search
int binarySearch(int arr[], int left, int right, int target) {
    if (left > right) {
        return -1; 
    }

    int mid = left + (right - left) / 2;

        if (arr[mid] == target && arr[mid-1] == 0 ){
        return mid; 
        
    } else if (target < arr[mid]) {
        return binarySearch(arr, left, mid - 1, target);
    } else {
        return binarySearch(arr, mid + 1, right, target);
    }
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    if (n <= 0) {
        cout << "Array size must be positive." << endl;
        return 1;
    }

    int arr[n];
    cout << "Enter " << n << " elements (0s and 1s only): " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] != 0 && arr[i] != 1) {
            cout << "Invalid input. Please enter only 0s and 1s." << endl;
            return 1;
        }
    }

    // Sort (in case the array isn’t already sorted)
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                swap(arr[i], arr[j]);
            }
        }
    }

    int target =1;
    int otal = binarySearch(arr, 0, n - 1, target);


    int total = n - otal; // Calculate the number of 1's

    cout << "Total number of 1s: " << total << endl;

    return 0;
}
