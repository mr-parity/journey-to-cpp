/**
 * ============================
 * VARIABLES & DATA TYPES IN C
 * ============================
 *
 * Variables:
 * - Variables are named locations in memory used to store data.
 * - Every variable has:
 *      1. A data type (what kind of data it stores)
 *      2. A name (identifier)
 *      3. A value
 *
 * Example:
 *      int age = 20;
 *
 * --------------------------------------------------
 * 1. int (Integer)
 * --------------------------------------------------
 * - Used to store whole numbers (integers).
 * - Can store positive, negative, or zero values.
 * - Typically occupies 4 bytes on modern systems.
 * - Exact size depends on the compiler and platform.
 *
 * Example:
 *      int age = 20;
 *      int temperature = -5;
 *
 * Unsigned int:
 * - Stores only non-negative values.
 * - Provides a larger positive range than signed int.
 *
 * Example:
 *      unsigned int population = 1000000;
 *
 * --------------------------------------------------
 * 2. short (Short Integer)
 * --------------------------------------------------
 * - Used to store smaller integer values.
 * - Usually occupies 2 bytes.
 * - The C standard guarantees at least 16 bits.
 *
 * Example:
 *      short year = 2025;
 *      unsigned short count = 500;
 *
 * --------------------------------------------------
 * 3. char (Character)
 * --------------------------------------------------
 * - Used to store a single character.
 * - Occupies exactly 1 byte.
 * - Internally stores the character's ASCII value
 *   (or implementation-specific character encoding).
 * - Can also be used as a small integer type.
 *
 * Example:
 *      char grade = 'A';
 *      char letter = 'z';
 *
 * --------------------------------------------------
 * 4. float (Single Precision Floating Point)
 * --------------------------------------------------
 * - Used to store decimal numbers.
 * - Typically occupies 4 bytes.
 * - Provides approximately 6–7 decimal digits of precision.
 *
 * Example:
 *      float price = 99.99f;
 *
 * Note:
 * - Decimal literals are treated as double by default.
 * - Use 'f' or 'F' suffix to create a float literal.
 *
 * Example:
 *      float value = 4.35f;
 *
 * --------------------------------------------------
 * 5. double (Double Precision Floating Point)
 * --------------------------------------------------
 * - Used to store decimal numbers with higher precision.
 * - Typically occupies 8 bytes.
 * - Provides approximately 15–16 decimal digits of precision.
 *
 * Example:
 *      double pi = 3.141592653589793;
 *
 * --------------------------------------------------
 * 6. long (Long Integer)
 * --------------------------------------------------
 * - Used to store larger integer values.
 * - Size depends on the platform:
 *      * Commonly 4 bytes on Windows
 *      * Commonly 8 bytes on Linux/macOS (64-bit)
 * - Always at least as large as int.
 *
 * Example:
 *      long distance = 500000L;
 *
 * --------------------------------------------------
 * 7. long long (Long Long Integer)
 * --------------------------------------------------
 * - Used to store very large integer values.
 * - Guaranteed to be at least 64 bits.
 * - Typically occupies 8 bytes.
 *
 * Example:
 *      long long stars = 900000000000LL;
 *
 * --------------------------------------------------
 * Boolean Type (bool)
 * --------------------------------------------------
 * - Stores logical values:
 *      true  (1)
 *      false (0)
 * - Requires:
 *      #include <stdbool.h>
 * - Typically occupies 1 byte.
 *
 * Example:
 *      bool isLoggedIn = true;
 *
 * --------------------------------------------------
 * Unsigned Types
 * --------------------------------------------------
 * - The 'unsigned' keyword removes the ability to
 *   store negative values and increases the positive range.
 * - Can be used with:
 *      unsigned char
 *      unsigned short
 *      unsigned int
 *      unsigned long
 *      unsigned long long
 *
 * Examples:
 *      unsigned int score = 100;
 *      unsigned long population = 8000000000UL;
 *
 * --------------------------------------------------
 * sizeof Operator
 * --------------------------------------------------
 * - Used to determine the size of a type or variable
 *   in bytes at compile time.
 * - sizeof is an operator, NOT a function.
 *
 * Examples:
 *      sizeof(int)
 *      sizeof(age)
 *      sizeof(double)
 *
 * Example Program:
 *
 *      printf("%zu\n", sizeof(int));
 *
 * --------------------------------------------------
 * Important Notes
 * --------------------------------------------------
 * 1. Exact sizes of data types depend on the compiler
 *    and operating system.
 *
 * 2. For guaranteed-width integers use:
 *      #include <stdint.h>
 *
 *      int8_t
 *      int16_t
 *      int32_t
 *      int64_t
 *
 * 3. Floating-point types may contain small rounding
 *    errors because they are stored in binary format.
 *
 * 4. Use the most appropriate type for the data you
 *    are storing to save memory and improve clarity.
 */

