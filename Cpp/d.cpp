#include <iostream>
#include <vector>
using namespace std;

// Binary search on a sorted vector
int binarySearch(const vector<int>& arr, int key) {
	int low = 0;
	int high = static_cast<int>(arr.size()) - 1;
	while (low <= high) {
		int mid = low + (high - low) / 2;
		if (arr[mid] == key) {
			return mid; // Element found
		} else if (key < arr[mid]) {
			high = mid - 1; // Search in left half
		} else {
			low = mid + 1; // Search in right half
		}
	}
	return -1; // Element not found
}

// Linear search on a vector
int linearSearch(const vector<int>& arr, int key) {
	for (size_t i = 0; i < arr.size(); i++) {
		if (arr[i] == key) {
			return static_cast<int>(i); // Return index if element is found
		}
	}
	return -1; // Return -1 if element not found
}

int main() {
	int n, key;
	// Input array size
	cout << "Enter the size of array: ";
	if (!(cin >> n) || n <= 0) {
		cerr << "Invalid size\n";
		return 1;
	}

	vector<int> arr(n);
	// Input array elements
	cout << "Enter " << n << " elements:\n";
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	// Input the key to search
	cout << "Enter the element to search: ";
	cin >> key;
	// Perform linear search
	int result = linearSearch(arr, key);
	// Output result
	if (result != -1)
		cout << "Element found at index " << result << endl;
	else
		cout << "Element not found in the array." << endl;

	// Use different variable names for the second search
	int n_b, key_b;
	cout << "Enter the size of array: ";
	if (!(cin >> n_b) || n_b <= 0) {
		cerr << "Invalid size\n";
		return 1;
	}
	vector<int> arr_b(n_b);
	cout << "Enter " << n_b << " elements in sorted order:\n";
	for (int i = 0; i < n_b; i++) {
		cin >> arr_b[i];
	}
	cout << "Enter the element to search: ";
	cin >> key_b;
	int result_b = binarySearch(arr_b, key_b);
	if (result_b != -1)
		cout << "Element found at index " << result_b << endl;
	else
		cout << "Element not found in the array." << endl;

	return 0;
}