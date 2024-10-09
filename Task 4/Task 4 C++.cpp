#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> matrix_slicing(const vector<vector<int>>& matrix, int row_start_index, int row_end_index, int col_start_index, int col_end_index) {
    vector<vector<int>> sliced_matrix;

    for (int i = row_start_index; i < row_end_index; i++) {
        vector<int> row_slice;
        for (int j = col_start_index; j < col_end_index; j++) {
            row_slice.push_back(matrix[i][j]);
        }
        sliced_matrix.push_back(row_slice);
    }
    return sliced_matrix;
}

int main() {
    int rows, cols;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    vector<vector<int>> matrix(rows, vector<int>(cols));
    cout << "Enter the matrix elements: " << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    int row_start_index, row_end_index, col_start_index, col_end_index;
    cout << "Enter row start index: ";
    cin >> row_start_index;
    cout << "Enter row end index: ";
    cin >> row_end_index;
    cout << "Enter column start index: ";
    cin >> col_start_index;
    cout << "Enter column end index: ";
    cin >> col_end_index;

    vector<vector<int>> result = matrix_slicing(matrix, row_start_index, row_end_index, col_start_index, col_end_index);
    
    cout << "Sliced matrix:" << endl;
    for (const auto &row : result) {
        for (const auto &element : row) {
            cout << element << " ";
        }
        cout << endl;
    }

    return 0;
} 