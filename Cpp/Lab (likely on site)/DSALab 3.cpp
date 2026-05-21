#include <iostream>
using namespace std;

//ye he recursive binary sort funcition ヾ(⌐■_■)ノ♪
int BinarySearch(int arr[], int left, int right, int target) {
    if (left > right) {
        return -1; 
    }

    int mid = left + (right - left) / 2;

    if (arr[mid] == target) {
        return mid; 
    } else if (target < arr[mid]) {
        return binarySearch(arr, left, mid - 1, target);
    } else {
        return binarySearch(arr, mid + 1, right, target);
    }
}
int main(){
    Q1();
    Q2();
    Q3();
    Q4();
    Q5();
}
//main fucnction me array input or sort ho jaye gi phir binary search call ho jaye ga (*￣3￣)╭
int Q1() {
    int size, target;

    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    // ye sort ho rha he (•_•)
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int l = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = l; 
            }
        }
    }
    cout << "Enter the element to search: ";
    cin >> target;

    int result = BinarySearch(arr, 0, size - 1, target);

    if (result == -1) {
        cout << "Element not found in the array.\n";
    } else {
        cout << "Element found at index " << result << ".\n";
    }

    return 0;
}
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
int Q2() {
    
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
// Binary search pehle 1 ko find kr rha he.(╹ڡ╹ )
int binarySearch(int arr[], int left, int right, int target) {
    if (left > right) {
        return -1; 
    }

    int mid = left + (right - left) / 2;

    if (arr[mid] == target && (mid == 0 || arr[mid - 1] == 0)) {
        return mid;
    } else if (target < arr[mid]) {
        return binarySearch(arr, left, mid - 1, target);
    } else {
        return binarySearch(arr, mid + 1, right, target);
    }
}

int Q3() {
    int n, l;
    cout << "\nEnter the size of the array: ";
    cin >> n;

    if (n <= 0) {
        throw invalid_argument("Array size must be positive.");
    }

    int arr[n];
    cout << "Enter " << n << " elements (0s and 1s only): " << endl;
    int i = 0;
    while (i < n) {
        cin >> l;
        if (l != 0 && l != 1) {
            cout << "Invalid input. Please enter only 0s and 1s." << endl;
        } else {
            arr[i] = l;
            i++;
        }
    }

    // Sort (in case the array isn’t already sorted)
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    int target = 1;
    int otal = binarySearch(arr, 0, n - 1, target);

    int total;
    if (otal == -1) {
        total = 0;
    } else {
        total = n - otal;
    }

    cout << "Total number of 1s: " << total << endl;
    return 0;
}

int Q4() {
    int rows, cols;
    
    cout << "Enter number of rows: ";
    cin >> rows;
    
    cout << "Enter number of columns: ";
    cin >> cols;
    
    int matrix[rows][cols], transpose[cols][rows];
    
    cout << "Enter elements of matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }
    
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
    
    cout << "Matrix:\n";
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Transpose of the matrix:\n";
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}


int Q5() {
    int rows, cols;

    cout << "Enter number of rows: ";
    cin >> rows;

    cout << "Enter number of columns: ";
    cin >> cols;

    int matrix1[rows][cols], matrix2[rows][cols], result[rows][cols];


    cout << "Enter elements of first matrix:\n";
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cin >> matrix1[i][j];
        }
    }


    cout << "Enter elements of second matrix:\n";
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cin >> matrix2[i][j];
        }
    }


    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }


    int maxVal = result[0][0];
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(result[i][j] > maxVal){
                maxVal = result[i][j];
            }
        }
    }


    cout << "Resultant matrix after subtraction:\n";
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Maximum value in the resultant matrix: " << maxVal << endl;

    return 0;
}
