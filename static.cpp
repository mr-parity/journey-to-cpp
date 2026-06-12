/**
 * ============================
 * STATIC KEYWORD IN C++
 * ============================
 *
 * Static:
 * - The 'static' keyword is used to control the
 *   lifetime, visibility, and sharing behavior
 *   of variables and functions.
 *
 * - Its meaning depends on where it is used.
 *
 * --------------------------------------------------
 * Why Use static?
 * --------------------------------------------------
 *
 * 1. Preserve values between function calls
 * 2. Share data among all objects of a class
 * 3. Restrict visibility to a single source file
 * 4. Reduce unnecessary object-specific copies
 * 5. Manage common resources efficiently
 *
 * --------------------------------------------------
 * Static Local Variable
 * --------------------------------------------------
 *
 * - Declared inside a function using static.
 *
 * - Initialized only once.
 *
 * - Retains its value between function calls.
 *
 * - Lifetime:
 *      Entire program execution
 *
 * - Scope:
 *      Limited to the function
 *
 * Example:
 *
 * void counter() {
 *      static int count = 0;
 *      count++;
 *      cout << count << endl;
 * }
 *
 * Output:
 *      1
 *      2
 *      3
 *
 * --------------------------------------------------
 * Normal Local Variable vs Static Local Variable
 * --------------------------------------------------
 *
 * Normal Variable:
 *      - Created every function call
 *      - Destroyed when function ends
 *
 * Static Variable:
 *      - Created only once
 *      - Exists until program termination
 *
 * Example:
 *
 * void test() {
 *      int x = 0;
 *      x++;
 *      cout << x;
 * }
 *
 * Output:
 *      1 1 1
 *
 * static int x = 0;
 *
 * Output:
 *      1 2 3
 *
 * --------------------------------------------------
 * Static Global Variable
 * --------------------------------------------------
 *
 * - Declared outside all functions/classes.
 *
 * - Accessible only within the current source file.
 *
 * - Prevents external linkage.
 *
 * Example:
 *
 * static int data = 100;
 *
 * --------------------------------------------------
 * Static Function
 * --------------------------------------------------
 *
 * - A global function declared with static.
 *
 * - Can be used only within the same source file.
 *
 * Example:
 *
 * static void show() {
 *      cout << "Hello";
 * }
 *
 * --------------------------------------------------
 * Static Data Member
 * --------------------------------------------------
 *
 * - Belongs to the class, not individual objects.
 *
 * - Shared among all objects.
 *
 * - Only one copy exists in memory.
 *
 * Example:
 *
 * class Student {
 * public:
 *      static int count;
 * };
 *
 * int Student::count = 0;
 *
 * --------------------------------------------------
 * Accessing Static Data Members
 * --------------------------------------------------
 *
 * Preferred Syntax:
 *
 * ClassName::member
 *
 * Example:
 *
 * Student::count++;
 *
 * Although it can also be accessed using objects:
 *
 * Student s1;
 * s1.count++;
 *
 * --------------------------------------------------
 * Static Member Function
 * --------------------------------------------------
 *
 * - Belongs to the class.
 *
 * - Can be called without creating an object.
 *
 * - Accesses only static members directly.
 *
 * Example:
 *
 * class Student {
 * public:
 *      static int count;
 *
 *      static void display() {
 *          cout << count;
 *      }
 * };
 *
 * Call:
 *
 * Student::display();
 *
 * --------------------------------------------------
 * Why Static Member Functions Cannot Access
 * Non-Static Members?
 * --------------------------------------------------
 *
 * - Non-static members belong to objects.
 *
 * - Static functions do not have a 'this' pointer.
 *
 * - Therefore they cannot directly access
 *   object-specific data.
 *
 * --------------------------------------------------
 * Memory Representation
 * --------------------------------------------------
 *
 * Non-static Member:
 *      Separate copy for every object
 *
 * Static Member:
 *      Single shared copy for entire class
 *
 * Example:
 *
 * Student s1;
 * Student s2;
 *
 * Both objects share:
 *
 * Student::count
 *
 * --------------------------------------------------
 * Common Uses of static
 * --------------------------------------------------
 *
 * 1. Function call counters
 * 2. Object counters
 * 3. Singleton design pattern
 * 4. Shared configuration data
 * 5. File-level helper functions
 *
 * --------------------------------------------------
 * Common Mistakes
 * --------------------------------------------------
 *
 * 1. Forgetting to define static data members
 *    outside the class
 *
 * 2. Trying to access non-static members
 *    inside static member functions
 *
 * 3. Assuming each object gets its own copy
 *    of static members
 *
 * 4. Confusing scope with lifetime
 *
 * --------------------------------------------------
 * Summary
 * --------------------------------------------------
 *
 * Static Local Variable:
 *      -> Retains value between function calls
 *
 * Static Global Variable:
 *      -> Visible only in current source file
 *
 * Static Data Member:
 *      -> Shared among all objects
 *
 * Static Member Function:
 *      -> Called using ClassName::
 *
 * Key Idea:
 *      -> static creates data/functions that
 *         persist for the program's lifetime
 *         or are shared by the entire class.
*/

#include<iostream>

int myage = 12;

int main() {

    std::cout<<myage<<std::endl;

    return 0;
}