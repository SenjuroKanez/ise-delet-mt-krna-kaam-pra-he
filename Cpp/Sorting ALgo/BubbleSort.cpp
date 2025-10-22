#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    for(int j = 0; j < n ; j++){
        bool swapped = false;
        for(int i = 0; i < n - j - 1 ; i++){
            if(arr[i] > arr[i + 1]){
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i +1] = temp;
                swapped = true;
            }
        }
        if(!swapped) break;
    }
}

int main(){
    int n;
    cout << "\n Enter The size of the array:";
    cin >> n;
    int arr[n];
    cout << "\n Enter The elements of the array:";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    bubbleSort(arr, n);
    
    cout << "\n The sorted array is:";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}