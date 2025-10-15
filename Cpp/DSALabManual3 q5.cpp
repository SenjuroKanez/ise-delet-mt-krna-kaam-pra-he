#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Enter number of rows: ";
    cin >> rows;

    cout << "Enter number of columns: ";
    cin >> cols;

    int matrix1[rows][cols], matrix2[rows][cols], result[rows][cols];

    // Input first matrix
    cout << "Enter elements of first matrix:\n";
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cin >> matrix1[i][j];
        }
    }

    // Input second matrix
    cout << "Enter elements of second matrix:\n";
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cin >> matrix2[i][j];
        }
    }

    // Subtract matrix2 from matrix1
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }

    // Find max value using linear search in the result matrix
    int maxVal = result[0][0];
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(result[i][j] > maxVal){
                maxVal = result[i][j];
            }
        }
    }

    // Display the resultant matrix
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
