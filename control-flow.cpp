/**
 * ============================
 * CONTROL FLOW STATEMENTS
 * (return, break, continue)
 * ============================
 *
 * Control Flow Statements:
 * - Control flow statements alter the normal execution
 *   of a program.
 * - They allow a program to:
 *      1. Exit a function
 *      2. Terminate a loop
 *      3. Skip specific iterations
 *      4. Change execution flow
 *
 * Common Control Flow Statements:
 *      1. return
 *      2. break
 *      3. continue
 *
 * --------------------------------------------------
 * 1. return Statement
 * --------------------------------------------------
 *
 * Definition:
 * - The return statement immediately terminates
 *   a function and optionally sends a value back
 *   to the caller.
 *
 * Syntax:
 *
 * return value;
 *
 * or
 *
 * return;
 *
 * --------------------------------------------------
 * Purpose of return
 * --------------------------------------------------
 *
 * 1. Ends function execution.
 * 2. Sends a value back to the calling code.
 * 3. Prevents remaining function code from executing.
 *
 * --------------------------------------------------
 * return in Value-Returning Functions
 * --------------------------------------------------
 *
 * Example:
 *
 * int add(int a, int b)
 * {
 *      return a + b;
 * }
 *
 * int result = add(5, 3);
 *
 * Output:
 * 8
 *
 * Here:
 * - a + b is returned to the caller.
 * - Function execution stops immediately after return.
 *
 * --------------------------------------------------
 * return in void Functions
 * --------------------------------------------------
 *
 * Example:
 *
 * void greet()
 * {
 *      std::cout << "Hello";
 *      return;
 * }
 *
 * - No value is returned.
 * - Function simply terminates.
 *
 * --------------------------------------------------
 * Early Return
 * --------------------------------------------------
 *
 * - Used to exit a function before reaching
 *   the end of the function body.
 *
 * Example:
 *
 * int divide(int a, int b)
 * {
 *      if(b == 0)
 *      {
 *           return -1;
 *      }
 *
 *      return a / b;
 * }
 *
 * Benefits:
 *      1. Cleaner code
 *      2. Better readability
 *      3. Reduced nesting
 *
 * --------------------------------------------------
 * Important Notes About return
 * --------------------------------------------------
 *
 * 1. Execution stops immediately.
 *
 * 2. Any code after return inside the same block
 *    becomes unreachable.
 *
 * Example:
 *
 * return 5;
 * std::cout << "Hello"; // unreachable
 *
 * 3. Non-void functions should return a value.
 *
 * --------------------------------------------------
 * 2. break Statement
 * --------------------------------------------------
 *
 * Definition:
 * - break immediately terminates the nearest
 *   enclosing loop or switch statement.
 *
 * Syntax:
 *
 * break;
 *
 * --------------------------------------------------
 * Purpose of break
 * --------------------------------------------------
 *
 * 1. Exit a loop early.
 * 2. Exit a switch case.
 * 3. Prevent unnecessary iterations.
 *
 * --------------------------------------------------
 * break in Loops
 * --------------------------------------------------
 *
 * Example:
 *
 * for(int i = 1; i <= 10; i++)
 * {
 *      if(i == 5)
 *      {
 *           break;
 *      }
 *
 *      std::cout << i << " ";
 * }
 *
 * Output:
 * 1 2 3 4
 *
 * Explanation:
 * - Loop stops when i becomes 5.
 * - Remaining iterations never execute.
 *
 * --------------------------------------------------
 * break in while Loop
 * --------------------------------------------------
 *
 * Example:
 *
 * int i = 1;
 *
 * while(true)
 * {
 *      if(i > 5)
 *      {
 *           break;
 *      }
 *
 *      std::cout << i << " ";
 *      i++;
 * }
 *
 * Output:
 * 1 2 3 4 5
 *
 * --------------------------------------------------
 * break in switch Statement
 * --------------------------------------------------
 *
 * Example:
 *
 * switch(choice)
 * {
 *      case 1:
 *           std::cout << "One";
 *           break;
 *
 *      case 2:
 *           std::cout << "Two";
 *           break;
 * }
 *
 * Purpose:
 * - Prevents fall-through to the next case.
 *
 * --------------------------------------------------
 * Important Notes About break
 * --------------------------------------------------
 *
 * 1. Terminates only the nearest loop.
 *
 * 2. Does not terminate outer loops.
 *
 * 3. Commonly used in searching algorithms.
 *
 * --------------------------------------------------
 * Nested Loop Example
 * --------------------------------------------------
 *
 * for(int i = 1; i <= 3; i++)
 * {
 *      for(int j = 1; j <= 3; j++)
 *      {
 *           if(j == 2)
 *           {
 *                break;
 *           }
 *
 *           std::cout << j;
 *      }
 * }
 *
 * - Only the inner loop terminates.
 *
 * --------------------------------------------------
 * 3. continue Statement
 * --------------------------------------------------
 *
 * Definition:
 * - continue skips the remaining code in the
 *   current iteration and moves directly to
 *   the next iteration.
 *
 * Syntax:
 *
 * continue;
 *
 * --------------------------------------------------
 * Purpose of continue
 * --------------------------------------------------
 *
 * 1. Skip specific values.
 * 2. Ignore unwanted iterations.
 * 3. Simplify conditional logic.
 *
 * --------------------------------------------------
 * continue in for Loop
 * --------------------------------------------------
 *
 * Example:
 *
 * for(int i = 1; i <= 5; i++)
 * {
 *      if(i == 3)
 *      {
 *           continue;
 *      }
 *
 *      std::cout << i << " ";
 * }
 *
 * Output:
 * 1 2 4 5
 *
 * Explanation:
 * - When i becomes 3,
 *   remaining code is skipped.
 * - Loop proceeds to next iteration.
 *
 * --------------------------------------------------
 * continue in while Loop
 * --------------------------------------------------
 *
 * Example:
 *
 * int i = 0;
 *
 * while(i < 5)
 * {
 *      i++;
 *
 *      if(i == 3)
 *      {
 *           continue;
 *      }
 *
 *      std::cout << i << " ";
 * }
 *
 * Output:
 * 1 2 4 5
 *
 * --------------------------------------------------
 * Important Notes About continue
 * --------------------------------------------------
 *
 * 1. Does NOT terminate the loop.
 *
 * 2. Skips only the current iteration.
 *
 * 3. Loop execution continues normally.
 *
 * 4. Be careful to update loop variables before
 *    continue in while loops to avoid infinite loops.
 *
 * --------------------------------------------------
 * Difference Between break and continue
 * --------------------------------------------------
 *
 * break:
 *      - Exits loop completely.
 *      - Remaining iterations never execute.
 *
 * continue:
 *      - Skips current iteration only.
 *      - Remaining iterations still execute.
 *
 * Example:
 *
 * break:
 *
 * 1 2 3 4
 *
 * continue:
 *
 * 1 2 4 5
 *
 * --------------------------------------------------
 * Comparison Table
 * --------------------------------------------------
 *
 * return
 *      -> Exits a function
 *      -> May return a value
 *
 * break
 *      -> Exits a loop or switch
 *      -> Does not exit function
 *
 * continue
 *      -> Skips current iteration
 *      -> Continues loop execution
 *
 * --------------------------------------------------
 * Common Mistakes
 * --------------------------------------------------
 *
 * 1. Forgetting to return a value from
 *    a non-void function.
 *
 * 2. Using break when continue is needed.
 *
 * 3. Using continue before updating loop
 *    variables in while loops.
 *
 * 4. Assuming break exits all nested loops.
 *
 * 5. Writing code after return and expecting
 *    it to execute.
 *
 * --------------------------------------------------
 * Summary
 * --------------------------------------------------
 *
 * return
 *      -> Exit function immediately
 *      -> Optional value returned
 *
 * break
 *      -> Exit nearest loop or switch
 *
 * continue
 *      -> Skip current iteration
 *      -> Move to next iteration
 *
 * These statements are essential for controlling
 * program execution and writing efficient,
 * readable, and maintainable C++ code.
*/

#include<iostream>

bool isPrime(int number) {
    
    // search for any factor of number between 2 to number-1
    for(int iterator=2; iterator<number; iterator++) {
        if(number%iterator==0) {
            return false;
        }
    }

    return true;
}

int main() {

    bool result = isPrime(121);

    if(result) {
        std::cout<<"Number is prime"<<std::endl;
    } else {
        std::cout<<"Number is non prime"<<std::endl;
    }

    return 0;
}