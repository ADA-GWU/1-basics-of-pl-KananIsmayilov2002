# TASK 1
## Investigation of Endianness: Big Endian vs. Little Endian
## Introduction
Endianness is a concept in computing that refers to the way bytes are ordered within larger data types, like integers or floating-point numbers, when stored in memory. There are two primary types of endianness: big-endian and little-endian

## Big Endian
In big-endian format, the most significant byte is stored at the smallest memory address. For instance, if we have a 32-bit integer like 0x12345678, the byte 0x12 would be stored first, followed by 0x34, 0x56, and finally 0x78. This ordering feels intuitive to many because it mirrors how we read numbers, starting from the left (most significant) and moving to the right (least significant).

## Little Endian
On the other hand, little-endian reverses this order. Using the same example, 0x78 would be stored first, then 0x56, 0x34, and finally 0x12. The least significant byte comes first in memory. While this may seem counterintuitive at first, there are some benefits. Little-endian can make certain mathematical operations, particularly those involving low-order bytes, slightly more efficient. This is because the least significant parts are processed first, which can lead to faster performance in specific scenarios. Little-endian is the predominant format used by x86 and x86-64 architectures, which power most personal computers and servers today.

## Advantages of Little Endian
Ease of Incrementing: Little-endian makes it easier to increment multi-byte values, as the least significant byte is accessed first.

Performance: On little-endian systems, certain operations like pointer arithmetic may be optimized due to how bytes are arranged.
## Critique of Endianness
The choice between big-endian and little-endian has implications for data compatibility, especially in multi-platform environments. Here are some critical points:

## Data Portability:
Different endianness can lead to errors when data is shared between systems. Developers must implement conversion routines to handle byte order, complicating code maintenance.
## Performance Trade-offs:
While little-endian architectures can offer performance benefits for certain operations, they may require additional overhead when converting data formats during communication with big-endian systems.
## Lack of Standardization: 
There is no universal standard for byte order, leading to confusion and errors in cross-platform applications. Developers must remain vigilant to ensure compatibility.
## Conclusion
Endianness plays a vital role in data storage and transmission, influencing system design and data interoperability. While both big-endian and little-endian have their merits, the prevalence of little-endian systems in contemporary computing raises concerns regarding data compatibility. Understanding these concepts is essential for developers working with low-level programming, data serialization, and network communications. It is advisable to adopt best practices in handling endianness to minimize errors and ensure data integrity across different platforms.

# TASK 2 
## Memory Usage Comparison: Python vs. C++
This report presents an experiment comparing the memory usage of two fundamental data structures in Python (tuples and lists) and compares it with their counterparts in C++ (arrays and vectors). The purpose is to demonstrate the difference in memory management and usage between these data structures across both languages.

## 1. Python: Tuple vs. List
## Python Code:
tpl = (1, 2, 3)

print('Size of the tuple:', tpl.__sizeof__())

lst = [1, 2, 3]

print('Size of the list:', lst.__sizeof__())
## Explanation:
Tuple: In Python, a tuple is immutable, meaning that once created, its elements cannot be modified. This immutability allows Python to optimize memory allocation for tuples.

List: Lists, on the other hand, are mutable, which allows elements to be added or removed. As a result, Python allocates extra memory (overhead) to accommodate future modifications.

__sizeof__() method: This method provides the size of the tuple or list object in bytes, excluding the memory consumed by the elements contained within.

## Output:
Size of the tuple: 48

Size of the list: 72

A tuple takes less memory (48 bytes) compared to a list (72 bytes).
Lists require more memory because they are dynamic and capable of resizing.
## 2. C++: Array vs. Vector
C++ Code:

    // Static array (equivalent to Python's tuple)
    
    int arr[3] = {1, 2, 3};
    
    cout << "Size of the array: " << sizeof(arr) << " bytes\n";

    // Dynamic vector (equivalent to Python's list)
    
    vector<int> vec = {1, 2, 3};
    
    cout << "Size of the vector: " << sizeof(vec) << " bytes\n";
    
    return 0;
}
## Explanation:
Array: Arrays in C++ are statically allocated and have a fixed size. The size is determined at compile-time, and no additional memory is reserved for resizing.

Vector: Vectors are dynamic, meaning they can grow or shrink as needed. To enable this, vectors allocate extra memory (similar to Python's list).

## Output:

Size of the array: 12 bytes

Size of the vector: 24 bytes

C++ array consumes 12 bytes of memory (3 integers of 4 bytes each).
C++ vector consumes 24 bytes, more than the array, due to the overhead for dynamic resizing.

## Conclusion:
In both Python and C++, static data structures (tuple and array) use less memory than dynamic ones (list and vector), as dynamic structures reserve extra memory to allow future changes.
Python lists and C++ vectors are more flexible but come at the cost of higher memory consumption compared to tuples and arrays.
This experiment demonstrates that choosing between static and dynamic data structures involves a trade-off between memory efficiency and flexibility.


# Task 3 Python
## Flexibility:
My code manually handles matrix multiplication, making it adaptable to any list of lists representing a matrix. It doesn't require external libraries and allows you to work with matrices of any size.Chatgpt solution  provides numpy library which is flexible for matrix multiplication. However  this might be less flexible if you need to avoid external libraries or work in environments where installing libraries is not an option.
## Readability:
My code is relatively easy to follow if you understand how matrix multiplication works. The triple nested for loop structure clearly shows how each element of the resulting matrix is computed, but this can make the code look complex.Chatgpt use numpy solution which  is concise and highly readable for those familiar with the library.
## Efficiency:
 For large matrices my solution can become inefficient. NumPy approach is much faster because it leverages highly optimized, pre-compiled code for matrix operations.For large-scale computations numpy approach would be more efficient.
 

# Task 4 Python
## Flexibility:
My code is highly flexible because it allows user input for the matrix size and content and it provides input flexibility with the user specifying row and column indices, making it adaptable to different use cases. Chatgpt solution uses fixed matrix and can only operate on the predefined matrix, which reduces flexibility and the lack of user input makes it less dynamic compared to my solution.
## Readability:
My code is readable,because it shows reader all steps to see the final result: gathering input, creating the matrix, and slicing. ChatGPT's solution is simpler and more compact. It directly shows the operation of matrix slicing without user input. The variable names (r1, r2, c1, c2) are also shorter, which might be slightly less descriptive for a beginner.
## Efficiency:
ChatGPT's solution skips the user input stage, so the code runs faster in scenarios where matrix input is predefined. The slicing operation itself remains the same and is equally efficient.

# Task 4 C++
## Flexibility:
My solution is more flexible because it allows the user to input the number of rows and columns of the matrix. It also takes user input for the row and column indices which makes it adaptable to different matrix sizes and slicing ranges. Chatgpt solution is less flexible because the row and column indices are fixed in the function call. It lacks the ability to handle user-defined input without modification.
## Readability:
The explicit use of loops to extract submatrices makes the code easier to understand for beginners. However, it is slightly longer because of manual iteration and input handling.
Chatgpt solution is more concise due to the use of iterators which reduces the number of lines. However, it might be less readable for beginners who are unfamiliar with iterators.
## Efficiency:
By using iterators Chatgpt solution takes advantage of C++'s built-in capabilities which makes it faster. It avoids the overhead of manually constructing submatrices element-by-element by reducing unnecessary operations.









