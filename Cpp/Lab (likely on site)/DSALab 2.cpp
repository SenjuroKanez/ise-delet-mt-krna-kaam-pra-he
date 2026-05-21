#include <iostream>
using namespace std;

void Sum9(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                cout << "[" << i << ", " << j << "]" << endl;
                return; 
            }
        }
    }
    cout << "No solution found" << endl;
}
int main(){
    Q1();
    Q2();
}
int Q1() {
    int nums[] = {2, 7, 11, 15};
    int n = sizeof(nums) / sizeof(nums[0]);
    int target = 9;

    Sum9(nums, n, target);

    return 0;
}
int Q2() {
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
int Q3(){
    int arr[8];

    for(int i = 0; i <= 8;i++){
        cout <<" Entr even numbers\n";
        cin>> arr[i];
    }

    for(int i = 0; i <= 8; i++)
    {
        for (int j = i + 1; j < 8 ; j++)
        {
            if (arr[i] < arr [j])
            {
                int n;
                n = arr[i];
                arr[j] = i;
                arr[j] = n;
            }
        }
    }

    for (int i = 0; i < 8; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}