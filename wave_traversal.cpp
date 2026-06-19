#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Enter number of rows: ";
    cin >> rows;

    cout << "Enter number of columns: ";
    cin >> cols;

    int matrix[100][100];

    cout << "Enter matrix elements:\n";

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "\nWave Traversal: ";

    for (int j = 0; j < cols; j++) {

        if (j % 2 == 0) {
            for (int i = 0; i < rows; i++) {
                cout << matrix[i][j] << " ";
            }
        }
        else {
            for (int i = rows - 1; i >= 0; i--) {
                cout << matrix[i][j] << " ";
            }
        }
    }

    return 0;
}