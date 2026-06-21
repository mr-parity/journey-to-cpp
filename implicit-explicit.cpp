/*
===============================================================================
            Implicit Conversion and the Explicit Keyword in C++
===============================================================================

1. Implicit Conversion
----------------------
Implicit conversion is an automatic type conversion performed by the compiler
when converting one data type to another without requiring an explicit cast.

Examples:
    int x = 10;
    double y = x;      // int -> double (implicit conversion)

    class Distance {
    public:
        Distance(int m) { }
    };

    Distance d = 100;  // int -> Distance (implicit conversion)

Advantages:
    - Convenient and concise syntax.
    - Reduces the need for manual type casting.

Disadvantages:
    - May introduce unexpected conversions.
    - Can lead to bugs and ambiguous function calls.
    - Sometimes makes code harder to understand.

-------------------------------------------------------------------------------

2. Explicit Keyword
-------------------
The 'explicit' keyword prevents the compiler from using a constructor or
conversion operator for implicit conversions.

Example:

    class Distance {
    public:
        explicit Distance(int m) { }
    };

    Distance d1(100);      // Valid: direct initialization
    Distance d2 = 100;     // Error: implicit conversion not allowed

By marking a constructor as explicit, objects can only be created
intentionally, improving code clarity and safety.

-------------------------------------------------------------------------------

3. Why Use Explicit?
--------------------
Without explicit:

    class Number {
    public:
        Number(int value) { }
    };

    void print(Number n) { }

    print(5);    // Compiler implicitly creates Number(5)

With explicit:

    class Number {
    public:
        explicit Number(int value) { }
    };

    print(5);            // Error
    print(Number(5));    // Correct and intentional

Benefits:
    ✔ Prevents accidental conversions
    ✔ Improves readability
    ✔ Makes APIs safer and more predictable
    ✔ Reduces subtle bugs

-------------------------------------------------------------------------------

4. Explicit Conversion (Manual Conversion)
-------------------------------------------
An explicit conversion is performed intentionally by the programmer using
casts or direct construction.

Examples:

    double pi = 3.14;
    int x = static_cast<int>(pi);   // Explicit conversion

    Distance d(100);                // Explicit object creation

-------------------------------------------------------------------------------

Summary
-------
Implicit Conversion:
    - Automatic conversion by the compiler.
    - Convenient but may cause unintended behavior.

Explicit Keyword:
    - Disables unwanted implicit conversions.
    - Requires deliberate object construction.
    - Improves type safety and code maintainability.

Rule of Thumb:
    Use 'explicit' for single-argument constructors unless implicit
    conversion is genuinely desired.
===============================================================================
*/

#include <iostream>
#include <string>

using String = std::string;

class Marksheet
{
    private:
        String m_name;
        int m_marks;

    public:
        explicit Marksheet(const String& name):
            m_name(name),m_marks(-1)
        {

        }

        Marksheet(int marks):
            m_name("Unknown"),m_marks(marks)
        {
            
        }
    
    public:
        void displayMarks()
        {
            std::cout<<m_name<<" scored "<<m_marks<<" in the test!"<<std::endl;
        }
};

int main()
{
    Marksheet james = 22; // implicit conversion to type Marksheet
    // Marksheet jonathan = "Jonathan"; // Error

    Marksheet johnathan("Johnathan");
    
    james.displayMarks();
    johnathan.displayMarks();

    
    return 0;
}