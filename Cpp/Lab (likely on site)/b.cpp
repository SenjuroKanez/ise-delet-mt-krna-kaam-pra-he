#include <iostream>
using namespace std;

int main() {
    int n = 10; 
    int index = 4;
    int arr[n] = {2, 3, 5, 7, 11, 13}; 

    int newValue = 99; 


    for (int i = n; i > index; i--) {
        arr[i] = arr[i - 1];
    }
    arr[index] = newValue;
    n++;


    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
