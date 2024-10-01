#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> sliceMatrix(const vector<vector<int>>& matrix, int rowStart, int rowEnd, int colStart, int colEnd) {
    vector<vector<int>> submatrix;
    
    for (int i = rowStart; i < rowEnd; ++i) {
        vector<int> rowSlice(matrix[i].begin() + colStart, matrix[i].begin() + colEnd);
        submatrix.push_back(rowSlice);
    }
    
    return submatrix;
}

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20}
    };

    vector<vector<int>> submatrix = sliceMatrix(matrix, 1, 3, 1, 4);
    
    for (const auto& row : submatrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
