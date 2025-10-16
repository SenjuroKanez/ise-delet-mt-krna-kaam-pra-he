#include <iostream>
using namespace std;

/*is me more than one max value nahi hoga
 us k lie either vecrot array lagegi ya phir 2 extra arrays lagegi (•_•)
 (but question did not ask for that)*/
//Minimum maximum value akhri index ke kareeb find kre ga (•_•)
void findMaxmin(int arr[], int n){
        
    int maxVal = arr[0], maxIndex = 0;
    int minVal = arr[0], minIndex = 0;

    
    for (int i = 0; i < n; i++) {
        if(arr[i] > maxVal){
            maxVal = arr[i];
            maxIndex = i;
        }

    }
    cout << "Maximum value: " << maxVal << " at index " << maxIndex << endl;
    
    for (int i = 0; i < n; i++) {
       if (arr[i] < minVal){ 
            minVal = arr[i];
            minIndex = i;
        }
    }
    
    cout << "Minimum value: " << minVal << " at index " << minIndex << endl;
 
}

//Array input or max min find ho jaye ga(づ￣ 3￣)づ
int main() {
    
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    if (n <= 0) {
        throw std::invalid_argument("Array size must be positive.");
    }

    int arr[n];
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    findMaxmin(arr, n);

}