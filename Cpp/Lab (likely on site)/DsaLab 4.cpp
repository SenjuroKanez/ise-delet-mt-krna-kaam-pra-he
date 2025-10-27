#include <iostream>
using namespace std;

bool existsInArray(int arr[], int start, int end, int value) {
    for (int i = start; i <= end; i++) {
        if (arr[i] == value) {
            return true;
        }
    }
    return false;
}


void sortArray(int arr[], int indexes[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[indexes[j]] > arr[indexes[j + 1]]) {
                    int temp = arr[indexes[j]];
                    arr[indexes[j]] = arr[indexes[j + 1]];
                    arr[indexes[j + 1]] = temp;
            }
        }
    }
}


void processDuplicates(int arr[], int size) {
    bool foundDuplicate = false;
    

    for (int i = 0; i < size; i++) {

        if (existsInArray(arr, 0, i - 1, arr[i])) {
            continue;
        }
        

        int count = 0;
        int indexes[size]; 
        int maxIndexes = size;
        
        for (int j = i; j < size; j++) {
            if (arr[j] == arr[i]) {
                if (count < maxIndexes) {
                    indexes[count] = j;
                    count++;
                }
            }
        }
        

        if (count >= 2) {
            foundDuplicate = true;
            cout << "Value " << arr[i] << " appears at indexes: ";
            
            sortArray(arr, indexes, count);
            
            for (int k = 0; k < count; k++) {
                cout << indexes[k];
                if (k < count - 1) {
                    cout << ", ";
                }
            }
            cout << endl;
        }
    }
    
    if (!foundDuplicate) {
        cout << "No duplicate values found in the array." << endl;
    }
}

int main() {
    
    int arr[] = {5, 2, 8, 2, 9, 5, 1, 8, 5, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl << endl;
    
    processDuplicates(arr, size);
    
    cout << endl << "Another example:" << endl;
    int arr2[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    
    cout << "Original array: ";
    for (int i = 0; i < size2; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl << endl;
    
    processDuplicates(arr2, size2);
    
    return 0;
}