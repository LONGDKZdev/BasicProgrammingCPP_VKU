#include <iostream>
#include <climits>
using namespace std;

void sumOfRow(int arr[][50], int rows, int cols, int rowNum) {
    if (rowNum < 0 || rowNum >= rows) {
        cout << "Invalid row number." << endl;
        return;
    }
    
    int rowSum = 0;
    for (int i = 0; i < cols; i++) {
        rowSum += arr[rowNum][i];
    }
    cout << "Sum of elements in row " << rowNum << ": " << rowSum << endl;
}

void sumOfColumn(int arr[][50], int rows, int cols, int colNum) {
    if (colNum < 0 || colNum >= cols) {
        cout << "Invalid column number." << endl;
        return;
    }
    
    int colSum = 0;
    for (int i = 0; i < rows; i++) {
        colSum += arr[i][colNum];
    }
    cout << "Sum of elements in column " << colNum << ": " << colSum << endl;
}

void findMinMaxInRow(int arr[][50], int cols, int rowNum) {
    int min = INT_MAX, max = INT_MIN;
    for (int i = 0; i < cols; i++) {
        if (arr[rowNum][i] < min) min = arr[rowNum][i];
        if (arr[rowNum][i] > max) max = arr[rowNum][i];
    }
    cout << "Largest in row " << rowNum << ": " << max << endl;
    cout << "Smallest in row " << rowNum << ": " << min << endl;
}

void findMinMaxInCol(int arr[][50], int rows, int colNum) {
    int min = INT_MAX, max = INT_MIN;
    for (int i = 0; i < rows; i++) {
        if (arr[i][colNum] < min) min = arr[i][colNum];
        if (arr[i][colNum] > max) max = arr[i][colNum];
    }
    cout << "Largest in column " << colNum << ": " << max << endl;
    cout << "Smallest in column " << colNum << ": " << min << endl;
}

int main() {
    int rows, cols;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    int arr[50][50];
    
    cout << "Enter the elements of the 2D array:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    int rowNum, colNum;
    
    // Sum of elements in a specific row
    cout << "Enter row number to sum: ";
    cin >> rowNum;
    sumOfRow(arr, rows, cols, rowNum);

    // Sum of elements in a specific column
    cout << "Enter column number to sum: ";
    cin >> colNum;
    sumOfColumn(arr, rows, cols, colNum);

    // Find min and max in a specific row
    cout << "Enter row number to find min and max: ";
    cin >> rowNum;
    findMinMaxInRow(arr, cols, rowNum);

    // Find min and max in a specific column
    cout << "Enter column number to find min and max: ";
    cin >> colNum;
    findMinMaxInCol(arr, rows, colNum);

    return 0;
}
