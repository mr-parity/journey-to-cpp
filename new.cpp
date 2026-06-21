/**
 * ============================================================
 * NEW KEYWORD IN C++
 * ============================================================
 *
 * new Operator:
 * ------------------------------------------------------------
 * The new keyword is used to dynamically
 * allocate memory during program execution.
 *
 * Unlike normal variables that are created
 * on the stack, memory allocated using new
 * is created on the heap (free store).
 *
 * Syntax:
 *
 *      dataType* ptr =
 *          new dataType;
 *
 * Example:
 *
 *      int* ptr =
 *          new int;
 *
 * ============================================================
 * WHY USE new?
 * ============================================================
 *
 * Dynamic memory allocation is useful when:
 *
 *      • Memory size is known only at runtime
 *      • Objects must outlive a scope
 *      • Large data structures are needed
 *      • Creating linked lists, trees, graphs
 *      • Flexible memory management is required
 *
 * ============================================================
 * STACK VS HEAP MEMORY
 * ============================================================
 *
 * Stack Memory:
 *
 *      int x = 10;
 *
 * Characteristics:
 *
 *      • Automatic allocation
 *      • Automatic deallocation
 *      • Faster access
 *      • Limited size
 *
 * Heap Memory:
 *
 *      int* ptr =
 *          new int;
 *
 * Characteristics:
 *
 *      • Manual allocation
 *      • Manual deallocation
 *      • Larger memory space
 *      • Slightly slower access
 *
 * ============================================================
 * BASIC MEMORY ALLOCATION
 * ============================================================
 *
 * Example:
 *
 *      int* ptr =
 *          new int;
 *
 * Memory:
 *
 *      Stack
 *
 *          ptr
 *           |
 *           V
 *
 *      Heap
 *
 *          [ int ]
 *
 * Here:
 *
 *      ptr stores the address of the
 *      dynamically allocated integer.
 *
 * ============================================================
 * ASSIGNING A VALUE
 * ============================================================
 *
 * Example:
 *
 *      int* ptr =
 *          new int;
 *
 *      *ptr = 100;
 *
 * Output:
 *
 *      cout << *ptr;
 *
 *      100
 *
 * ============================================================
 * ALLOCATING AND INITIALIZING
 * ============================================================
 *
 * Memory can be initialized during allocation.
 *
 * Example:
 *
 *      int* ptr =
 *          new int(50);
 *
 * Result:
 *
 *      *ptr == 50
 *
 * ============================================================
 * DYNAMIC OBJECT CREATION
 * ============================================================
 *
 * Classes can also be instantiated
 * using new.
 *
 * Example:
 *
 *      Student* s =
 *          new Student();
 *
 * Memory:
 *
 *      Stack
 *
 *          s
 *           |
 *           V
 *
 *      Heap
 *
 *          Student Object
 *
 * Constructor is automatically called.
 *
 * ============================================================
 * PARAMETERIZED CONSTRUCTOR
 * ============================================================
 *
 * Example:
 *
 *      Student* s =
 *          new Student("John");
 *
 * Here:
 *
 *      Student object is created
 *      and initialized using the
 *      parameterized constructor.
 *
 * ============================================================
 * ACCESSING MEMBERS
 * ============================================================
 *
 * For dynamically allocated objects,
 * the arrow operator (->) is used.
 *
 * Example:
 *
 *      Student* s =
 *          new Student();
 *
 *      s->name = "John";
 *
 * Equivalent:
 *
 *      (*s).name = "John";
 *
 * ============================================================
 * DYNAMIC ARRAY ALLOCATION
 * ============================================================
 *
 * Arrays can be allocated dynamically.
 *
 * Example:
 *
 *      int* arr =
 *          new int[5];
 *
 * Memory:
 *
 *      arr
 *       |
 *       V
 *
 *      [0][0][0][0][0]
 *
 * Five integers are allocated
 * on the heap.
 *
 * ============================================================
 * INITIALIZING DYNAMIC ARRAYS
 * ============================================================
 *
 * Example:
 *
 *      int* arr =
 *          new int[5];
 *
 *      arr[0] = 10;
 *      arr[1] = 20;
 *
 * Access:
 *
 *      cout << arr[0];
 *
 * Output:
 *
 *      10
 *
 * ============================================================
 * MEMORY LEAK
 * ============================================================
 *
 * Every memory block allocated using
 * new remains allocated until it is
 * explicitly released.
 *
 * Example:
 *
 *      int* ptr =
 *          new int(10);
 *
 * If delete is never called:
 *
 *      Memory Leak occurs.
 *
 * The memory becomes unreachable
 * but remains allocated.
 *
 * ============================================================
 * DELETE OPERATOR
 * ============================================================
 *
 * Memory allocated with new must be
 * released using delete.
 *
 * Example:
 *
 *      int* ptr =
 *          new int(100);
 *
 *      delete ptr;
 *
 * Result:
 *
 *      Heap memory is freed.
 *
 * ============================================================
 * DELETE FOR ARRAYS
 * ============================================================
 *
 * Arrays require delete[].
 *
 * Example:
 *
 *      int* arr =
 *          new int[10];
 *
 *      delete[] arr;
 *
 * Important:
 *
 *      delete arr;
 *
 * is incorrect for arrays.
 *
 * Always use:
 *
 *      delete[] arr;
 *
 * ============================================================
 * NULLPTR AFTER DELETE
 * ============================================================
 *
 * Good Practice:
 *
 *      delete ptr;
 *
 *      ptr = nullptr;
 *
 * Prevents:
 *
 *      Dangling Pointer
 *
 * A dangling pointer points to
 * memory that has already been freed.
 *
 * ============================================================
 * WHAT HAPPENS INTERNALLY?
 * ============================================================
 *
 * When new executes:
 *
 *      1. Heap memory is requested.
 *      2. Memory is allocated.
 *      3. Constructor is called
 *         (for objects).
 *      4. Address is returned.
 *
 * Example:
 *
 *      Student* s =
 *          new Student();
 *
 * Internally:
 *
 *      Allocate memory
 *              ↓
 *      Call constructor
 *              ↓
 *      Return address
 *
 * ============================================================
 * EXCEPTION ON FAILURE
 * ============================================================
 *
 * By default, if allocation fails:
 *
 *      new throws
 *      std::bad_alloc
 *
 * Example:
 *
 *      try
 *      {
 *          int* ptr =
 *              new int;
 *      }
 *      catch(...)
 *      {
 *      }
 *
 * ============================================================
 * NOTHROW VERSION
 * ============================================================
 *
 * Example:
 *
 *      int* ptr =
 *          new(std::nothrow) int;
 *
 * If allocation fails:
 *
 *      ptr == nullptr
 *
 * No exception is thrown.
 *
 * ============================================================
 * MODERN C++ RECOMMENDATION
 * ============================================================
 *
 * Avoid raw new whenever possible.
 *
 * Prefer:
 *
 *      std::unique_ptr
 *
 *      std::shared_ptr
 *
 *      std::vector
 *
 *      std::string
 *
 * These automatically manage memory.
 *
 * Example:
 *
 *      auto ptr =
 *          std::make_unique<int>(10);
 *
 * No manual delete required.
 *
 * ============================================================
 * SUMMARY
 * ============================================================
 *
 * new:
 *
 *      Dynamically allocates memory
 *      on the heap.
 *
 * Returns:
 *
 *      Address of allocated memory.
 *
 * Single Object:
 *
 *      int* ptr =
 *          new int;
 *
 * Array:
 *
 *      int* arr =
 *          new int[10];
 *
 * Release Memory:
 *
 *      delete ptr;
 *
 *      delete[] arr;
 *
 * Risks:
 *
 *      • Memory Leaks
 *      • Dangling Pointers
 *      • Manual Management
 *
 * Modern C++ Rule:
 *
 *      Prefer smart pointers and
 *      standard containers instead
 *      of raw new whenever possible.
 *
 * ============================================================
*/

#include<iostream>
#include<string>

using String = std::string;

int main()
{
    // get memory for int on heap
    int* soldiers = new int();
    *soldiers = 100000;

    std::cout<<*soldiers<<std::endl;

    // free memory
    delete soldiers;
}