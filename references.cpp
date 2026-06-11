/**
 * ============================
 * REFERENCES IN C++
 * ============================
 *
 * References:
 * - A reference is an alias (another name) for an existing variable.
 * - Once a reference is created, it cannot be changed to refer
 *   to another variable.
 * - It must be initialized at the time of declaration.
 *
 * - References are used to:
 *      1. Avoid copying data
 *      2. Improve performance
 *      3. Enable pass-by-reference in functions
 *      4. Modify original variables safely
 *
 * --------------------------------------------------
 * Reference Syntax
 * --------------------------------------------------
 *
 * data_type &reference_name = variable_name;
 *
 * Example:
 *
 * int x = 10;
 * int &ref = x;
 *
 * --------------------------------------------------
 * How References Work
 * --------------------------------------------------
 *
 * Example:
 *
 * int x = 10;
 * int &ref = x;
 *
 * ref = 20;
 *
 * Now:
 * x = 20
 *
 * Explanation:
 * - ref is not a new variable.
 * - ref and x refer to the same memory location.
 *
 * --------------------------------------------------
 * Key Properties of References
 * --------------------------------------------------
 *
 * 1. Must be initialized at declaration.
 *
 * 2. Cannot be NULL (unlike pointers).
 *
 * 3. Cannot be reassigned to another variable.
 *
 * 4. Acts as an alias of the original variable.
 *
 * Example:
 *
 * int a = 5;
 * int b = 10;
 *
 * int &ref = a;
 * ref = b;   // NOT reassignment; value of a becomes 10
 *
 * --------------------------------------------------
 * Reference vs Pointer
 * --------------------------------------------------
 *
 * Reference:
 *      - Must be initialized
 *      - Cannot be changed
 *      - No null reference
 *      - Easier syntax
 *
 * Pointer:
 *      - Can be uninitialized
 *      - Can be changed
 *      - Can be null
 *      - Requires dereferencing (*)
 *
 * --------------------------------------------------
 * References in Functions (Pass by Reference)
 * --------------------------------------------------
 *
 * - Used to modify original variables inside functions
 *
 * Example:
 *
 * void update(int &x)
 * {
 *      x = 100;
 * }
 *
 * int a = 10;
 * update(a);
 *
 * Now:
 * a = 100
 *
 * --------------------------------------------------
 * Advantages of Pass by Reference
 * --------------------------------------------------
 *
 * 1. No copying of data (faster)
 * 2. Saves memory
 * 3. Allows modification of original variable
 *
 * --------------------------------------------------
 * Const Reference
 * --------------------------------------------------
 *
 * - Used when you want to avoid copying but prevent modification
 *
 * Example:
 *
 * void print(const int &x)
 * {
 *      std::cout << x;
 * }
 *
 * - x cannot be modified inside function
 *
 * --------------------------------------------------
 * Return by Reference
 * --------------------------------------------------
 *
 * - Function returns a reference to a variable
 *
 * Example:
 *
 * int& getValue(int &x)
 * {
 *      return x;
 * }
 *
 * Usage:
 *
 * int a = 10;
 * getValue(a) = 50;
 *
 * Now:
 * a = 50
 *
 * --------------------------------------------------
 * Important Warning
 * --------------------------------------------------
 *
 * Never return reference to local variable:
 *
 * int& func()
 * {
 *      int x = 10;
 *      return x;  // dangerous (x destroyed after function ends)
 * }
 *
 * This leads to undefined behavior.
 *
 * --------------------------------------------------
 * Reference and Memory
 * --------------------------------------------------
 *
 * - References do not occupy separate memory
 *   (they share the same memory as the original variable).
 *
 * --------------------------------------------------
 * Common Mistakes
 * --------------------------------------------------
 *
 * 1. Not initializing reference at declaration
 *
 * 2. Trying to reassign reference
 *
 * 3. Returning reference to local variable
 *
 * 4. Confusing reference with pointer
 *
 * --------------------------------------------------
 * Advantages of References
 * --------------------------------------------------
 *
 * 1. Cleaner syntax than pointers
 * 2. Faster (no copying)
 * 3. Safer than pointers
 * 4. Useful in function parameters
 *
 * --------------------------------------------------
 * Disadvantages
 * --------------------------------------------------
 *
 * 1. Cannot be null
 * 2. Cannot be changed after initialization
 * 3. Less flexible than pointers
 *
 * --------------------------------------------------
 * Summary
 * --------------------------------------------------
 *
 * Reference:
 *      -> Alias for another variable
 *
 * & (in declaration):
 *      -> Creates a reference
 *
 * Key Idea:
 *      -> Same memory, different name
 *
 * References are widely used in C++ for
 * efficient and safe programming.
*/

#include<iostream>

void multiplyBy10(int& num) {
    num *= 10;
}

int main() {

    int apples = 435;


    std::cout<<"Before:: apples = "<<apples<<std::endl;

    // multiply apples
    multiplyBy10(apples);

    std::cout<<"After:: apples = "<<apples<<std::endl;

    return 0;
    
}