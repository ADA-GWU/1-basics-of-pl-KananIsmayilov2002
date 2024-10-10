def matrix_multiply(A, B):
    
    row_A = len(A)
    col_A = len(A[0])
    row_B = len(B)
    col_B = len(B[0])

    if cols_A != rows_B:
        raise ValueError("Not possible to multiply matrices")

    result = [[0 for _ in range(cols_B)] for _ in range(rows_A)]

    for i in range(rows_A):
        for j in range(cols_B):
            for k in range(cols_A):
                result[i][j] += A[i][k] * B[k][j]

    return result


A = [[1, 2, 3], [4, 5, 6]]
B = [[7, 8], [9, 10],[11, 12]]
result = matrix_multiply(A, B)
for row in result:
    print(row)
