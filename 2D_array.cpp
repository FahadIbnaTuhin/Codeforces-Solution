#include <iostream>
using namespace std;

const int ROWS = 3;
const int COLS = 4;

int main() {
    // Declare a 2D array
    int matrix[ROWS][COLS];

    // Initialize the elements of the array
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            matrix[i][j] = i * COLS + j; // Fill with some values
        }
    }

    // Access and print the elements of the array
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
