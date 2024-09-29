## Technical Report: Memory Usage Comparison Between Python and C++
Introduction:
In this experiment, we compare the memory usage of two fundamental data structures in Python, a tuple and a list, and compare it with a similar example in C++. The experiment is designed to highlight the difference in memory management between dynamically and statically allocated data structures in both languages.

## Explanation:
Tuple: The tuple tpl is defined as (1, 2, 3). Tuples are immutable, meaning once created, their elements cannot be changed. This immutability allows Python to optimize memory allocation for tuples.

List: The list lst is defined as [1, 2, 3]. Unlike tuples, lists are mutable, meaning their size and contents can be modified. To account for this, lists usually allocate some extra memory to accommodate future growth.

__sizeof__() method: This method returns the size of the object in bytes, without counting the referenced objects (in this case, the elements inside the tuple or list). It only measures the memory allocated for the container itself.

Results:
Let’s assume the output of running the above code is as follows:


Size of the tuple: 48
Size of the list: 80
Tuple Memory Usage: The tuple takes up 48 bytes of memory. This is relatively small because a tuple is immutable, and no extra memory is allocated for potential changes.

List Memory Usage: The list takes up 80 bytes of memory, which is more than the tuple. Lists are designed to be dynamic and grow, so Python allocates extra memory (overhead) to allow for this flexibility.

2. Comparison with C++: Arrays vs. Vectors
In C++, we will compare a statically allocated array and a dynamically allocated vector, which mirrors the tuple (fixed-size, low overhead) and the list (dynamic, higher overhead) in Python.

C++ Code:
cpp
Copy code
#include <iostream>
#include <vector>

int main() {
    // Static array (equivalent to tuple in Python)
    int arr[3] = {1, 2, 3};
    std::cout << "Size of the array: " << sizeof(arr) << " bytes\n";

    // Dynamic vector (equivalent to list in Python)
    std::vector<int> vec = {1, 2, 3};
    std::cout << "Size of the vector: " << sizeof(vec) << " bytes\n";
    
    return 0;
}
Explanation:
Static Array: The array arr[3] is a fixed-size structure. Its size is known at compile time, and no additional memory is allocated for future changes. This is similar to a tuple in Python, which has a fixed size.

Dynamic Vector: The vector std::vector<int> is a dynamic data structure that can grow as needed. This behavior is similar to Python's list, which is dynamic and can resize. Like Python lists, C++ vectors also allocate extra memory to handle potential future growth.

Results:
Let’s assume running this C++ code gives the following output:

c
Copy code
Size of the array: 12 bytes
Size of the vector: 24 bytes
Array Memory Usage: The array takes up 12 bytes (since each int takes 4 bytes, and there are 3 elements). Arrays are simple and don’t have overhead for resizing.

Vector Memory Usage: The vector takes up 24 bytes, more than the array. Similar to Python’s list, the extra memory accounts for the overhead of dynamically resizing the vector.

3. Conclusion:
Python: In Python, tuples have a smaller memory footprint compared to lists because they are immutable, while lists allocate extra memory to accommodate future modifications.

C++: In C++, arrays are also more memory-efficient than vectors for the same reason: arrays have a fixed size and no extra memory for resizing. Vectors, like Python lists, need additional memory for dynamic behavior.

The comparison highlights the trade-off between static and dynamic data structures: flexibility comes at the cost of higher memory consumption.
