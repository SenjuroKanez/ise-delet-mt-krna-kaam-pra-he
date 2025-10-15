#include <iostream>
using namespace std;

int main() {
    int n = 10; 
    int index = 2;
    int arr[n] = {2, 3, 5, 7, 11, 13,0}; 

    int newValue = 55; 


    for (int i = n; i > index; i--) {
        arr[i] = arr[i - 1];

    }
    arr[index] = newValue;
 


    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

        for (int i = index; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    
    n--;


    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

     for (int i = 0; i < n; i++) {
        if (arr[1] == 55 )
        cout << arr[i] << " at " << i;
    }
    cout << endl;

    return 0;
}
