/**
 * ============================================================
 * STRINGS IN C++
 * ============================================================
 *
 * String:
 * ------------------------------------------------------------
 * - A string is a sequence of characters used
 *   to represent textual data.
 *
 * Examples:
 *
 *      "Hello"
 *      "C++"
 *      "OpenAI"
 *
 * In C++, strings can be represented in
 * multiple ways:
 *
 *      1. const char*       (String Literal)
 *      2. char[]            (Character Array)
 *      3. std::string       (Modern C++)
 *      4. std::string_view  (C++17)
 *
 * ============================================================
 * WHY STRINGS?
 * ============================================================
 *
 * Strings are used to store:
 *
 *      • Names
 *      • Messages
 *      • File Paths
 *      • URLs
 *      • User Input
 *      • Textual Data
 *
 * ============================================================
 * 1. STRING LITERALS
 * ============================================================
 *
 * A string literal is text enclosed
 * within double quotes.
 *
 * Example:
 *
 *      "Hello"
 *      "OpenAI"
 *      "Programming"
 *
 * String literals are stored by the compiler
 * in a read-only section of memory.
 *
 * Every string literal automatically ends
 * with:
 *
 *      '\0'
 *
 * called the null terminator.
 *
 * Memory:
 *
 *      "Hello"
 *
 *      H e l l o \0
 *
 * ============================================================
 * const char*
 * ============================================================
 *
 * A pointer can be used to reference
 * a string literal.
 *
 * Example:
 *
 *      const char* str = "Hello";
 *
 * Memory:
 *
 *      str
 *       ↓
 *      H e l l o \0
 *
 * Here:
 *
 *      str stores the address of the
 *      first character.
 *
 * ============================================================
 * Why const?
 * ============================================================
 *
 * String literals must not be modified.
 *
 * Example:
 *
 *      const char* str = "Hello";
 *
 *      str[0] = 'J';
 *
 * Result:
 *
 *      Undefined Behavior
 *
 * Therefore:
 *
 *      const char*
 *
 * is used instead of:
 *
 *      char*
 *
 * ============================================================
 * Reassigning const char*
 * ============================================================
 *
 * Example:
 *
 *      const char* str = "Hello";
 *
 *      str = "World";
 *
 * Valid:
 *
 *      The pointer changes.
 *
 * Invalid:
 *
 *      Modifying the literal itself.
 *
 * ============================================================
 * 2. CHARACTER ARRAYS
 * ============================================================
 *
 * Strings can also be stored inside arrays.
 *
 * Example:
 *
 *      char str[] = "Hello";
 *
 * Memory:
 *
 *      H
 *      e
 *      l
 *      l
 *      o
 *      \0
 *
 * Unlike const char*:
 *
 *      The array owns its storage.
 *
 * ============================================================
 * Modifying Character Arrays
 * ============================================================
 *
 * Example:
 *
 *      char str[] = "Hello";
 *
 *      str[0] = 'J';
 *
 * Result:
 *
 *      "Jello"
 *
 * This is valid because the array
 * contains its own copy of the data.
 *
 * ============================================================
 * Character Array vs const char*
 * ============================================================
 *
 * const char*
 *
 *      Points to existing text.
 *
 *      Does not own memory.
 *
 * char[]
 *
 *      Contains a copy of the text.
 *
 *      Owns memory.
 *
 * Example:
 *
 *      const char* ptr = "Hello";
 *
 *      char arr[] = "Hello";
 *
 * ============================================================
 * C STRING FUNCTIONS
 * ============================================================
 *
 * Header:
 *
 *      #include <cstring>
 *
 * Common Functions:
 *
 *      strlen()
 *      strcpy()
 *      strncpy()
 *      strcat()
 *      strcmp()
 *
 * Example:
 *
 *      char str[] = "Hello";
 *
 *      strlen(str);
 *
 * Output:
 *
 *      5
 *
 * ============================================================
 * LIMITATIONS OF C-STYLE STRINGS
 * ============================================================
 *
 * 1. Manual memory management.
 *
 * 2. Fixed size.
 *
 * 3. Risk of buffer overflow.
 *
 * 4. Less convenient.
 *
 * 5. Requires special library functions.
 *
 * ============================================================
 * 3. std::string
 * ============================================================
 *
 * std::string is the modern string class
 * provided by the C++ Standard Library.
 *
 * Header:
 *
 *      #include <string>
 *
 * Example:
 *
 *      std::string name = "John";
 *
 * Advantages:
 *
 *      • Dynamic size
 *      • Automatic memory management
 *      • Rich functionality
 *      • Safer than C strings
 *
 * ============================================================
 * String Declaration
 * ============================================================
 *
 * Example:
 *
 *      std::string name;
 *
 *      std::string city = "Mumbai";
 *
 *      std::string country("India");
 *
 * ============================================================
 * String Input
 * ============================================================
 *
 * Using cin:
 *
 *      std::string name;
 *
 *      cin >> name;
 *
 * Stops at whitespace.
 *
 * Input:
 *
 *      John Doe
 *
 * Result:
 *
 *      John
 *
 * ============================================================
 * getline()
 * ============================================================
 *
 * Reads an entire line.
 *
 * Example:
 *
 *      std::string name;
 *
 *      getline(cin, name);
 *
 * Input:
 *
 *      John Doe
 *
 * Output:
 *
 *      John Doe
 *
 * ============================================================
 * Accessing Characters
 * ============================================================
 *
 * Example:
 *
 *      std::string str = "Hello";
 *
 *      str[0]
 *
 * Output:
 *
 *      H
 *
 * ============================================================
 * String Length
 * ============================================================
 *
 * Example:
 *
 *      std::string str = "Programming";
 *
 *      str.length();
 *
 * or
 *
 *      str.size();
 *
 * Output:
 *
 *      11
 *
 * ============================================================
 * Concatenation
 * ============================================================
 *
 * Example:
 *
 *      std::string a = "Hello";
 *      std::string b = " World";
 *
 *      std::string c = a + b;
 *
 * Output:
 *
 *      Hello World
 *
 * ============================================================
 * Comparison
 * ============================================================
 *
 * Example:
 *
 *      if(str1 == str2)
 *      {
 *      }
 *
 * Comparison operators:
 *
 *      ==
 *      !=
 *      <
 *      >
 *      <=
 *      >=
 *
 * ============================================================
 * Common std::string Functions
 * ============================================================
 *
 * size()
 * length()
 *
 *      Returns length.
 *
 * empty()
 *
 *      Checks if string is empty.
 *
 * clear()
 *
 *      Removes all characters.
 *
 * append()
 *
 *      Adds text at end.
 *
 * substr()
 *
 *      Extracts substring.
 *
 * find()
 *
 *      Searches text.
 *
 * erase()
 *
 *      Removes characters.
 *
 * insert()
 *
 *      Inserts characters.
 *
 * replace()
 *
 *      Replaces characters.
 *
 * ============================================================
 * substr()
 * ============================================================
 *
 * Example:
 *
 *      std::string str = "Programming";
 *
 *      str.substr(0, 4);
 *
 * Output:
 *
 *      Prog
 *
 * ============================================================
 * find()
 * ============================================================
 *
 * Example:
 *
 *      std::string str = "Hello World";
 *
 *      str.find("World");
 *
 * Output:
 *
 *      6
 *
 * ============================================================
 * Iterating Through Strings
 * ============================================================
 *
 * Traditional Loop:
 *
 *      for(size_t i = 0;
 *          i < str.size();
 *          i++)
 *
 * Range-Based Loop:
 *
 *      for(char ch : str)
 *
 * ============================================================
 * c_str()
 * ============================================================
 *
 * Sometimes C APIs require a
 * const char*.
 *
 * Example:
 *
 *      std::string name = "John";
 *
 *      const char* ptr =
 *          name.c_str();
 *
 * c_str() returns:
 *
 *      const char*
 *
 * pointing to the internal buffer.
 *
 * ============================================================
 * 4. std::string_view (C++17)
 * ============================================================
 *
 * Header:
 *
 *      #include <string_view>
 *
 * std::string_view provides a
 * non-owning view of a string.
 *
 * Example:
 *
 *      std::string_view sv =
 *          "Hello";
 *
 * Characteristics:
 *
 *      • No allocation
 *      • No copying
 *      • Fast
 *      • Read-only view
 *
 * Use when:
 *
 *      You only need to read text.
 *
 * ============================================================
 * RAW STRING LITERALS
 * ============================================================
 *
 * Introduced in C++11.
 *
 * Syntax:
 *
 *      R"(text)"
 *
 * Example:
 *
 *      std::string path =
 *      R"(C:\Users\Admin\Files)";
 *
 * Backslashes do not require escaping.
 *
 * ============================================================
 * WIDE STRINGS
 * ============================================================
 *
 * Used for larger character sets.
 *
 * Example:
 *
 *      std::wstring text = L"Hello";
 *
 * Related Types:
 *
 *      std::wstring
 *      wchar_t
 *
 * ============================================================
 * STRING CONVERSIONS
 * ============================================================
 *
 * Integer to String:
 *
 *      std::to_string(100);
 *
 * Output:
 *
 *      "100"
 *
 * String to Integer:
 *
 *      std::stoi("100");
 *
 * Output:
 *
 *      100
 *
 * Other Functions:
 *
 *      std::stol()
 *      std::stoll()
 *      std::stof()
 *      std::stod()
 *
 * ============================================================
 * STRING STREAMS
 * ============================================================
 *
 * Header:
 *
 *      #include <sstream>
 *
 * Used to parse and construct strings.
 *
 * Example:
 *
 *      std::stringstream ss;
 *
 *      ss << 100;
 *
 *      std::string result =
 *          ss.str();
 *
 * ============================================================
 * MODERN C++ RECOMMENDATION
 * ============================================================
 *
 * Use:
 *
 *      std::string
 *
 * for owning text.
 *
 * Use:
 *
 *      std::string_view
 *
 * for read-only views.
 *
 * Use:
 *
 *      const char*
 *
 * when interacting with C APIs
 * or string literals.
 *
 * Avoid:
 *
 *      Manual C-string manipulation
 *
 * unless low-level control is required.
 *
 * ============================================================
 * SUMMARY
 * ============================================================
 *
 * const char*
 *      Pointer to string literal.
 *
 * char[]
 *      Character array storing text.
 *
 * std::string
 *      Dynamic string class.
 *
 * std::string_view
 *      Lightweight read-only string view.
 *
 * Modern C++ Rule:
 *
 *      Prefer std::string.
 *      Use std::string_view for reading.
 *      Use const char* mainly for
 *      interoperability with C code.
 *
 * ============================================================
 */

#include<iostream>
#include<string>

int main()
{
    // character arrays
    char apple[6]= {'A','p','p','l','e','\0'};
    std::cout<<apple<<std::endl;

    // character pointer string
    const char* name = "parity";
    std::cout<<name<<std::endl;

    // string 
    std::string fullname = std::string("mr. ") + "parity";
    std::cout<<fullname<<std::endl;
    std::cout<<"Length of string is "<<fullname.length()<<std::endl;

    return 0;
}