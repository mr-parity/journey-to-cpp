/**
 * ============================
 * CONDITIONAL STATEMENTS IN C++
 * ============================
 *
 * Conditional Statements:
 * - Conditional statements allow a program to make decisions.
 * - They control the flow of execution based on whether a condition
 *   evaluates to true or false.
 * - Different blocks of code can execute depending on the result
 *   of the condition.
 *
 * Benefits:
 *      1. Decision Making
 *      2. Dynamic Program Behavior
 *      3. Better Control Flow
 *      4. Reduced Code Duplication
 *
 * --------------------------------------------------
 * What is a Condition?
 * --------------------------------------------------
 *
 * A condition is an expression that evaluates to:
 *
 *      true  (non-zero)
 *      false (zero)
 *
 * Common Comparison Operators:
 *
 *      ==      Equal To
 *      !=      Not Equal To
 *      >       Greater Than
 *      <       Less Than
 *      >=      Greater Than or Equal To
 *      <=      Less Than or Equal To
 *
 * Example:
 *
 *      age >= 18
 *
 * If age is 18 or greater:
 *      condition becomes true.
 *
 * Otherwise:
 *      condition becomes false.
 *
 * --------------------------------------------------
 * 1. if Statement
 * --------------------------------------------------
 *
 * The if statement executes a block of code only when
 * the specified condition is true.
 *
 * Syntax:
 *
 * if(condition)
 * {
 *      // code to execute
 * }
 *
 * Example:
 *
 * if(age >= 18)
 * {
 *      std::cout << "Adult";
 * }
 *
 * How It Works:
 *
 * 1. Condition is evaluated.
 * 2. If condition is true:
 *          execute code block.
 * 3. If condition is false:
 *          skip code block.
 *
 * --------------------------------------------------
 * 2. if - else Statement
 * --------------------------------------------------
 *
 * Used when two possible execution paths exist.
 *
 * Syntax:
 *
 * if(condition)
 * {
 *      // executes if condition is true
 * }
 * else
 * {
 *      // executes if condition is false
 * }
 *
 * Example:
 *
 * if(age >= 18)
 * {
 *      std::cout << "Adult";
 * }
 * else
 * {
 *      std::cout << "Minor";
 * }
 *
 * How It Works:
 *
 * 1. Condition is evaluated.
 * 2. If true:
 *          if block executes.
 * 3. If false:
 *          else block executes.
 * 4. Only ONE block executes.
 *
 * --------------------------------------------------
 * 3. if - else if - else Ladder
 * --------------------------------------------------
 *
 * Used when multiple conditions need to be checked.
 *
 * Syntax:
 *
 * if(condition1)
 * {
 *      // code
 * }
 * else if(condition2)
 * {
 *      // code
 * }
 * else if(condition3)
 * {
 *      // code
 * }
 * else
 * {
 *      // default code
 * }
 *
 * Example:
 *
 * if(marks >= 90)
 * {
 *      std::cout << "Grade A";
 * }
 * else if(marks >= 80)
 * {
 *      std::cout << "Grade B";
 * }
 * else if(marks >= 70)
 * {
 *      std::cout << "Grade C";
 * }
 * else
 * {
 *      std::cout << "Grade D";
 * }
 *
 * How It Works:
 *
 * 1. Conditions are checked from top to bottom.
 * 2. First true condition executes its block.
 * 3. Remaining conditions are skipped.
 * 4. If no condition is true:
 *          else block executes.
 *
 * --------------------------------------------------
 * Nested if Statements
 * --------------------------------------------------
 *
 * An if statement can be placed inside another
 * if statement.
 *
 * Example:
 *
 * if(age >= 18)
 * {
 *      if(hasLicense)
 *      {
 *          std::cout << "Can Drive";
 *      }
 * }
 *
 * Use nested if statements carefully because excessive
 * nesting reduces readability.
 *
 * --------------------------------------------------
 * Logical Operators
 * --------------------------------------------------
 *
 * Multiple conditions can be combined using:
 *
 *      &&      Logical AND
 *      ||      Logical OR
 *      !       Logical NOT
 *
 * Example:
 *
 * if(age >= 18 && hasLicense)
 * {
 *      std::cout << "Eligible To Drive";
 * }
 *
 * --------------------------------------------------
 * UNDER THE HOOD
 * --------------------------------------------------
 *
 * High-level languages provide keywords like:
 *
 *      if
 *      else
 *      else if
 *
 * However, CPUs do not directly understand these
 * keywords.
 *
 * The compiler converts conditional statements into:
 *
 *      1. Comparison Instructions
 *      2. Branch/Jump Instructions
 *
 * Example:
 *
 * if(x > 10)
 * {
 *      std::cout << "Greater";
 * }
 *
 * Rough Machine-Level Logic:
 *
 *      Compare x with 10
 *
 *      If comparison fails:
 *              jump over block
 *
 *      Otherwise:
 *              execute block
 *
 * Pseudo Assembly:
 *
 *      CMP x, 10
 *      JLE SkipBlock
 *
 *      // if block code
 *
 * SkipBlock:
 *
 * --------------------------------------------------
 *
 * if-else Example:
 *
 * if(x > 10)
 * {
 *      // if block
 * }
 * else
 * {
 *      // else block
 * }
 *
 * Pseudo Assembly:
 *
 *      CMP x, 10
 *      JLE ElseBlock
 *
 *      // if block
 *      JMP End
 *
 * ElseBlock:
 *      // else block
 *
 * End:
 *
 * --------------------------------------------------
 *
 * Branch Prediction
 * --------------------------------------------------
 *
 * Modern CPUs try to predict which branch
 * (if or else path) will execute before the
 * condition is fully evaluated.
 *
 * This optimization is called:
 *
 *      Branch Prediction
 *
 * Correct predictions improve performance.
 * Incorrect predictions may require the CPU
 * to discard partially executed instructions
 * and restart from the correct branch.
 *
 * --------------------------------------------------
 * Important Notes
 * --------------------------------------------------
 *
 * 1. In C++, 0 is treated as false.
 *
 * 2. Any non-zero value is treated as true.
 *
 * Example:
 *
 * if(5)
 * {
 *      // Executes because 5 is true
 * }
 *
 * 3. Always use braces { } even for single
 *    statements to improve readability.
 *
 * 4. Order conditions carefully in an
 *    else-if ladder.
 *
 * 5. More specific conditions should usually
 *    appear before broader conditions.
 *
 * --------------------------------------------------
 * Summary
 * --------------------------------------------------
 *
 * if:
 *      Executes code when condition is true.
 *
 * if-else:
 *      Chooses between two execution paths.
 *
 * if-else-if:
 *      Chooses among multiple execution paths.
 *
 * Under the hood:
 *      Compiler converts conditions into
 *      comparisons and CPU jump instructions
 *      that control program execution flow.
*/

#include<iostream>

int main() {

    int age = 10;

    if(age>18) {
        std::cout<<"You can vote!"<<std::endl;
    } else {
        std::cout<<"You cannot vote!"<<std::endl;
    }

    return 0;
}