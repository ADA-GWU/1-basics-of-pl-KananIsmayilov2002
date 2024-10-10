#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Define matrices A and B
    vector<vector<int>> A = {{10, 21, 32}, {44, 57, 68}};
    vector<vector<int>> B = {{7, 15}, {6, 23}, {11, 19}};
    
    // Resultant matrix C
    vector<vector<int>> C(A.size(), vector<int>(B[0].size(), 0));

    // Perform matrix multiplication
    for (int i = 0; i < A.size(); ++i)
        for (int j = 0; j < B[0].size(); ++j)
            for (int k = 0; k < B.size(); ++k)
                C[i][j] += A[i][k] * B[k][j];

    // Print the result
    for (const auto& row : C) {
        for (int x : row) 
        cout << x << " ";
        cout << endl;
    }

    return 0;
}