#include<iostream>

int main() {

    // short data type
    short signed_short_data = -10;
    unsigned short unsigned_short_data = signed_short_data;

    std::cout<<"Signed short : "<<signed_short_data<<" , Unsigned short: "<<unsigned_short_data<<std::endl;
    std::cout<<"Size of short data type: "<<sizeof(signed_short_data)<<" bytes"<<std::endl;
    std::cout<<"---------------------------------------------------------------"<<std::endl;

    // int data type
    int signed_int_data = -67;
    unsigned int unsigned_int_data = signed_int_data;

    std::cout<<"Signed int : "<<signed_int_data<<" , Unsigned int: "<<unsigned_int_data<<std::endl;
    std::cout<<"Size of int data type: "<<sizeof(signed_int_data)<<" bytes"<<std::endl;
    std::cout<<"---------------------------------------------------------------"<<std::endl;

    // long data type
    long signed_long_data = -100;
    unsigned long unsigned_long_data = signed_long_data;

    std::cout<<"Signed long : "<<signed_long_data<<" , Unsigned long: "<<unsigned_long_data<<std::endl;
    std::cout<<"Size of long data type: "<<sizeof(signed_long_data)<<" bytes"<<std::endl;
    std::cout<<"---------------------------------------------------------------"<<std::endl;

    // long long data type
    long long signed_long_long_data = -1000;
    unsigned long long unsigned_long_long_data = signed_long_long_data;

    std::cout<<"Signed long long : "<<signed_long_long_data<<" , Unsigned long long: "<<unsigned_long_long_data<<std::endl;
    std::cout<<"Size of long long data type: "<<sizeof(signed_long_long_data)<<" bytes"<<std::endl;
    std::cout<<"---------------------------------------------------------------"<<std::endl;

    // char data type
    char signed_char_data = 'A';
    unsigned char unsigned_char_data = 255;

    std::cout<<"Signed char : "<<signed_char_data<<" , Unsigned char: "<<(int)unsigned_char_data<<std::endl;
    std::cout<<"Size of char data type: "<<sizeof(signed_char_data)<<" bytes"<<std::endl;
    std::cout<<"---------------------------------------------------------------"<<std::endl;

    // float data type
    float signed_float_data = -10.23f;

    std::cout<<"Float : "<<signed_float_data<<std::endl;
    std::cout<<"Size of float data type: "<<sizeof(signed_float_data)<<" bytes"<<std::endl;
    std::cout<<"---------------------------------------------------------------"<<std::endl;

    // double data type
    double signed_double_data = -10.23;

    std::cout<<"Double : "<<signed_double_data<<std::endl;
    std::cout<<"Size of double data type: "<<sizeof(signed_double_data)<<" bytes"<<std::endl;
    std::cout<<"---------------------------------------------------------------"<<std::endl;

    // bool data type
    bool bool_data = true;

    std::cout<<"Bool : "<<bool_data<<std::endl;
    std::cout<<"Size of bool data type: "<<sizeof(bool_data)<<" bytes"<<std::endl;
    std::cout<<"---------------------------------------------------------------"<<std::endl;

    return 0;
}