/**
 * ============================
 * LOOPS IN C++
 * ============================
 *
 * Loops:
 * - Loops are control structures that allow a block of code
 *   to execute repeatedly as long as a specified condition
 *   remains true.
 *
 * - They help eliminate repetitive code and make programs
 *   more efficient and easier to maintain.
 *
 * Benefits of Loops:
 *      1. Reduce code duplication
 *      2. Improve readability
 *      3. Save development time
 *      4. Automate repetitive tasks
 *
 * --------------------------------------------------
 * Why Use Loops?
 * --------------------------------------------------
 *
 * Without loops:
 *
 * std::cout << 1 << std::endl;
 * std::cout << 2 << std::endl;
 * std::cout << 3 << std::endl;
 * std::cout << 4 << std::endl;
 * std::cout << 5 << std::endl;
 *
 * With loops:
 *
 * for(int i = 1; i <= 5; i++)
 * {
 *      std::cout << i << std::endl;
 * }
 *
 * --------------------------------------------------
 * Types of Loops in C++
 * --------------------------------------------------
 *
 * 1. for Loop
 * 2. while Loop
 * 3. do-while Loop
 * 4. Range-Based for Loop (C++11)
 *
 * --------------------------------------------------
 * 1. for Loop
 * --------------------------------------------------
 *
 * - Used when the number of iterations is known.
 * - Most commonly used loop in programming.
 *
 * Syntax:
 *
 * for(initialization; condition; update)
 * {
 *      // code
 * }
 *
 * Example:
 *
 * for(int i = 1; i <= 5; i++)
 * {
 *      std::cout << i << " ";
 * }
 *
 * Output:
 * 1 2 3 4 5
 *
 * --------------------------------------------------
 * Components of a for Loop
 * --------------------------------------------------
 *
 * 1. Initialization
 *    - Executes only once.
 *    - Used to initialize loop variables.
 *
 * Example:
 *      int i = 0;
 *
 * 2. Condition
 *    - Checked before every iteration.
 *    - Loop continues while condition is true.
 *
 * Example:
 *      i < 10
 *
 * 3. Update Expression
 *    - Executes after each iteration.
 *    - Usually increments or decrements variable.
 *
 * Examples:
 *      i++
 *      i--
 *      i += 2
 *
 * --------------------------------------------------
 * 2. while Loop
 * --------------------------------------------------
 *
 * - Used when the number of iterations is unknown.
 * - Condition is checked before execution.
 *
 * Syntax:
 *
 * while(condition)
 * {
 *      // code
 * }
 *
 * Example:
 *
 * int i = 1;
 *
 * while(i <= 5)
 * {
 *      std::cout << i << " ";
 *      i++;
 * }
 *
 * Output:
 * 1 2 3 4 5
 *
 * --------------------------------------------------
 * Characteristics of while Loop
 * --------------------------------------------------
 *
 * - Entry-controlled loop.
 * - Condition checked before execution.
 * - May execute zero times if condition is false.
 *
 * --------------------------------------------------
 * 3. do-while Loop
 * --------------------------------------------------
 *
 * - Similar to while loop.
 * - Condition checked after execution.
 *
 * Syntax:
 *
 * do
 * {
 *      // code
 * }
 * while(condition);
 *
 * Example:
 *
 * int i = 1;
 *
 * do
 * {
 *      std::cout << i << " ";
 *      i++;
 * }
 * while(i <= 5);
 *
 * Output:
 * 1 2 3 4 5
 *
 * --------------------------------------------------
 * Characteristics of do-while Loop
 * --------------------------------------------------
 *
 * - Exit-controlled loop.
 * - Executes at least one time.
 * - Condition checked after loop body executes.
 *
 * Example:
 *
 * int x = 10;
 *
 * do
 * {
 *      std::cout << "Executed";
 * }
 * while(x < 5);
 *
 * Output:
 * Executed
 *
 * --------------------------------------------------
 * 4. Range-Based for Loop (C++11)
 * --------------------------------------------------
 *
 * - Simplifies iteration over arrays and containers.
 * - Automatically accesses each element.
 *
 * Syntax:
 *
 * for(dataType variable : container)
 * {
 *      // code
 * }
 *
 * Example:
 *
 * int arr[] = {10, 20, 30, 40};
 *
 * for(int value : arr)
 * {
 *      std::cout << value << " ";
 * }
 *
 * Output:
 * 10 20 30 40
 *
 * --------------------------------------------------
 * Nested Loops
 * --------------------------------------------------
 *
 * - A loop inside another loop.
 * - Commonly used in:
 *      1. Pattern printing
 *      2. Matrix operations
 *      3. Multi-dimensional arrays
 *
 * Example:
 *
 * for(int i = 1; i <= 3; i++)
 * {
 *      for(int j = 1; j <= 3; j++)
 *      {
 *           std::cout << "* ";
 *      }
 *
 *      std::cout << std::endl;
 * }
 *
 * Output:
 * * * *
 * * * *
 * * * *
 *
 * --------------------------------------------------
 * break Statement
 * --------------------------------------------------
 *
 * - Immediately terminates the loop.
 * - Control moves outside the loop.
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
 * --------------------------------------------------
 * continue Statement
 * --------------------------------------------------
 *
 * - Skips current iteration.
 * - Moves directly to next iteration.
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
 * --------------------------------------------------
 * Infinite Loops
 * --------------------------------------------------
 *
 * - A loop that never terminates.
 * - Condition always remains true.
 *
 * Examples:
 *
 * while(true)
 * {
 *      // infinite loop
 * }
 *
 * for(;;)
 * {
 *      // infinite loop
 * }
 *
 * Common Uses:
 *      1. Game engines
 *      2. Servers
 *      3. Operating systems
 *      4. Event listeners
 *
 * --------------------------------------------------
 * Loop Control Variable
 * --------------------------------------------------
 *
 * - Variable that controls loop execution.
 *
 * Example:
 *
 * for(int i = 0; i < 10; i++)
 *
 * Here:
 *      i is the loop control variable.
 *
 * --------------------------------------------------
 * Time Complexity of Loops
 * --------------------------------------------------
 *
 * Single Loop:
 *
 * for(int i = 0; i < n; i++)
 *
 * Complexity:
 *      O(n)
 *
 * Nested Loop:
 *
 * for(int i = 0; i < n; i++)
 * {
 *      for(int j = 0; j < n; j++)
 *      {
 *      }
 * }
 *
 * Complexity:
 *      O(n²)
 *
 * Halving Loop:
 *
 * for(int i = n; i > 0; i /= 2)
 *
 * Complexity:
 *      O(log n)
 *
 * --------------------------------------------------
 * Common Mistakes
 * --------------------------------------------------
 *
 * 1. Forgetting update statement
 *      -> Causes infinite loops.
 *
 * 2. Wrong loop condition
 *      -> Incorrect number of iterations.
 *
 * 3. Off-by-one errors
 *      -> Very common in loops.
 *
 * Example:
 *      i <= n
 *      vs
 *      i < n
 *
 * 4. Modifying loop variable incorrectly.
 *
 * --------------------------------------------------
 * Important Notes
 * --------------------------------------------------
 *
 * 1. Use for loops when iteration count is known.
 *
 * 2. Use while loops when iteration count is unknown.
 *
 * 3. Use do-while when code must execute at least once.
 *
 * 4. Keep loop bodies simple and readable.
 *
 * 5. Avoid deeply nested loops when possible.
 *
 * 6. Always ensure loop conditions eventually become false.
 *
 * 7. Infinite loops should be intentional and controlled.
 *
 * --------------------------------------------------
 * Summary
 * --------------------------------------------------
 *
 * for Loop
 *      -> Known number of iterations
 *
 * while Loop
 *      -> Unknown number of iterations
 *
 * do-while Loop
 *      -> Executes at least once
 *
 * break
 *      -> Exits loop immediately
 *
 * continue
 *      -> Skips current iteration
 *
 * Nested Loops
 *      -> Loop inside another loop
 *
 * Range-Based for
 *      -> Easy container traversal
 */

#include<iostream>

/**
 * @brief function to print something n number of time
 * 
 * @param1 : const character pointerto a string
 * @param2 : int count, number of times to print the message
*/
void printMany(const char* message, int count) {
    
    for(int index=0 ; index<count; index++) {
        std::cout<<index+1<<". "<<message<<std::endl;
    }
}

int main() {

    printMany("C++ is great!",154);

    return 0;
}