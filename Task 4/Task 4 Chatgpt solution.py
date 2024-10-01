# Chatgpt solution
def select_submatrix(matrix, start_index, end_index, start_index, end_index):
    return [row[start_index:end_index] for row in matrix[start_index:end_index]]

data_matrix = [
    [1, 2, 3, 4, 5],
    [6, 7, 8, 9, 10],
    [11, 12, 13, 14, 15],
    [16, 17, 18, 19, 20]
]

sliced_matrix = select_submatrix(data_matrix, 1, 3, 1, 4)
for row in sliced_matrix:
    print(row)
