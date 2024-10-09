def matrix_slicing(matrix, row_start_index, row_end_index, col_start_index, col_end_index):
    return [row[col_start_index:col_end_index] for row in matrix[row_start_index:row_end_index]]

def main():
    rows = int(input("Enter number of rows: "))
    cols = int(input("Enter number of columns: "))
    
    matrix = []
    print("Enter the matrix elements: ")
    for i in range(rows):
        matrix.append([int(x) for x in input().split()]) 
    
    row_start_index = int(input("Enter row start index: "))
    row_end_index = int(input("Enter row end index: "))
    col_start_index = int(input("Enter column start index: "))
    col_end_index = int(input("Enter column end index: "))

    result = matrix_slicing(matrix, row_start_index, row_end_index, col_start_index, col_end_index)
    
    print("Sliced matrix:")
    for row in result:
        print(row)

main()

