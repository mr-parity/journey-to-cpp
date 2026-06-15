/**
 * ============================================================
 * DESTRUCTORS IN C++
 * ============================================================
 *
 * Destructors:
 * ------------------------------------------------------------
 * - A destructor is a special member function of a class.
 * - It is automatically called when an object is destroyed.
 * - Its primary purpose is to perform cleanup operations and
 *   release resources owned by the object.
 * - Destructors help prevent resource leaks such as memory,
 *   file handles, network connections, mutexes, and other
 *   system resources.
 *
 * Benefits:
 *      1. Automatic Resource Cleanup
 *      2. Prevents Memory Leaks
 *      3. Supports RAII
 *      4. Improves Program Reliability
 *      5. Simplifies Resource Management
 *
 * ============================================================
 * What is a Destructor?
 * ============================================================
 *
 * A destructor is a special member function whose name is
 * the same as the class name but prefixed with a tilde (~).
 *
 * Characteristics:
 *
 *      • Same name as the class.
 *      • Prefixed with ~.
 *      • No return type.
 *      • Takes no parameters.
 *      • Called automatically.
 *      • Only one destructor can exist per class.
 *      • Cannot be overloaded.
 *
 * Syntax:
 *
 *      ~ClassName()
 *      {
 *          // cleanup code
 *      }
 *
 * Example:
 *
 * class Student
 * {
 * public:
 *
 *      ~Student()
 *      {
 *          std::cout << "Destructor Called";
 *      }
 * };
 *
 * int main()
 * {
 *      Student s1;
 * }
 *
 * Output:
 *
 *      Destructor Called
 *
 * The destructor executes automatically when s1
 * goes out of scope.
 *
 * ============================================================
 * Why Destructors Are Needed
 * ============================================================
 *
 * Objects often acquire resources during their lifetime.
 *
 * Examples:
 *
 *      • Dynamic Memory
 *      • Files
 *      • Database Connections
 *      • Network Sockets
 *      • Mutexes
 *      • System Handles
 *
 * These resources should be released when the object
 * is no longer needed.
 *
 * Example:
 *
 * class Student
 * {
 * private:
 *
 *      int* data;
 *
 * public:
 *
 *      Student()
 *      {
 *          data = new int[100];
 *      }
 *
 *      ~Student()
 *      {
 *          delete[] data;
 *      }
 * };
 *
 * Without the destructor:
 *
 *      Memory Leak
 *
 * With the destructor:
 *
 *      Memory Released Properly
 *
 * ============================================================
 * When is a Destructor Called?
 * ============================================================
 *
 * Destructors are automatically invoked when:
 *
 *      1. A local object goes out of scope.
 *      2. A function finishes execution.
 *      3. A dynamically allocated object is deleted.
 *      4. Program termination destroys static objects.
 *      5. Temporary objects are destroyed.
 *
 * Example:
 *
 * void func()
 * {
 *      Student s1;
 * }
 *
 * Destructor executes when func() returns.
 *
 * ============================================================
 * Stack Objects vs Heap Objects
 * ============================================================
 *
 * Stack Object:
 *
 *      Student s1;
 *
 * Destructor Call:
 *
 *      Automatic
 *
 * Heap Object:
 *
 *      Student* ptr = new Student();
 *
 * Destructor Call:
 *
 *      delete ptr;
 *
 * Example:
 *
 * Student* ptr = new Student();
 *
 * delete ptr;
 *
 * Destructor executes when delete is used.
 *
 * Important:
 *
 * Forgetting delete causes:
 *
 *      Memory Leak
 *
 * ============================================================
 * Compiler Generated Destructor
 * ============================================================
 *
 * If no destructor is provided by the programmer,
 * the compiler may generate a default destructor.
 *
 * Example:
 *
 * class Student
 * {
 * public:
 *      int age;
 * };
 *
 * The compiler automatically provides a destructor.
 *
 * Compiler-generated destructors are usually
 * sufficient when no manual resource management
 * is involved.
 *
 * ============================================================
 * Destructor and Dynamic Memory
 * ============================================================
 *
 * Example:
 *
 * class Array
 * {
 * private:
 *
 *      int* data;
 *
 * public:
 *
 *      Array()
 *      {
 *          data = new int[100];
 *      }
 *
 *      ~Array()
 *      {
 *          delete[] data;
 *      }
 * };
 *
 * Construction:
 *
 *      Allocate Memory
 *
 * Destruction:
 *
 *      Release Memory
 *
 * ============================================================
 * Destructor Call Order
 * ============================================================
 *
 * Objects are destroyed in the reverse order
 * of their creation.
 *
 * Example:
 *
 * int main()
 * {
 *      Student s1;
 *      Student s2;
 * }
 *
 * Creation Order:
 *
 *      s1
 *      s2
 *
 * Destruction Order:
 *
 *      s2
 *      s1
 *
 * This is known as:
 *
 *      Last Created, First Destroyed
 *
 * ============================================================
 * Destructors in Inheritance
 * ============================================================
 *
 * Constructors execute from:
 *
 *      Base → Derived
 *
 * Destructors execute from:
 *
 *      Derived → Base
 *
 * Example:
 *
 * class Base
 * {
 * public:
 *      ~Base()
 *      {
 *      }
 * };
 *
 * class Derived : public Base
 * {
 * public:
 *      ~Derived()
 *      {
 *      }
 * };
 *
 * Destruction Order:
 *
 *      Derived Destructor
 *      Base Destructor
 *
 * ============================================================
 * Virtual Destructors
 * ============================================================
 *
 * A base class destructor should usually be
 * declared virtual when polymorphism is used.
 *
 * Example:
 *
 * class Base
 * {
 * public:
 *
 *      virtual ~Base()
 *      {
 *      }
 * };
 *
 * class Derived : public Base
 * {
 * public:
 *
 *      ~Derived()
 *      {
 *      }
 * };
 *
 * Base* ptr = new Derived();
 *
 * delete ptr;
 *
 * Result:
 *
 *      Derived Destructor Executes
 *      Base Destructor Executes
 *
 * Without virtual:
 *
 *      Undefined / Incomplete Cleanup
 *
 * Rule:
 *
 *      If a class has any virtual functions,
 *      its destructor should usually be virtual.
 *
 * ============================================================
 * Pure Virtual Destructor
 * ============================================================
 *
 * A destructor can be declared pure virtual.
 *
 * Example:
 *
 * class Base
 * {
 * public:
 *
 *      virtual ~Base() = 0;
 * };
 *
 * Even pure virtual destructors must have
 * a definition.
 *
 * Example:
 *
 * Base::~Base()
 * {
 * }
 *
 * Purpose:
 *
 *      Makes the class abstract.
 *
 * ============================================================
 * Destructor and RAII
 * ============================================================
 *
 * RAII:
 *
 *      Resource Acquisition Is Initialization
 *
 * Principle:
 *
 *      Constructor acquires resources.
 *      Destructor releases resources.
 *
 * Example:
 *
 * class File
 * {
 * public:
 *
 *      File()
 *      {
 *          // open file
 *      }
 *
 *      ~File()
 *      {
 *          // close file
 *      }
 * };
 *
 * This technique ensures resources are always
 * released even if exceptions occur.
 *
 * ============================================================
 * Under The Hood
 * ============================================================
 *
 * Destructors are ordinary member functions with
 * special invocation rules.
 *
 * Example:
 *
 * Student s1;
 *
 * When s1 goes out of scope:
 *
 *      s1.~Student();
 *
 * Conceptually, the compiler generates logic
 * similar to:
 *
 *      Call Destructor
 *      Release Object Storage
 *
 * Dynamic Objects:
 *
 *      delete ptr;
 *
 * Conceptually:
 *
 *      ptr->~Student();
 *      free(memory);
 *
 * Actual implementation is compiler dependent,
 * but this is the general idea.
 *
 * ============================================================
 * Memory Lifecycle
 * ============================================================
 *
 * Object Creation:
 *
 *      Allocate Memory
 *      Constructor Executes
 *      Object Used
 *
 * Object Destruction:
 *
 *      Destructor Executes
 *      Memory Released
 *
 * Lifecycle:
 *
 *      Constructor → Use Object → Destructor
 *
 * ============================================================
 * Important Notes
 * ============================================================
 *
 * 1. A destructor has no return type.
 *
 * 2. A destructor cannot take parameters.
 *
 * 3. A class can have only one destructor.
 *
 * 4. Destructors cannot be overloaded.
 *
 * 5. Destructors execute automatically.
 *
 * 6. Compiler may generate a default destructor.
 *
 * 7. Use virtual destructors in polymorphic
 *    base classes.
 *
 * 8. Destructors are primarily used for cleanup.
 *
 * 9. Avoid throwing exceptions from destructors.
 *
 * 10. Objects are destroyed in reverse order
 *     of creation.
 *
 * ============================================================
 * Summary
 * ============================================================
 *
 * Destructor:
 *      Special member function responsible for
 *      object cleanup.
 *
 * Purpose:
 *      Release resources and perform cleanup.
 *
 * Invocation:
 *      Automatic when an object is destroyed.
 *
 * Stack Object:
 *      Destructor called automatically.
 *
 * Heap Object:
 *      Destructor called through delete.
 *
 * Inheritance:
 *      Destruction occurs from Derived → Base.
 *
 * Virtual Destructor:
 *      Required for safe polymorphic deletion.
 *
 * RAII:
 *      Constructor acquires resources,
 *      Destructor releases resources.
 *
 * Under the Hood:
 *      Compiler invokes the destructor before
 *      reclaiming the object's storage and
 *      releasing associated resources.
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

    ~Vec2()
    {
        std::cout<< "Destructor is destroying instance"<<std::endl;
    }
};


void createAndPrintObject()
{
    Vec2 player_position = Vec2(10.2f, 11.4f); // or Vec2 player_position(10.2f,11.4f);
    player_position.print();
}

int main()
{
    createAndPrintObject();

    return 0;
}
