/**
 * ============================
 * ENUMS IN C++
 * ============================
 *
 * Enum (Enumeration):
 * - An enum is a user-defined data type in C++ used
 *   to assign names to a set of integral constants.
 *
 * - It makes code more readable by replacing
 *   numeric values with meaningful names.
 *
 * - Enums are commonly used when a variable can
 *   have only a fixed set of possible values.
 *
 * --------------------------------------------------
 * Why Use Enums?
 * --------------------------------------------------
 *
 * 1. Improves code readability
 * 2. Avoids magic numbers
 * 3. Groups related constants together
 * 4. Makes code easier to maintain
 * 5. Reduces chances of errors
 *
 * --------------------------------------------------
 * Basic Enum Syntax
 * --------------------------------------------------
 *
 * enum EnumName {
 *      CONSTANT1,
 *      CONSTANT2,
 *      CONSTANT3
 * };
 *
 * Example:
 *
 * enum Day {
 *      MONDAY,
 *      TUESDAY,
 *      WEDNESDAY,
 *      THURSDAY,
 *      FRIDAY,
 *      SATURDAY,
 *      SUNDAY
 * };
 *
 * --------------------------------------------------
 * Default Values
 * --------------------------------------------------
 *
 * - Enum constants are assigned integer values
 *   automatically.
 *
 * - By default:
 *
 *      First value  = 0
 *      Next value   = Previous + 1
 *
 * Example:
 *
 * enum Day {
 *      MONDAY,      // 0
 *      TUESDAY,     // 1
 *      WEDNESDAY,   // 2
 *      THURSDAY,    // 3
 *      FRIDAY,      // 4
 *      SATURDAY,    // 5
 *      SUNDAY       // 6
 * };
 *
 * --------------------------------------------------
 * Assigning Custom Values
 * --------------------------------------------------
 *
 * Example:
 *
 * enum Status {
 *      SUCCESS = 200,
 *      NOT_FOUND = 404,
 *      SERVER_ERROR = 500
 * };
 *
 * Here:
 *
 * SUCCESS      -> 200
 * NOT_FOUND    -> 404
 * SERVER_ERROR -> 500
 *
 * --------------------------------------------------
 * Creating Enum Variables
 * --------------------------------------------------
 *
 * Syntax:
 *
 * EnumName variableName;
 *
 * Example:
 *
 * Day today;
 *
 * today = MONDAY;
 *
 * --------------------------------------------------
 * Using Enum Values
 * --------------------------------------------------
 *
 * Example:
 *
 * enum Color {
 *      RED,
 *      GREEN,
 *      BLUE
 * };
 *
 * Color c = GREEN;
 *
 * if (c == GREEN)
 *      cout << "Green Selected";
 *
 * --------------------------------------------------
 * Enum and Integer Conversion
 * --------------------------------------------------
 *
 * - Enum values are internally stored as integers.
 *
 * Example:
 *
 * enum Number {
 *      ONE = 1,
 *      TWO = 2
 * };
 *
 * cout << ONE;   // Output: 1
 *
 * --------------------------------------------------
 * Enum in Switch Statement
 * --------------------------------------------------
 *
 * Example:
 *
 * enum Day {
 *      MONDAY,
 *      TUESDAY,
 *      WEDNESDAY
 * };
 *
 * Day d = TUESDAY;
 *
 * switch(d)
 * {
 *      case MONDAY:
 *          cout << "Monday";
 *          break;
 *
 *      case TUESDAY:
 *          cout << "Tuesday";
 *          break;
 *
 *      case WEDNESDAY:
 *          cout << "Wednesday";
 *          break;
 * }
 *
 * --------------------------------------------------
 * Scoped Enum (enum class)
 * --------------------------------------------------
 *
 * - Introduced in C++11.
 * - Provides better type safety.
 * - Prevents naming conflicts.
 *
 * Syntax:
 *
 * enum class Color {
 *      RED,
 *      GREEN,
 *      BLUE
 * };
 *
 * Example:
 *
 * Color c = Color::RED;
 *
 * --------------------------------------------------
 * Advantages of enum class
 * --------------------------------------------------
 *
 * 1. Strong type safety
 * 2. No accidental conversion to int
 * 3. Prevents name collisions
 * 4. Better code organization
 *
 * Example:
 *
 * enum class Traffic {
 *      RED,
 *      GREEN
 * };
 *
 * enum class Fruit {
 *      RED,
 *      GREEN
 * };
 *
 * Both can coexist without conflict.
 *
 * --------------------------------------------------
 * Common Uses of Enums
 * --------------------------------------------------
 *
 * 1. Days of week
 * 2. Months of year
 * 3. Menu choices
 * 4. Traffic light states
 * 5. Game states
 * 6. Error codes
 * 7. User roles
 *
 * --------------------------------------------------
 * Common Mistakes
 * --------------------------------------------------
 *
 * 1. Forgetting semicolon after enum definition
 *
 *      enum Day {
 *          MONDAY,
 *          TUESDAY
 *      };   // Required
 *
 * 2. Using invalid enum values
 *
 * 3. Confusing enum with enum class
 *
 * 4. Forgetting scope resolution (::)
 *    with enum class
 *
 * --------------------------------------------------
 * Difference: enum vs enum class
 * --------------------------------------------------
 *
 * enum:
 *      -> Less type safe
 *      -> Implicit conversion to int allowed
 *      -> Names enter global scope
 *
 * enum class:
 *      -> Strongly typed
 *      -> No implicit int conversion
 *      -> Names stay inside enum scope
 *
 * --------------------------------------------------
 * Advantages of Enums
 * --------------------------------------------------
 *
 * 1. Readable code
 * 2. Better maintainability
 * 3. Meaningful constant names
 * 4. Safer than raw integers
 * 5. Useful for fixed sets of values
 *
 * --------------------------------------------------
 * Summary
 * --------------------------------------------------
 *
 * Enum:
 *      -> User-defined type containing
 *         named integer constants.
 *
 * enum class:
 *      -> Modern and safer version of enum.
 *
 * Key Idea:
 *      -> Replace numbers with meaningful names
 *      -> Improves readability and maintainability
 *      -> Widely used in real-world applications
 */

#include <iostream>

enum StorageLevel : unsigned short
{
    Full = 100,
    Third = 75,
    Half = 50,
    Quarter = 25,
    Empty = 0
};

int main()
{

    StorageLevel current_level = Half;

    if (current_level == Full)
    {
        std::cout << "No precaution needed" << std::endl;
    }
    else if (current_level == Half)
    {
        std::cout << "Try to fill the container moderate risk" << std::endl;
    }
    else
    {
        std::cout << "Severe risk fill the container immediately" << std::endl;
    }
}