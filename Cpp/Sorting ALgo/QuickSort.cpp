#include <iostream>
using namespace std;

void quickSOrt(int arr[], int low, int high){
    if(low < high){
        int pivot = arr[high];
        int i = low - 1;

        for(int j = low; j < high; j++){
            if(arr[j] < pivot){
                i++;
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        int temp = arr[i + 1];
        arr[i + 1] = arr[high];
        arr[high] = temp;
        int pi = i + 1;

        quickSOrt(arr, low, pi - 1);
        quickSOrt(arr, pi + 1, high);
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

    quickSOrt(arr, 0, n - 1);

    cout << "\n The sorted array is:";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}