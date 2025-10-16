#include <iostream>
using namespace std;

//ye he recursive binary sort funcition ヾ(⌐■_■)ノ♪
int binarySearch(int arr[], int left, int right, int target) {
    if (left > right) {
        return -1; 
    }

    int mid = left + (right - left) / 2;

    if (arr[mid] == target) {
        return mid; 
    } else if (target < arr[mid]) {
        return binarySearch(arr, left, mid - 1, target);
    } else {
        return binarySearch(arr, mid + 1, right, target);
    }
}

//main fucnction me array input or sort ho jaye gi phir binary search call ho jaye ga (*￣3￣)╭
int main() {
    int size, target;

    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    // ye sort ho rha he (•_•)
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int l = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = l; 
            }
        }
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
