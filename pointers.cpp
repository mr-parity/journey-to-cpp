/**
 * ============================
 * POINTERS IN C++
 * ============================
 *
 * Pointers:
 * - A pointer is a variable that stores the memory address
 *   of another variable.
 * - Instead of storing data directly, pointers store "where"
 *   the data is stored in memory.
 *
 * - Pointers are one of the most powerful features of C++.
 *
 * Why Pointers?
 *      1. Direct memory access
 *      2. Efficient array and string handling
 *      3. Dynamic memory allocation
 *      4. Pass-by-reference behavior
 *      5. Building data structures (linked list, tree, etc.)
 *
 * --------------------------------------------------
 * Memory Concept
 * --------------------------------------------------
 *
 * Every variable in C++ has:
 *      1. Value
 *      2. Memory Address
 *
 * Example:
 *
 * int x = 10;
 *
 * x   -> value = 10
 * &x  -> address of x
 *
 * --------------------------------------------------
 * Pointer Syntax
 * --------------------------------------------------
 *
 * data_type *pointer_name;
 *
 * Example:
 *
 * int *ptr;
 *
 * Here:
 * - ptr is a pointer to an integer.
 *
 * --------------------------------------------------
 * Address Operator (&)
 * --------------------------------------------------
 *
 * - Used to get the memory address of a variable.
 *
 * Example:
 *
 * int x = 10;
 * int *ptr = &x;
 *
 * Explanation:
 * - &x gives address of x
 * - ptr stores that address
 *
 * --------------------------------------------------
 * Dereference Operator (*)
 * --------------------------------------------------
 *
 * - Used to access value stored at the address.
 *
 * Example:
 *
 * int x = 10;
 * int *ptr = &x;
 *
 * std::cout << *ptr;
 *
 * Output:
 * 10
 *
 * Explanation:
 * - *ptr means "value at address ptr"
 *
 * --------------------------------------------------
 * Pointer Declaration and Initialization
 * --------------------------------------------------
 *
 * Example:
 *
 * int a = 5;
 * int *p = &a;
 *
 * --------------------------------------------------
 * Null Pointer
 * --------------------------------------------------
 *
 * - A pointer that does not point to any valid memory.
 *
 * Example:
 *
 * int *ptr = nullptr;
 *
 * Purpose:
 *      1. Avoid dangling pointers
 *      2. Safe initialization
 *
 * --------------------------------------------------
 * Dangling Pointer
 * --------------------------------------------------
 *
 * - A pointer that points to memory that has been freed.
 *
 * Example:
 *
 * int *ptr = new int(10);
 * delete ptr;
 *
 * // ptr is now dangling
 *
 * --------------------------------------------------
 * Wild Pointer
 * --------------------------------------------------
 *
 * - An uninitialized pointer.
 *
 * Example:
 *
 * int *ptr; // dangerous (contains garbage address)
 *
 * --------------------------------------------------
 * Pointer Arithmetic
 * --------------------------------------------------
 *
 * - You can perform arithmetic on pointers.
 *
 * Operations:
 *      1. Increment (++)
 *      2. Decrement (--)
 *      3. Addition (+n)
 *      4. Subtraction (-n)
 *
 * Example:
 *
 * int arr[] = {10, 20, 30};
 * int *ptr = arr;
 *
 * ptr++;
 *
 * Explanation:
 * - Moves pointer to next integer location.
 *
 * --------------------------------------------------
 * Pointer and Arrays
 * --------------------------------------------------
 *
 * - Array name acts as a pointer to first element.
 *
 * Example:
 *
 * int arr[] = {1, 2, 3};
 * int *ptr = arr;
 *
 * std::cout << *ptr;      // 1
 * std::cout << *(ptr+1);  // 2
 *
 * --------------------------------------------------
 * Pointer and Functions
 * --------------------------------------------------
 *
 * 1. Call by Value
 * - Copy is passed
 *
 * 2. Call by Reference using Pointer
 *
 * Example:
 *
 * void update(int *p)
 * {
 *      *p = 100;
 * }
 *
 * int x = 10;
 * update(&x);
 *
 * x becomes 100
 *
 * --------------------------------------------------
 * Advantages of Pointers in Functions
 * --------------------------------------------------
 *
 * 1. Modify original variable
 * 2. Avoid copying large data
 * 3. Improve performance
 *
 * --------------------------------------------------
 * Dynamic Memory Allocation
 * --------------------------------------------------
 *
 * Operators:
 *      new   -> allocate memory
 *      delete -> free memory
 *
 * Example:
 *
 * int *ptr = new int(10);
 *
 * std::cout << *ptr;
 *
 * delete ptr;
 *
 * --------------------------------------------------
 * Memory Leak
 * --------------------------------------------------
 *
 * - Happens when dynamically allocated memory
 *   is not freed.
 *
 * Example:
 *
 * int *ptr = new int(10);
 * // forgot delete -> memory leak
 *
 * --------------------------------------------------
 * Double Pointer
 * --------------------------------------------------
 *
 * - A pointer that stores address of another pointer.
 *
 * Example:
 *
 * int x = 10;
 * int *p = &x;
 * int **pp = &p;
 *
 * std::cout << **pp;
 *
 * Output:
 * 10
 *
 * --------------------------------------------------
 * Const Pointers
 * --------------------------------------------------
 *
 * 1. Pointer to constant value
 *
 * const int *ptr;
 *
 * - Value cannot be changed.
 *
 * 2. Constant pointer
 *
 * int *const ptr;
 *
 * - Address cannot be changed.
 *
 * 3. Constant pointer to constant value
 *
 * const int *const ptr;
 *
 * --------------------------------------------------
 * Void Pointer
 * --------------------------------------------------
 *
 * - Generic pointer that can point to any data type.
 *
 * Example:
 *
 * void *ptr;
 *
 * - Must be type-casted before use.
 *
 * --------------------------------------------------
 * Common Mistakes
 * --------------------------------------------------
 *
 * 1. Using uninitialized pointers (wild pointers)
 *
 * 2. Forgetting delete (memory leaks)
 *
 * 3. Dereferencing nullptr
 *
 * 4. Losing track of allocated memory
 *
 * 5. Pointer type mismatch
 *
 * --------------------------------------------------
 * Advantages of Pointers
 * --------------------------------------------------
 *
 * 1. Fast and efficient
 * 2. Direct memory access
 * 3. Required for dynamic memory
 * 4. Foundation of data structures
 *
 * --------------------------------------------------
 * Disadvantages of Pointers
 * --------------------------------------------------
 *
 * 1. Complex to manage
 * 2. Risk of memory leaks
 * 3. Risk of segmentation faults
 * 4. Hard to debug
 *
 * --------------------------------------------------
 * Summary
 * --------------------------------------------------
 *
 * Pointer:
 *      -> Stores memory address
 *
 * * (dereference):
 *      -> Access value at address
 *
 * & (address-of):
 *      -> Gets address of variable
 *
 * Pointers are powerful but must be used carefully
 * to avoid memory-related issues.
*/

#include<iostream>

int main() {

    int number = 1024;

    // create a simpel void pointer
    void* pointer =nullptr;

    // print address of memory whereout number resides
    std::cout<<"Number variable resides at memory address: "<<&number<<std::endl;

    // set pointer to store address of the varable
    pointer = &number;

    // print value and address

    std::cout<<"pointer variables resides at memory address: "<<&pointer<<std::endl;
    std::cout<<"pointer variable stores value: "<<pointer<<std::endl;
    std::cout<<"value at memory stores by pointer: "<<*((int*)pointer)<<std::endl;

    return 0;
}