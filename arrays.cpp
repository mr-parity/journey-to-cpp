/**
 * ============================================================
 * ARRAYS IN C++
 * ============================================================
 *
 * Array:
 * ------------------------------------------------------------
 * - An array is a collection of elements of the
 *   same data type stored in contiguous memory
 *   locations.
 *
 * - Each element is accessed using an index.
 *
 * - Array indexing starts from 0.
 *
 * - Arrays provide fast random access because
 *   elements are stored sequentially in memory.
 *
 * ============================================================
 * TYPES OF ARRAYS IN C++
 * ============================================================
 *
 * C++ provides multiple ways to work with arrays:
 *
 *      1. C-Style Arrays
 *      2. Dynamic Arrays
 *      3. std::array
 *
 * ============================================================
 * 1. C-STYLE ARRAYS
 * ============================================================
 *
 * Traditional arrays inherited from C.
 *
 * Syntax:
 *
 *      int numbers[5];
 *
 * Initialization:
 *
 *      int numbers[5] = {1,2,3,4,5};
 *
 * Access:
 *
 *      numbers[0]
 *      numbers[1]
 *      numbers[2]
 *
 * Example:
 *
 *      int marks[3] = {90, 80, 70};
 *
 *      cout << marks[0];
 *
 * Output:
 *
 *      90
 *
 * Characteristics:
 *
 *      • Fixed size.
 *      • Stored contiguously.
 *      • Fast access.
 *      • No built-in bounds checking.
 *
 * ============================================================
 * MEMORY REPRESENTATION
 * ============================================================
 *
 * Example:
 *
 *      int arr[5] = {10,20,30,40,50};
 *
 * Memory Layout:
 *
 *      +-----+
 *      | 10  | ← arr[0]
 *      +-----+
 *      | 20  | ← arr[1]
 *      +-----+
 *      | 30  | ← arr[2]
 *      +-----+
 *      | 40  | ← arr[3]
 *      +-----+
 *      | 50  | ← arr[4]
 *      +-----+
 *
 * Elements occupy contiguous memory.
 *
 * ============================================================
 * ARRAY INDEXING
 * ============================================================
 *
 * Valid indices:
 *
 *      0 to size-1
 *
 * Example:
 *
 *      int arr[5];
 *
 * Valid:
 *
 *      arr[0]
 *      arr[4]
 *
 * Invalid:
 *
 *      arr[5]
 *      arr[100]
 *      arr[-1]
 *
 * Accessing an invalid index causes:
 *
 *      Undefined Behavior
 *
 * ============================================================
 * ARRAY TRAVERSAL
 * ============================================================
 *
 * Example:
 *
 *      int arr[5] = {1,2,3,4,5};
 *
 *      for(int i = 0; i < 5; i++)
 *      {
 *          cout << arr[i];
 *      }
 *
 * Range-Based Loop:
 *
 *      for(int value : arr)
 *      {
 *          cout << value;
 *      }
 *
 * ============================================================
 * ARRAY SIZE
 * ============================================================
 *
 * Example:
 *
 *      int arr[10];
 *
 * Number of elements:
 *
 *      sizeof(arr) / sizeof(arr[0])
 *
 * ============================================================
 * ARRAYS AND POINTERS
 * ============================================================
 *
 * The array name decays into a pointer
 * to its first element in most expressions.
 *
 * Example:
 *
 *      int arr[5];
 *
 *      arr == &arr[0]
 *
 * Example:
 *
 *      cout << arr;
 *
 * Prints the address of the first element.
 *
 * ============================================================
 * CHARACTER ARRAYS
 * ============================================================
 *
 * Character arrays store sequences of chars.
 *
 * Example:
 *
 *      char name[] = "Hello";
 *
 * Memory:
 *
 *      H
 *      e
 *      l
 *      l
 *      o
 *      \0
 *
 * '\0' is the null terminator.
 *
 * ============================================================
 * MULTIDIMENSIONAL ARRAYS
 * ============================================================
 *
 * Arrays can have multiple dimensions.
 *
 * Example:
 *
 *      int matrix[2][3];
 *
 * Initialization:
 *
 *      int matrix[2][3] =
 *      {
 *          {1,2,3},
 *          {4,5,6}
 *      };
 *
 * Representation:
 *
 *      1 2 3
 *      4 5 6
 *
 * ============================================================
 * 2. DYNAMIC ARRAYS
 * ============================================================
 *
 * Dynamic arrays are allocated at runtime.
 *
 * Syntax:
 *
 *      int* arr = new int[5];
 *
 * Example:
 *
 *      int* arr = new int[3];
 *
 *      arr[0] = 10;
 *      arr[1] = 20;
 *      arr[2] = 30;
 *
 * Memory must be released manually.
 *
 * Deallocation:
 *
 *      delete[] arr;
 *
 * Rule:
 *
 *      new[]      → delete[]
 *
 * Incorrect:
 *
 *      delete arr;
 *
 * Correct:
 *
 *      delete[] arr;
 *
 * ============================================================
 * DYNAMIC ARRAY RESIZING
 * ============================================================
 *
 * Dynamic arrays cannot be resized directly.
 *
 * To resize:
 *
 *      1. Allocate a new larger array.
 *      2. Copy old elements.
 *      3. Delete old array.
 *      4. Update pointer.
 *
 * This is one reason std::vector exists.
 *
 * ============================================================
 * 3. std::array (MODERN C++)
 * ============================================================
 *
 * std::array is a fixed-size container
 * introduced in C++11.
 *
 * Header:
 *
 *      #include <array>
 *
 * Syntax:
 *
 *      std::array<int, 5> arr;
 *
 * Initialization:
 *
 *      std::array<int, 5> arr =
 *      {
 *          1,2,3,4,5
 *      };
 *
 * Access:
 *
 *      arr[0]
 *
 * Benefits over C-style arrays:
 *
 *      • Knows its own size.
 *      • Works with STL algorithms.
 *      • Supports iterators.
 *      • Can be copied and assigned.
 *      • Safer and easier to use.
 *
 * Example:
 *
 *      std::array<int, 3> nums =
 *      {
 *          10,20,30
 *      };
 *
 *      cout << nums.size();
 *
 * Output:
 *
 *      3
 *
 * ============================================================
 * std::array MEMBER FUNCTIONS
 * ============================================================
 *
 * Common Functions:
 *
 *      arr.size()
 *      arr.empty()
 *      arr.front()
 *      arr.back()
 *      arr.fill(value)
 *      arr.at(index)
 *
 * Example:
 *
 *      arr.at(2);
 *
 * Unlike operator[],
 * at() performs bounds checking.
 *
 * Out-of-range access throws:
 *
 *      std::out_of_range
 *
 * ============================================================
 * C-STYLE ARRAY VS std::array
 * ============================================================
 *
 * C-Style Array:
 *
 *      int arr[5];
 *
 *      • No size information.
 *      • Limited functionality.
 *      • Easy to misuse.
 *
 * std::array:
 *
 *      std::array<int,5> arr;
 *
 *      • Knows its size.
 *      • STL compatible.
 *      • More expressive.
 *      • Safer.
 *
 * Modern C++ Recommendation:
 *
 *      Prefer std::array for fixed-size arrays.
 *
 * ============================================================
 * ARRAYS VS std::vector
 * ============================================================
 *
 * std::array:
 *
 *      Fixed size.
 *
 * std::vector:
 *
 *      Dynamic size.
 *
 * Use std::array when:
 *
 *      Size is known at compile time.
 *
 * Use std::vector when:
 *
 *      Size can change at runtime.
 *
 * ============================================================
 * IMPORTANT NOTES
 * ============================================================
 *
 * 1. Array indexing starts at 0.
 *
 * 2. Arrays store elements of the same type.
 *
 * 3. Elements are stored contiguously.
 *
 * 4. C-style arrays have fixed size.
 *
 * 5. Dynamic arrays require manual memory
 *    management.
 *
 * 6. std::array is the preferred fixed-size
 *    array container in modern C++.
 *
 * 7. std::vector is usually preferred when
 *    dynamic resizing is needed.
 *
 * ============================================================
 * SUMMARY
 * ============================================================
 *
 * C-Style Array:
 *      Fixed-size contiguous collection
 *      of elements.
 *
 * Dynamic Array:
 *      Runtime-allocated array using new[].
 *
 * std::array:
 *      Modern fixed-size STL container.
 *
 * std::vector:
 *      Dynamic-size STL container.
 *
 * Modern C++ Rule:
 *
 *      Prefer std::array over C-style arrays.
 *      Prefer std::vector over manual
 *      dynamic arrays.
 *
 * ============================================================
 */

#include <iostream>
#include<array>

int main()
{

    // arrays
    int marks[5];

    std::cout << "Address of first element of arrray: " << marks << std::endl;

    // instantiate members of array
    for (int index = 0; index < 5; index++)
    {
        marks[index] = 100 * (1 - 0.10 * index) + index;
    }

    // print marks
    for (int mark : marks)
    {
        std::cout << mark << std::endl;
    }

    // Method 2 : allocate array on heap
    int* example_array = new int[5];

    std::cout<<"Address of example array pointer: "<<&example_array<<std::endl;
    std::cout<<"Address of start of array: "<<example_array<<std::endl;
    
    // cleanup
    delete[] example_array;
    
    // using std::array
    std::array<int,5> fun;
    std::cout<<"Size of standard array STL is "<<fun.size()<<std::endl;

    return 0;
}