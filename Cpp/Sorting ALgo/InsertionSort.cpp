#include <iostream>
using namespace std;

void insertionSort(int arr[], int n){
    for(int i = 1; i < n; i++){
        int key = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
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

    insertionSort(arr, n);

    cout << "\n The sorted array is:";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
