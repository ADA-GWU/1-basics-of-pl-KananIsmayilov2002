# Chatgpt solution
def select_submatrix(matrix, r1, r2, c1, c2):
    return [row[c1:c2] for row in matrix[r1:r2]]

data_matrix = [
    [1, 2, 3, 4, 5],
    [6, 7, 8, 9, 10],
    [11, 12, 13, 14, 15],
    [16, 17, 18, 19, 20]
]

sliced_matrix = select_submatrix(data_matrix, 1, 3, 1, 4)
print(sliced_matrix)