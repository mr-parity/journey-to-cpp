/**
 * ============================================================
 * TERNARY OPERATOR (?:) IN C++
 * ============================================================
 *
 * Ternary Operator:
 * ------------------------------------------------------------
 * The ternary operator is a conditional operator
 * used as a compact alternative to an if-else statement.
 *
 * It evaluates a condition and returns one of
 * two expressions depending on whether the
 * condition is true or false.
 *
 * It is called a "ternary" operator because
 * it operates on three operands:
 *
 *      1. Condition
 *      2. Expression if true
 *      3. Expression if false
 *
 * ============================================================
 * SYNTAX
 * ============================================================
 *
 *      condition
 *          ? expression_if_true
 *          : expression_if_false;
 *
 * General Form:
 *
 *      result =
 *          (condition)
 *              ? value_if_true
 *              : value_if_false;
 *
 * ============================================================
 * HOW IT WORKS
 * ============================================================
 *
 * Step 1:
 *
 *      Evaluate the condition.
 *
 * Step 2:
 *
 *      If condition is true:
 *
 *          expression_if_true
 *
 *      is selected.
 *
 * Step 3:
 *
 *      If condition is false:
 *
 *          expression_if_false
 *
 *      is selected.
 *
 * Step 4:
 *
 *      The selected expression becomes
 *      the result of the entire ternary
 *      expression.
 *
 * ============================================================
 * BASIC EXAMPLE
 * ============================================================
 *
 *      int a = 10;
 *      int b = 20;
 *
 *      int maxValue =
 *          (a > b) ? a : b;
 *
 * Evaluation:
 *
 *      Condition:
 *
 *          a > b
 *
 *          10 > 20
 *
 *          false
 *
 * Since condition is false:
 *
 *      b is selected.
 *
 * Result:
 *
 *      maxValue = 20;
 *
 * ============================================================
 * EQUIVALENT IF-ELSE
 * ============================================================
 *
 * Ternary Version:
 *
 *      int maxValue =
 *          (a > b) ? a : b;
 *
 * Equivalent if-else:
 *
 *      int maxValue;
 *
 *      if(a > b)
 *      {
 *          maxValue = a;
 *      }
 *      else
 *      {
 *          maxValue = b;
 *      }
 *
 * ============================================================
 * RETURNING STRINGS
 * ============================================================
 *
 * Example:
 *
 *      int age = 18;
 *
 *      string status =
 *          (age >= 18)
 *              ? "Adult"
 *              : "Minor";
 *
 * Output:
 *
 *      Adult
 *
 * ============================================================
 * USING WITH BOOLEAN VALUES
 * ============================================================
 *
 * Example:
 *
 *      bool isLoggedIn = true;
 *
 *      cout <<
 *          (isLoggedIn
 *              ? "Welcome"
 *              : "Login Required");
 *
 * Output:
 *
 *      Welcome
 *
 * ============================================================
 * USING INSIDE OUTPUT STATEMENTS
 * ============================================================
 *
 * Example:
 *
 *      int marks = 75;
 *
 *      cout
 *          << ((marks >= 40)
 *              ? "Pass"
 *              : "Fail");
 *
 * Output:
 *
 *      Pass
 *
 * ============================================================
 * NESTED TERNARY OPERATORS
 * ============================================================
 *
 * A ternary operator can contain
 * another ternary operator.
 *
 * Example:
 *
 *      int marks = 85;
 *
 *      string grade =
 *          (marks >= 90)
 *              ? "A"
 *              : (marks >= 75)
 *                    ? "B"
 *                    : (marks >= 60)
 *                          ? "C"
 *                          : "D";
 *
 * Evaluation:
 *
 *      marks = 85
 *
 *      85 >= 90 → false
 *
 *      85 >= 75 → true
 *
 * Result:
 *
 *      grade = "B"
 *
 * ============================================================
 * EQUIVALENT NESTED IF-ELSE
 * ============================================================
 *
 *      if(marks >= 90)
 *      {
 *          grade = "A";
 *      }
 *      else if(marks >= 75)
 *      {
 *          grade = "B";
 *      }
 *      else if(marks >= 60)
 *      {
 *          grade = "C";
 *      }
 *      else
 *      {
 *          grade = "D";
 *      }
 *
 * ============================================================
 * TERNARY OPERATOR RETURNS A VALUE
 * ============================================================
 *
 * One important concept:
 *
 *      The ternary operator is an expression.
 *
 * Since it returns a value,
 * it can be used wherever a value
 * is expected.
 *
 * Example:
 *
 *      int result =
 *          (x > y) ? x : y;
 *
 * Here:
 *
 *      (x > y) ? x : y
 *
 * produces a value.
 *
 * That value is assigned to result.
 *
 * ============================================================
 * ADVANTAGES
 * ============================================================
 *
 * 1. Shorter than if-else.
 *
 * 2. Improves readability for
 *    simple conditions.
 *
 * 3. Useful for assignments.
 *
 * 4. Can be used directly inside
 *    expressions.
 *
 * Example:
 *
 *      cout
 *          << ((n % 2 == 0)
 *              ? "Even"
 *              : "Odd");
 *
 * ============================================================
 * DISADVANTAGES
 * ============================================================
 *
 * 1. Can become difficult to read
 *    when nested heavily.
 *
 * 2. Not suitable for complex logic.
 *
 * 3. Excessive nesting reduces
 *    maintainability.
 *
 * Bad Example:
 *
 *      result =
 *      condition1
 *          ? value1
 *          : condition2
 *                ? value2
 *                : condition3
 *                      ? value3
 *                      : value4;
 *
 * Hard to understand quickly.
 *
 * ============================================================
 * BEST PRACTICES
 * ============================================================
 *
 * Use ternary operator:
 *
 *      ✓ Simple decisions
 *
 *      ✓ Simple assignments
 *
 *      ✓ Output formatting
 *
 * Avoid ternary operator:
 *
 *      ✗ Complex business logic
 *
 *      ✗ Multiple nested conditions
 *
 *      ✗ Long expressions
 *
 * In such cases:
 *
 *      Prefer if-else statements.
 *
 * ============================================================
 * OPERATOR PRECEDENCE
 * ============================================================
 *
 * The ternary operator has relatively
 * low precedence.
 *
 * Therefore parentheses are often used
 * to improve readability.
 *
 * Example:
 *
 *      int result =
 *          (a > b)
 *              ? a
 *              : b;
 *
 * ============================================================
 * SUMMARY
 * ============================================================
 *
 * Syntax:
 *
 *      condition
 *          ? true_expression
 *          : false_expression;
 *
 * Purpose:
 *
 *      Compact replacement for
 *      simple if-else statements.
 *
 * Characteristics:
 *
 *      • Uses three operands
 *      • Returns a value
 *      • Can be nested
 *      • Useful for assignments
 *      • Improves code conciseness
 *
 * Modern C++ Rule:
 *
 *      Use the ternary operator for
 *      simple conditional expressions.
 *
 *      Use if-else statements when
 *      logic becomes complex.
 *
 * ============================================================
*/

#include<iostream>

int main()
{

    static int current_level = 10;
    static int player_speed = 0;
    
    player_speed = current_level>8 ?  25 : 12;

    std::cout<<player_speed<<std::endl;
    
    return 0;
}