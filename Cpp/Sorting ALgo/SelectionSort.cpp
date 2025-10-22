#include <iostream>
using namespace std;

void SelectionSort(int arr[], int n){
    for(int i = 0; i < n;i++ ){
        int minIndex = i;
        for(int j = i +1; j < n; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        if(minIndex != i){
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
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

    SelectionSort(arr, n);

    cout << "\n The sorted array is:";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}