/**
 * ============================
 * HEADER FILES IN C / C++
 * ============================
 *
 * Header Files:
 * - Header files contain declarations of functions,
 *   classes, variables, and constants.
 * - They allow code reuse and modular programming.
 * - Instead of writing everything in one file, we
 *   split code into multiple files using headers.
 *
 * --------------------------------------------------
 * Why Header Files are Used
 * --------------------------------------------------
 *
 * 1. Code Reusability
 *    - Same functions can be used in multiple programs.
 *
 * 2. Better Organization
 *    - Separates declarations from implementation.
 *
 * 3. Easier Maintenance
 *    - Changes in one place affect all files using it.
 *
 * 4. Faster Development
 *    - Pre-written libraries can be reused.
 *
 * --------------------------------------------------
 * Types of Header Files
 * --------------------------------------------------
 *
 * 1. Standard Library Header Files
 *    - Provided by C/C++ standard library.
 *
 * Examples:
 *      #include <iostream>   // input/output
 *      #include <cmath>      // math functions
 *      #include <string>     // string handling
 *      #include <vector>     // dynamic arrays
 *
 * --------------------------------------------------
 *
 * 2. User-Defined Header Files
 *    - Created by the programmer.
 *
 * Example:
 *
 *      #include "myheader.h"
 *
 * --------------------------------------------------
 * Angle Brackets vs Double Quotes
 * --------------------------------------------------
 *
 * #include <file>
 * - Used for standard library headers.
 * - Compiler searches system directories.
 *
 * #include "file"
 * - Used for user-defined headers.
 * - Compiler searches current directory first,
 *   then system directories.
 *
 * --------------------------------------------------
 * Example: Creating a Header File
 * --------------------------------------------------
 *
 * mymath.h
 *
 *      int add(int a, int b);
 *      int multiply(int a, int b);
 *
 * --------------------------------------------------
 * Implementation File (mymath.cpp)
 * --------------------------------------------------
 *
 *      int add(int a, int b) {
 *          return a + b;
 *      }
 *
 *      int multiply(int a, int b) {
 *          return a * b;
 *      }
 *
 * --------------------------------------------------
 * Using the Header File
 * --------------------------------------------------
 *
 * main.cpp
 *
 *      #include <iostream>
 *      #include "mymath.h"
 *
 *      int main() {
 *          std::cout << add(2, 3);
 *      }
 *
 * --------------------------------------------------
 * Header Guards (VERY IMPORTANT)
 * --------------------------------------------------
 *
 * Problem:
 * - If a header file is included multiple times,
 *   it can cause redefinition errors.
 *
 * Solution:
 * - Use header guards to prevent multiple inclusion.
 *
 * Example:
 *
 *      #ifndef MYMATH_H
 *      #define MYMATH_H
 *
 *      int add(int a, int b);
 *
 *      #endif
 *
 * --------------------------------------------------
 * Modern Alternative: #pragma once
 * --------------------------------------------------
 *
 * - Prevents multiple inclusion of a header file.
 * - Simpler than header guards.
 *
 * Example:
 *
 *      #pragma once
 *
 *      int add(int a, int b);
 *
 * --------------------------------------------------
 * Important Notes
 * --------------------------------------------------
 *
 * 1. Headers should contain only declarations,
 *    not heavy logic (in most cases).
 *
 * 2. Keep headers clean and minimal.
 *
 * 3. Avoid including unnecessary headers inside headers.
 *
 * 4. Prefer #pragma once in modern C++ (if supported).
 *
 * 5. Every .cpp file should include only what it needs.
 */

 #include "headers/logger.h"

 int main() {

    log("This is a logger from header file");
    
    return 0;
 }