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
