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

int main() {
    int nums[] = {2, 7, 11, 15};
    int n = sizeof(nums) / sizeof(nums[0]);
    int target = 9;

    Sum9(nums, n, target);

    return 0;
}
