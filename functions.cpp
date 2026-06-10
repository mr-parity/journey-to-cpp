/**
 * ============================
 * FUNCTIONS IN C++
 * ============================
 *
 * Functions:
 * - A function is a reusable block of code that performs a specific task.
 * - Instead of writing the same code multiple times, it can be placed inside
 *   a function and called whenever needed.
 * - Functions help make code:
 *      1. Reusable
 *      2. Readable
 *      3. Easier to maintain
 *      4. Easier to debug
 *
 * --------------------------------------------------
 * Function Syntax
 * --------------------------------------------------
 *
 * return_type function_name(parameters) {
 *      // function body
 * }
 *
 * Example:
 *
 * int add(int a, int b) {
 *      return a + b;
 * }
 *
 * --------------------------------------------------
 * Function Components
 * --------------------------------------------------
 *
 * 1. Return Type
 * - Specifies what value the function returns.
 * - If nothing is returned, use void.
 *
 * Examples:
 *      int
 *      float
 *      double
 *      char
 *      bool
 *      void
 *
 * --------------------------------------------------
 * 2. Function Name
 * --------------------------------------------------
 * - Identifier used to call the function.
 * - Should describe the purpose of the function.
 *
 * Examples:
 *      calculateSum()
 *      printData()
 *      getAge()
 *
 * --------------------------------------------------
 * 3. Parameters (Arguments)
 * --------------------------------------------------
 * - Variables accepted by a function as input.
 * - Parameters are optional.
 *
 * Example:
 *
 * int add(int num1, int num2)
 *
 * Here:
 *      num1 and num2 are parameters.
 *
 * --------------------------------------------------
 * 4. Function Body
 * --------------------------------------------------
 * - Contains the code executed when the function is called.
 *
 * Example:
 *
 * {
 *      int result = num1 + num2;
 *      return result;
 * }
 *
 * --------------------------------------------------
 * 5. Return Statement
 * --------------------------------------------------
 * - Ends the function execution.
 * - Sends a value back to the caller.
 *
 * Example:
 *
 * return result;
 *
 * --------------------------------------------------
 * Function Declaration (Prototype)
 * --------------------------------------------------
 * - Tells the compiler that a function exists.
 * - Usually written before main().
 *
 * Example:
 *
 * int add(int, int);
 *
 * --------------------------------------------------
 * Function Definition
 * --------------------------------------------------
 * - Actual implementation of the function.
 *
 * Example:
 *
 * int add(int a, int b) {
 *      return a + b;
 * }
 *
 * --------------------------------------------------
 * Function Call
 * --------------------------------------------------
 * - Executes a function.
 *
 * Example:
 *
 * int answer = add(5, 3);
 *
 * Here:
 *      5 and 3 are arguments.
 *
 * --------------------------------------------------
 * Types of Functions
 * --------------------------------------------------
 *
 * 1. No Parameters, No Return Value
 *
 * void greet() {
 *      std::cout << "Hello";
 * }
 *
 * --------------------------------------------------
 *
 * 2. Parameters, No Return Value
 *
 * void greet(std::string name) {
 *      std::cout << "Hello " << name;
 * }
 *
 * --------------------------------------------------
 *
 * 3. No Parameters, Returns Value
 *
 * int getNumber() {
 *      return 10;
 * }
 *
 * --------------------------------------------------
 *
 * 4. Parameters, Returns Value
 *
 * int add(int a, int b) {
 *      return a + b;
 * }
 *
 * --------------------------------------------------
 * Scope of Variables
 * --------------------------------------------------
 *
 * Local Variables:
 * - Declared inside a function.
 * - Accessible only within that function.
 * - Destroyed when the function finishes.
 *
 * Example:
 *
 * void demo() {
 *      int age = 20;
 * }
 *
 * --------------------------------------------------
 *
 * Global Variables:
 * - Declared outside all functions.
 * - Accessible from any function in the file.
 * - Exist throughout program execution.
 *
 * Example:
 *
 * int globalCount = 0;
 *
 * --------------------------------------------------
 * Pass By Value
 * --------------------------------------------------
 *
 * - A copy of the variable is sent to the function.
 * - Changes inside the function do not affect the original variable.
 *
 * Example:
 *
 * void update(int x) {
 *      x = 100;
 * }
 *
 * --------------------------------------------------
 * Pass By Reference (C++)
 * --------------------------------------------------
 *
 * - Function receives a reference to the original variable.
 * - Changes affect the original variable.
 *
 * Example:
 *
 * void update(int& x) {
 *      x = 100;
 * }
 *
 * --------------------------------------------------
 * Recursive Functions
 * --------------------------------------------------
 *
 * - A function calling itself.
 * - Must have a stopping condition (base case).
 *
 * Example:
 *
 * int factorial(int n) {
 *      if(n == 0)
 *          return 1;
 *
 *      return n * factorial(n - 1);
 * }
 *
 * --------------------------------------------------
 * main() Function
 * --------------------------------------------------
 *
 * - Entry point of every C/C++ program.
 * - Program execution starts from main().
 * - Usually returns an integer status code.
 *
 * Example:
 *
 * int main() {
 *      return 0;
 * }
 *
 * return 0:
 * - Indicates successful program execution.
 *
 * --------------------------------------------------
 * Important Notes
 * --------------------------------------------------
 *
 * 1. Functions should ideally perform one specific task.
 *
 * 2. Use meaningful function names.
 *
 * 3. Avoid making functions excessively large.
 *
 * 4. Reuse functions whenever possible instead of
 *    duplicating code.
 *
 * 5. Parameters and local variables are created when
 *    a function starts and destroyed when it ends.
 *
 * 6. A function can return only one value directly,
 *    but multiple values can be returned using
 *    references, pointers, structures, or classes.
*/

#include<iostream>

int multiply(int num1, int num2) {
    return num1 * num2;
}

void multiplyAndLog(int num1, int num2) {
    std::cout<<num1<<" * "<<num2<<" = "<<multiply(num1,num2)<<std::endl;
}

int main() {

    // function call
    multiplyAndLog(15,65);

    return 0;
}