// Write a C++ program to find the number of 1's in a sorted binary array (using binary search)
#include <iostream>
using namespace std;

// Binary search pehle 1 ko find kr rha he.(╹ڡ╹ )
int binarySearch(int arr[], int left, int right, int target) {
    if (left > right) {
        return -1; 
    }

    int mid = left + (right - left) / 2;

    if (arr[mid] == target && (mid == 0 || arr[mid - 1] == 0)) {
        return mid;
    } else if (target < arr[mid]) {
        return binarySearch(arr, left, mid - 1, target);
    } else {
        return binarySearch(arr, mid + 1, right, target);
    }
}

int main() {
    int n, l;
    cout << "\nEnter the size of the array: ";
    cin >> n;

    if (n <= 0) {
        throw invalid_argument("Array size must be positive.");
    }

    int arr[n];
    cout << "Enter " << n << " elements (0s and 1s only): " << endl;
    int i = 0;
    while (i < n) {
        cin >> l;
        if (l != 0 && l != 1) {
            cout << "Invalid input. Please enter only 0s and 1s." << endl;
        } else {
            arr[i] = l;
            i++;
        }
    }

    // Sort (in case the array isn’t already sorted)
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    int target = 1;
    int otal = binarySearch(arr, 0, n - 1, target);

    int total;
    if (otal == -1) {
        total = 0;
    } else {
        total = n - otal;
    }

    cout << "Total number of 1s: " << total << endl;
    return 0;
}
