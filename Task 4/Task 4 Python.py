def matrix_slicing(matrix, row_start_index, row_end_index, col_start_index, col_end_index):
    sliced_matrix = []
    for i in range(row_start_index, row_end_index):
        row_slice = []
        for j in range(col_start_index, col_end_index):
            row_slice.append(matrix[i][j])
        sliced_matrix.append(row_slice)
    return sliced_matrix

def main():
    rows = int(input("Enter number of rows: "))
    cols = int(input("Enter number of columns: "))
    
    matrix = []
    print("Enter the matrix elements: ")
    for i in range(rows):
        
        row_values = input().split()  
        row_ints = []  
        for value in row_values:
            row_ints.append(int(value))  

        matrix.append(row_ints)  
    
    
    row_start_index = int(input("Enter row start index: "))
    row_end_index = int(input("Enter row end index: "))
    col_start_index = int(input("Enter column start index: "))
    col_end_index = int(input("Enter column end index: "))

    result = matrix_slicing(matrix, row_start_index, row_end_index, col_start_index, col_end_index)
    
    print("Sliced matrix:")
    for row in result:
        print(row)

main()

