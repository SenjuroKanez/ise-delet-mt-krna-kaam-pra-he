
#include <iostream>
using namespace std;
int main(){
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