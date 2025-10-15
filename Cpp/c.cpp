#include <iostream>
using namespace std;

int main() {
    int n = 7; 
    int index = 0;
    int arr[n] = {2, 3, 5, 7, 11, 13}; 

    


    for (int i = index; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    
    n--;


    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
