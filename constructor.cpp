/**
 * ============================================================
 * CONSTRUCTORS IN C++
 * ============================================================
 *
 * Constructors:
 * ------------------------------------------------------------
 * - A constructor is a special member function of a class.
 * - It is automatically called whenever an object of the class
 *   is created.
 * - Its primary purpose is to initialize data members and
 *   establish a valid initial state for the object.
 * - Constructors eliminate the need for separate initialization
 *   functions and help ensure objects are always created in a
 *   usable state.
 *
 * Benefits:
 *      1. Automatic Initialization
 *      2. Cleaner Object Creation
 *      3. Improved Readability
 *      4. Better Encapsulation
 *      5. Resource Management
 *      6. Prevention of Invalid Object States
 *
 * ============================================================
 * What is a Constructor?
 * ============================================================
 *
 * A constructor is a special member function whose name is
 * exactly the same as the class name.
 *
 * Characteristics:
 *
 *      • Same name as the class.
 *      • No return type (not even void).
 *      • Invoked automatically.
 *      • Can be overloaded.
 *      • Used to initialize objects.
 *      • Can be public, protected, or private.
 *
 * Example:
 *
 * class Student
 * {
 * public:
 *
 *      Student()
 *      {
 *          std::cout << "Student Created";
 *      }
 * };
 *
 * Student s1;
 *
 * Output:
 *
 *      Student Created
 *
 * The constructor executes automatically when s1
 * is created.
 *
 * ============================================================
 * Why Constructors Are Needed
 * ============================================================
 *
 * Without initialization, object members may contain
 * garbage values.
 *
 * Example:
 *
 * class Student
 * {
 * public:
 *      int age;
 * };
 *
 * Student s1;
 *
 * age may contain an unpredictable value.
 *
 * Constructors solve this problem by ensuring data
 * members receive valid initial values.
 *
 * Example:
 *
 * class Student
 * {
 * public:
 *      int age;
 *
 *      Student()
 *      {
 *          age = 18;
 *      }
 * };
 *
 * ============================================================
 * 1. Default Constructor
 * ============================================================
 *
 * A constructor that takes no parameters.
 *
 * Syntax:
 *
 * ClassName()
 * {
 *      // initialization
 * }
 *
 * Example:
 *
 * class Student
 * {
 * public:
 *
 *      Student()
 *      {
 *          std::cout << "Default Constructor";
 *      }
 * };
 *
 * Student s1;
 *
 * The default constructor is automatically called.
 *
 * ------------------------------------------------------------
 * Compiler Generated Default Constructor
 * ------------------------------------------------------------
 *
 * If a class does not define any constructor,
 * the compiler may generate a default constructor.
 *
 * Example:
 *
 * class Student
 * {
 * public:
 *      int age;
 * };
 *
 * Student s1;
 *
 * The compiler provides a default constructor.
 *
 * Note:
 *
 * Once you define your own constructor, the compiler
 * may no longer generate certain constructors
 * automatically.
 *
 * ============================================================
 * 2. Parameterized Constructor
 * ============================================================
 *
 * A parameterized constructor accepts arguments
 * during object creation.
 *
 * Example:
 *
 * class Student
 * {
 * public:
 *      int age;
 *
 *      Student(int a)
 *      {
 *          age = a;
 *      }
 * };
 *
 * Student s1(20);
 *
 * Result:
 *
 *      age = 20
 *
 * Advantages:
 *
 *      • Flexible initialization
 *      • User-defined values
 *      • Prevents uninitialized members
 *
 * ============================================================
 * Constructor Overloading
 * ============================================================
 *
 * A class may contain multiple constructors.
 *
 * Example:
 *
 * class Student
 * {
 * public:
 *
 *      Student()
 *      {
 *      }
 *
 *      Student(int age)
 *      {
 *      }
 *
 *      Student(int age, std::string name)
 *      {
 *      }
 * };
 *
 * The compiler chooses the constructor whose
 * parameter list best matches the arguments.
 *
 * ============================================================
 * 3. Copy Constructor
 * ============================================================
 *
 * A copy constructor creates a new object using
 * an existing object of the same class.
 *
 * Syntax:
 *
 * ClassName(const ClassName& other)
 * {
 * }
 *
 * Example:
 *
 * class Student
 * {
 * public:
 *
 *      Student()
 *      {
 *      }
 *
 *      Student(const Student& other)
 *      {
 *          std::cout << "Copy Constructor";
 *      }
 * };
 *
 * Student s1;
 * Student s2 = s1;
 *
 * The copy constructor initializes s2 from s1.
 *
 * Common Uses:
 *
 *      • Copying objects
 *      • Pass-by-value
 *      • Return-by-value
 *
 * ============================================================
 * Shallow Copy vs Deep Copy
 * ============================================================
 *
 * When objects contain pointers or dynamically
 * allocated memory, copying becomes important.
 *
 * Shallow Copy:
 *
 *      Copies memory addresses only.
 *
 * Deep Copy:
 *
 *      Creates independent copies of resources.
 *
 * Proper copy constructors are often required
 * when managing dynamic memory.
 *
 * ============================================================
 * 4. Move Constructor (C++11)
 * ============================================================
 *
 * A move constructor transfers ownership of
 * resources from one object to another.
 *
 * Syntax:
 *
 * ClassName(ClassName&& other)
 * {
 * }
 *
 * Benefits:
 *
 *      • Faster than copying
 *      • Reduces memory overhead
 *      • Improves performance
 *
 * Commonly used with:
 *
 *      • std::vector
 *      • std::string
 *      • Dynamic memory
 *      • Temporary objects
 *
 * ============================================================
 * Constructor Initialization List
 * ============================================================
 *
 * Data members can be initialized before the
 * constructor body executes.
 *
 * Syntax:
 *
 * ClassName(int value)
 *      : age(value)
 * {
 * }
 *
 * Example:
 *
 * class Student
 * {
 * private:
 *
 *      int age;
 *
 * public:
 *
 *      Student(int value)
 *          : age(value)
 *      {
 *      }
 * };
 *
 * Advantages:
 *
 *      • More efficient
 *      • Required for const members
 *      • Required for reference members
 *      • Required for certain objects
 *
 * ============================================================
 * Explicit Constructors
 * ============================================================
 *
 * Single-parameter constructors can perform
 * automatic type conversions.
 *
 * Example:
 *
 * class Student
 * {
 * public:
 *
 *      Student(int age)
 *      {
 *      }
 * };
 *
 * Student s = 20;   // implicit conversion
 *
 * To prevent this:
 *
 * class Student
 * {
 * public:
 *
 *      explicit Student(int age)
 *      {
 *      }
 * };
 *
 * Now:
 *
 *      Student s(20);      // Valid
 *      Student s = 20;     // Error
 *
 * ============================================================
 * Deleting Constructors
 * ============================================================
 *
 * Sometimes object creation should be restricted.
 *
 * Modern C++ provides:
 *
 *      = delete
 *
 * Example:
 *
 * class Student
 * {
 * public:
 *
 *      Student() = delete;
 * };
 *
 * Student s1;      // Error
 *
 * Result:
 *
 *      Default construction is forbidden.
 *
 * Common Uses:
 *
 *      • Force parameterized initialization
 *      • Prevent invalid states
 *      • Restrict object creation
 *
 * Example:
 *
 * class Student
 * {
 * public:
 *
 *      Student() = delete;
 *
 *      Student(int age)
 *      {
 *      }
 * };
 *
 * Student s1;      // Error
 * Student s2(20);  // Valid
 *
 * ============================================================
 * Private Constructors
 * ============================================================
 *
 * Constructors can also be made private.
 *
 * Example:
 *
 * class Student
 * {
 * private:
 *
 *      Student()
 *      {
 *      }
 *
 * public:
 *
 *      Student(int age)
 *      {
 *      }
 * };
 *
 * Student s1;      // Error
 *
 * Since the constructor is private, code outside
 * the class cannot call it.
 *
 * Common Uses:
 *
 *      • Singleton Pattern
 *      • Factory Pattern
 *      • Controlled Object Creation
 *
 * ============================================================
 * Constructor Call Order
 * ============================================================
 *
 * When an object is created:
 *
 *      1. Memory is allocated.
 *      2. Base class constructors execute.
 *      3. Data members are initialized.
 *      4. Constructor body executes.
 *      5. Object becomes ready for use.
 *
 * Example:
 *
 * Student s1(20);
 *
 * Sequence:
 *
 *      Allocate Memory
 *      Initialize Members
 *      Execute Constructor
 *      Object Ready
 *
 * ============================================================
 * UNDER THE HOOD
 * ============================================================
 *
 * Constructors are not magical operations.
 *
 * Example:
 *
 * Student s1(20);
 *
 * Conceptually becomes:
 *
 *      Allocate memory for s1
 *      Call Student::Student(&s1, 20)
 *
 * Every non-static member function receives
 * a hidden pointer called:
 *
 *      this
 *
 * The this pointer refers to the current object.
 *
 * Conceptually:
 *
 *      Student::Student(Student* this, int age)
 *
 * The compiler automatically passes this pointer.
 *
 * ============================================================
 * Memory Layout Example
 * ============================================================
 *
 * class Student
 * {
 * public:
 *
 *      int age;
 *      double marks;
 * };
 *
 * Student s1;
 *
 * Memory:
 *
 *      +------------+
 *      | age        |
 *      +------------+
 *      | marks      |
 *      +------------+
 *
 * Constructors initialize these memory locations
 * after object memory has been allocated.
 *
 * ============================================================
 * Important Notes
 * ============================================================
 *
 * 1. Constructors have no return type.
 *
 * 2. Constructors execute automatically.
 *
 * 3. Constructors can be overloaded.
 *
 * 4. Constructors cannot be inherited directly.
 *
 * 5. Constructors cannot be virtual.
 *
 * 6. Initialization lists are preferred when
 *    possible.
 *
 * 7. Constructors may be public, protected,
 *    or private.
 *
 * 8. Deleted constructors prevent unwanted
 *    object creation.
 *
 * 9. Copy and move constructors are important
 *    when managing resources.
 *
 * 10. If no constructor is defined, the compiler
 *     may generate a default constructor.
 *
 * ============================================================
 * Summary
 * ============================================================
 *
 * Constructor:
 *      Special member function used to initialize
 *      objects automatically.
 *
 * Default Constructor:
 *      No parameters.
 *
 * Parameterized Constructor:
 *      Accepts initialization values.
 *
 * Copy Constructor:
 *      Creates an object from another object.
 *
 * Move Constructor:
 *      Transfers ownership of resources.
 *
 * Initialization List:
 *      Efficient member initialization.
 *
 * Deleted Constructor:
 *      Prevents specific object creation.
 *
 * Private Constructor:
 *      Restricts access to object creation.
 *
 * Under the Hood:
 *      Compiler allocates memory, initializes
 *      members, passes the hidden this pointer,
 *      and executes the constructor before the
 *      object is used.
 */

#include <iostream>

class Vec2
{

public:
    float x_coordinate;
    float y_coordinate;

public:
    Vec2(float x, float y)
    {
        x_coordinate = x;
        y_coordinate = y;
    }

public:
    void print()
    {
        std::cout << "X coordinate: " << x_coordinate << ", Y coordinate: " << y_coordinate << std::endl;
    }
};

int main()
{
    Vec2 player_position = Vec2(10.2f,11.4f); // or Vec2 player_position(10.2f,11.4f);
    player_position.print();

    return 0;
}