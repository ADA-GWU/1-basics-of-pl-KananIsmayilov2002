def matrix_slicing(matrix, row_start, row_end, col_start, col_end):
    sliced_matrix = [row[col_start:col_end] for row in matrix[row_start:row_end]]
    return sliced_matrix

def main():
    rows = int(input("Enter number of rows: "))
    cols = int(input("Enter number of columns: "))

    matrix = []
    print("Enter matrix elements row by row:")
    for i in range(rows):
        matrix.append([int(x) for x in input().split()])

    row_start = int(input("Enter row start index: "))
    row_end = int(input("Enter row end index: "))
    col_start = int(input("Enter column start index: "))
    col_end = int(input("Enter column end index: "))
    result = matrix_slicing(matrix, row_start, row_end, col_start, col_end)
    print("Sliced matrix:")
    for row in result:
        print(row)

main()
