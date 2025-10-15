#include <iostream>
using namespace std;


int binarySearch(int arr[], int left, int right, int target) {
    if (left > right) {
        return -1; 
    }

    int mid = left + (right - left) / 2;

    if (arr[mid] == target) {
        return mid; // Element found
    } else if (target < arr[mid]) {
        return binarySearch(arr, left, mid - 1, target);
    } else {
        return binarySearch(arr, mid + 1, right, target);
    }
}

int main() {
    int size, target;

    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter " << size << " sorted elements:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Enter the element to search: ";
    cin >> target;

    int result = binarySearch(arr, 0, size - 1, target);

    if (result == -1) {
        cout << "Element not found in the array.\n";
    } else {
        cout << "Element found at index " << result << ".\n";
    }

    return 0;
}
