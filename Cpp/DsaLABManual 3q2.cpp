#include <iostream>
using namespace std;

int main() {
    
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    if (n <= 0) {
        cout << "Array size must be positive." << endl;
        return 1;
    }

    int arr[n];
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    
    int maxVal;
    int minVal;

    
    for (int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            if (arr[i] > arr[j]) {
            maxVal = arr[i];
            }
        }
    }
        
    for (int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            if (arr[i] < arr[j]) {
            minVal = arr[i];
            }
        }

    }
    
    cout << "Maximum value: " << maxVal << endl;
    cout << "Minimum value: " << minVal << endl;

    return 0;
}