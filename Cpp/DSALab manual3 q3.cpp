// Write a C++ program to find the number of 1's in a sorted binary array (using binary search)
#include <iostream>
using namespace std;

//Binary search pehle 1 ko find kr rha he.(╹ڡ╹ )
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

//Is function me array input or 1s count ho jaye ga (づ￣ 3￣)づ

int main() {
    int n, l;
    cout << "Enter the size of the array: ";
    cin >> n;

    if (n <= 0) {
        throw std::invalid_argument("Array size must be positive.");
    }

    int arr[n];
    cout << "Enter " << n << " elements (0s and 1s only): " << endl;
    for (int i = 0; i < n; i++) {
        cin >> l;
        if (l != 0 && l != 1) {
            cout << "Invalid input. Please enter only 0s and 1s." << endl;
        }else{
            arr[i] = l;
        }
    }

    // Sort (in case the array isn’t already sorted)
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int a = arr[i];
                arr[i] = arr[j];
                arr[j] = a; 
            }
        }
    }

    int target =1;
    int otal = binarySearch(arr, 0, n - 1, target);


    int total = n - otal; 

    cout << "Total number of 1s: " << total << endl;

    return 0;
}
