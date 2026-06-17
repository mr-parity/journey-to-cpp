/**
 * ============================================================
 * CONST, CONST OBJECTS, CONST MEMBER FUNCTIONS, AND MUTABLE
 * ============================================================
 *
 * The 'const' keyword is a type qualifier in C++ used to
 * indicate that a variable, object, reference, pointer,
 * or member function should not modify data after
 * initialization.
 *
 * Const is one of the foundations of modern C++ because
 * it helps create safer, more predictable, and easier
 * to maintain code.
 *
 * Benefits:
 *
 *      1. Prevents Accidental Modification
 *      2. Improves Code Readability
 *      3. Enables Compiler Checks
 *      4. Supports Const Correctness
 *      5. Makes APIs Safer
 *
 * ============================================================
 * CONST VARIABLES
 * ============================================================
 *
 * A const variable becomes read-only after initialization.
 *
 * Example:
 *
 *      const int age = 20;
 *
 * Illegal:
 *
 *      age = 30;
 *
 * Result:
 *
 *      Compilation Error
 *
 * A const variable must generally be initialized
 * when declared.
 *
 * ============================================================
 * CONST REFERENCES
 * ============================================================
 *
 * References are often declared const when passing
 * objects to functions.
 *
 * Example:
 *
 *      void print(const std::string& name);
 *
 * Advantages:
 *
 *      • Prevents modification
 *      • Avoids copying
 *      • Improves performance
 *
 * Example:
 *
 *      void display(const Student& s)
 *      {
 *          std::cout << s.getName();
 *      }
 *
 * Inside the function:
 *
 *      s.setName("John");
 *
 * is illegal because s is const.
 *
 * ============================================================
 * CONST POINTERS
 * ============================================================
 *
 * There are three common combinations.
 *
 * ------------------------------------------------------------
 * Pointer To Const Data
 * ------------------------------------------------------------
 *
 *      const int* ptr = &x;
 *
 * Meaning:
 *
 *      Data cannot be modified.
 *      Pointer may change.
 *
 * Allowed:
 *
 *      ptr = &y;
 *
 * Not Allowed:
 *
 *      *ptr = 10;
 *
 * ------------------------------------------------------------
 * Const Pointer
 * ------------------------------------------------------------
 *
 *      int* const ptr = &x;
 *
 * Meaning:
 *
 *      Pointer cannot change.
 *      Data may change.
 *
 * Allowed:
 *
 *      *ptr = 50;
 *
 * Not Allowed:
 *
 *      ptr = &y;
 *
 * ------------------------------------------------------------
 * Const Pointer To Const Data
 * ------------------------------------------------------------
 *
 *      const int* const ptr = &x;
 *
 * Meaning:
 *
 *      Pointer cannot change.
 *      Data cannot change.
 *
 * ============================================================
 * CONST OBJECTS
 * ============================================================
 *
 * Entire objects may be declared const.
 *
 * Example:
 *
 *      const Student s;
 *
 * A const object promises that its state
 * will never change.
 *
 * Therefore:
 *
 *      Only const member functions
 *      may be called.
 *
 * Example:
 *
 *      s.getName();
 *
 * Allowed
 *
 *      s.setName("Alex");
 *
 * Not Allowed
 *
 * ============================================================
 * CONST MEMBER FUNCTIONS
 * ============================================================
 *
 * Member functions may be declared const.
 *
 * Syntax:
 *
 *      returnType function() const;
 *
 * Example:
 *
 * class Student
 * {
 * private:
 *
 *      std::string name;
 *
 * public:
 *
 *      std::string getName() const
 *      {
 *          return name;
 *      }
 * };
 *
 * Meaning:
 *
 *      This function promises not to modify
 *      the object's state.
 *
 * ============================================================
 * WHAT HAPPENS INTERNALLY?
 * ============================================================
 *
 * Every non-static member function receives
 * a hidden pointer called:
 *
 *      this
 *
 * Non-const function:
 *
 *      Student* const this;
 *
 * Const function:
 *
 *      const Student* const this;
 *
 * Therefore, inside a const member function,
 * member variables become read-only.
 *
 * Example:
 *
 *      void print() const
 *      {
 *          age++;
 *      }
 *
 * Result:
 *
 *      Compilation Error
 *
 * ============================================================
 * WHY CONST MEMBER FUNCTIONS EXIST
 * ============================================================
 *
 * They allow:
 *
 *      • Read-only access to objects
 *      • Safer interfaces
 *      • Better compiler optimization
 *      • Const correctness
 *
 * Typical examples:
 *
 *      getName()
 *      getAge()
 *      size()
 *      empty()
 *      capacity()
 *
 * Functions that only retrieve information
 * should usually be const.
 *
 * ============================================================
 * CONST CORRECTNESS
 * ============================================================
 *
 * Const correctness means:
 *
 *      Applying const wherever modification
 *      is not intended.
 *
 * Example:
 *
 * class Student
 * {
 * public:
 *
 *      std::string getName() const;
 *
 *      void print() const;
 *
 *      void setName(std::string name);
 * };
 *
 * Benefits:
 *
 *      • Detects bugs at compile time
 *      • Prevents accidental changes
 *      • Produces cleaner APIs
 *      • Improves maintainability
 *
 * ============================================================
 * FUNCTION OVERLOADING WITH CONST
 * ============================================================
 *
 * Member functions can be overloaded based
 * on const qualification.
 *
 * Example:
 *
 * class Array
 * {
 * public:
 *
 *      int& operator[](int index);
 *
 *      const int& operator[](int index) const;
 * };
 *
 * Non-const object:
 *
 *      arr[0] = 100;
 *
 * Const object:
 *
 *      constArr[0];
 *
 * Read-only access.
 *
 * This technique is heavily used in STL.
 *
 * ============================================================
 * MUTABLE KEYWORD
 * ============================================================
 *
 * Normally:
 *
 *      Const member functions cannot modify
 *      member variables.
 *
 * Sometimes certain data should be allowed
 * to change even when the object itself is
 * logically constant.
 *
 * For this purpose C++ provides:
 *
 *      mutable
 *
 * Syntax:
 *
 *      mutable data_type variable;
 *
 * Example:
 *
 * class Logger
 * {
 * private:
 *
 *      mutable int accessCount = 0;
 *
 * public:
 *
 *      void print() const
 *      {
 *          accessCount++;
 *      }
 * };
 *
 * Without mutable:
 *
 *      Compilation Error
 *
 * With mutable:
 *
 *      Modification Allowed
 *
 * ============================================================
 * WHY MUTABLE EXISTS
 * ============================================================
 *
 * Some variables do not represent the actual
 * state of an object.
 *
 * Examples:
 *
 *      • Cache Values
 *      • Access Counters
 *      • Logging Information
 *      • Debug Statistics
 *      • Mutex Objects
 *
 * These members may change internally without
 * changing the logical meaning of the object.
 *
 * ============================================================
 * LOGICAL CONSTNESS vs PHYSICAL CONSTNESS
 * ============================================================
 *
 * Physical Constness:
 *
 *      No member variable changes.
 *
 * Logical Constness:
 *
 *      The object's observable behavior
 *      remains unchanged.
 *
 * Example:
 *
 *      Updating a cache.
 *
 * Memory changes physically,
 * but object behavior remains the same.
 *
 * mutable enables:
 *
 *      Logical Constness
 *
 * ============================================================
 * MUTABLE WITH CACHING
 * ============================================================
 *
 * Example:
 *
 * class Database
 * {
 * private:
 *
 *      mutable bool cacheValid;
 *      mutable std::string cache;
 *
 * public:
 *
 *      std::string getData() const;
 * };
 *
 * Cache updates are allowed inside
 * const member functions because the
 * cache members are mutable.
 *
 * ============================================================
 * MUTABLE WITH MUTEX
 * ============================================================
 *
 * One of the most common real-world uses.
 *
 * Example:
 *
 * class Counter
 * {
 * private:
 *
 *      mutable std::mutex mtx;
 *      int count;
 *
 * public:
 *
 *      int getCount() const
 *      {
 *          std::lock_guard<std::mutex> lock(mtx);
 *          return count;
 *      }
 * };
 *
 * Locking modifies the mutex object.
 *
 * mutable allows locking even inside
 * a const member function.
 *
 * ============================================================
 * IMPORTANT RULES
 * ============================================================
 *
 * 1. Const objects can only call
 *    const member functions.
 *
 * 2. Const member functions cannot
 *    modify non-mutable members.
 *
 * 3. Mutable members may be modified
 *    even inside const member functions.
 *
 * 4. Getter functions should usually
 *    be declared const.
 *
 * 5. Apply const wherever modification
 *    is unnecessary.
 *
 * ============================================================
 * GOLDEN RULE
 * ============================================================
 *
 * Use const by default.
 *
 * If a function does not modify the object:
 *
 *      Make it const.
 *
 * If a variable should never change:
 *
 *      Make it const.
 *
 * Use mutable only for implementation
 * details that do not affect the logical
 * state of the object.
 *
 * ============================================================
 * SUMMARY
 * ============================================================
 *
 * const:
 *      Prevents modification.
 *
 * Const Object:
 *      Read-only object.
 *
 * Const Member Function:
 *      Cannot modify object state.
 *
 * Const Correctness:
 *      Applying const wherever possible.
 *
 * mutable:
 *      Allows specific members to be modified
 *      inside const member functions.
 *
 * Logical Constness:
 *      Object appears unchanged externally
 *      even if some internal mutable data
 *      changes.
 *
 * Philosophy:
 *
 *      "Make everything const unless
 *      modification is required."
 *
*/

#include<iostream>

class Vec2
{
    private:
    int x,y;

    int getXCoordinate() const
    {
        // x = 2; // illegal to make it legal somehow use mutable keyword
        return x;
    }

};

// making const references
void printClass(const Vec2& position) 
{
    // do something
    // position =  Vec2(); // illegal 

}


int main()
{
    int age  = 19;
    int salary  = 190000;

    // const variable
    const int CARD_LIMIT = 100000;
    // CARD_LIMIT = 100; // illegal

    //changes via pointer may result in undefined behaviour
    int* ptr = (int*) &CARD_LIMIT;
    *ptr = 100;

    std::cout<<*ptr<<std::endl;

    // const pointers

    // value unchanged
    const int* pointer = new int(100);
    // *pointer = 1000; // illegal

    //address unchanged
    int* const pntr = &age;
    // pntr = &salary; // illegal

    // value and address unchanged
    const int* const strict_ptr = &age;
    // strict_ptr = &salary; // illegal
    // *strict_ptr = 190; // illegal


    return 0;
}