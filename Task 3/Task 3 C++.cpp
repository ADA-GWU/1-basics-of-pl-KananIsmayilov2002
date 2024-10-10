#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> matrix_multiply(const vector<vector<int>>& A, const vector<vector<int>>& B) {
    int rowsA = A.size();
    int colsA = A[0].size();
    int rowsB = B.size();
    int colsB = B[0].size();

    if (colsA != rowsB) {
        throw invalid_argument("Not possible to multiply matrices");
    }

    vector<vector<int>> result(rowsA, vector<int>(colsB, 0));

    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            for (int k = 0; k < colsA; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    return result;
}

void test_Matrix_Multiplication() {
    vector<vector<int>> A = {{1, 2, 3}, {4, 5, 6}};
    vector<vector<int>> B = {{7, 8}, {9, 10}, {11, 12}};
    
    vector<vector<int>> expected = {{58, 64}, {139, 154}};
    vector<vector<int>> result = matrix_multiply(A, B);

    
    bool test = true;
    for ( int i = 0; i < expected.size(); i++) {
        for (int j = 0; j < expected[0].size(); j++) {
            if (expected[i][j] != result[i][j]) {
                test = false;
                break;
            }
        }
    }

    if (test) {
        cout << "Test passed: Matrix multiplication is correct." << endl;
    } else {
        cout << "Test failed: Matrix multiplication is not correct." << endl;
    }
}

int main() {
    try {
        test_Matrix_Multiplication();
    } catch (const exception& e) {
        cerr << e.what() << endl;
    }
    return 0;
}
