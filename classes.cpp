/**
 * ============================
 * CLASSES IN C++
 * ============================
 *
 * Classes:
 * - A class is a user-defined data type in C++ that
 *   acts as a blueprint for creating objects.
 *
 * - It combines data (variables) and functions
 *   into a single unit (encapsulation).
 *
 * - Classes are the foundation of Object-Oriented Programming (OOP).
 *
 * --------------------------------------------------
 * Why Use Classes?
 * --------------------------------------------------
 *
 * 1. Data security (encapsulation)
 * 2. Code reusability
 * 3. Real-world modeling
 * 4. Better organization of code
 * 5. Easy maintenance and scalability
 *
 * --------------------------------------------------
 * Class Syntax
 * --------------------------------------------------
 *
 * class ClassName {
 *      // access specifier
 *      data members;
 *      member functions;
 * };
 *
 * Example:
 *
 * class Student {
 * public:
 *      int roll;
 *      string name;
 *
 *      void display() {
 *          cout << roll << " " << name;
 *      }
 * };
 *
 * --------------------------------------------------
 * Object
 * --------------------------------------------------
 *
 * - An object is an instance of a class.
 * - Memory is allocated when an object is created.
 *
 * Example:
 *
 * Student s1;
 *
 * Here:
 * - s1 is an object of class Student
 *
 * --------------------------------------------------
 * Accessing Members
 * --------------------------------------------------
 *
 * Syntax:
 *
 * object.member
 *
 * Example:
 *
 * s1.roll = 101;
 * s1.name = "Aman";
 * s1.display();
 *
 * --------------------------------------------------
 * Access Specifiers
 * --------------------------------------------------
 *
 * 1. public
 *    - Accessible from anywhere
 *
 * 2. private
 *    - Accessible only inside the class
 *
 * 3. protected
 *    - Accessible in class and derived classes
 *
 * --------------------------------------------------
 * Example of Access Specifiers
 * --------------------------------------------------
 *
 * class Test {
 * private:
 *      int secret;
 *
 * public:
 *      int data;
 * };
 *
 * --------------------------------------------------
 * Encapsulation
 * --------------------------------------------------
 *
 * - Wrapping data and functions into a single unit.
 * - Restricts direct access to data.
 *
 * Benefits:
 *      1. Data security
 *      2. Controlled access
 *      3. Better maintainability
 *
 * --------------------------------------------------
 * Member Functions
 * --------------------------------------------------
 *
 * - Functions defined inside a class are called
 *   member functions.
 *
 * Example:
 *
 * void show() {
 *      cout << "Hello";
 * }
 *
 * --------------------------------------------------
 * Outside Class Function Definition
 * --------------------------------------------------
 *
 * class Demo {
 * public:
 *      void show();
 * };
 *
 * void Demo::show() {
 *      cout << "Hello";
 * }
 *
 * --------------------------------------------------
 * Constructor
 * --------------------------------------------------
 *
 * - Special function that is called automatically
 *   when an object is created.
 *
 * - Used to initialize objects.
 *
 * Example:
 *
 * class A {
 * public:
 *      A() {
 *          cout << "Constructor called";
 *      }
 * };
 *
 * --------------------------------------------------
 * Destructor
 * --------------------------------------------------
 *
 * - Special function called when object is destroyed.
 *
 * Syntax:
 *
 * ~ClassName()
 *
 * Example:
 *
 * class A {
 * public:
 *      ~A() {
 *          cout << "Destructor called";
 *      }
 * };
 *
 * --------------------------------------------------
 * this Pointer
 * --------------------------------------------------
 *
 * - Pointer that points to current object.
 *
 * Example:
 *
 * class A {
 * public:
 *      int x;
 *
 *      void set(int x) {
 *          this->x = x;
 *      }
 * };
 *
 * --------------------------------------------------
 * Static Members
 * --------------------------------------------------
 *
 * - Shared among all objects of a class.
 *
 * Example:
 *
 * class A {
 * public:
 *      static int count;
 * };
 *
 * int A::count = 0;
 *
 * --------------------------------------------------
 * Object Creation Types
 * --------------------------------------------------
 *
 * 1. Stack object:
 *      Student s1;
 *
 * 2. Heap object:
 *      Student *s = new Student;
 *
 * --------------------------------------------------
 * Difference: Class vs Object
 * --------------------------------------------------
 *
 * Class:
 *      -> Blueprint
 *      -> No memory allocated
 *
 * Object:
 *      -> Instance of class
 *      -> Memory allocated
 *
 * --------------------------------------------------
 * Common Mistakes
 * --------------------------------------------------
 *
 * 1. Forgetting semicolon after class definition
 *
 * 2. Accessing private members directly
 *
 * 3. Not initializing objects properly
 *
 * 4. Confusing class with object
 *
 * --------------------------------------------------
 * Advantages of Classes
 * --------------------------------------------------
 *
 * 1. Real-world modeling
 * 2. Code reusability
 * 3. Data security (encapsulation)
 * 4. Easier maintenance
 * 5. Supports inheritance and polymorphism
 *
 * --------------------------------------------------
 * Summary
 * --------------------------------------------------
 *
 * Class:
 *      -> Blueprint of objects
 *
 * Object:
 *      -> Instance of class
 *
 * Key Idea:
 *      -> Classes combine data + functions
 *      -> Foundation of OOP in C++
*/

#include<iostream>

class Player {
    
    public:
        const char* name;
        int position_x = 0 , position_y = 0;
        int speed = 0;

    void move(int dx, int dy) {
        position_x += position_x + dx * speed;
        position_y += position_y + dy * speed;
    }

    void printCurrentPosition() {
        std::cout<<"posiion x: "<<position_x<<" posiion y: "<<position_y<<std::endl;
    }
};


int main() {

    Player guest;

    guest.printCurrentPosition();

    // make player move
    guest.speed = 4;
    guest.move(3,5);
    guest.printCurrentPosition();

    return 0;
}