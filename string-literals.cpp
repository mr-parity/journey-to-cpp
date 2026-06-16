/**
 * ============================================================
 * STRING LITERALS & CHARACTER TYPES IN C++
 * ============================================================
 *
 * STRING LITERALS
 * ------------------------------------------------------------
 * - A string literal is a sequence of characters written
 *   inside double quotes.
 *
 * Example:
 *      "Hello"
 *      "C++ Programming"
 *
 * - String literals are ALWAYS stored in memory with
 *   static storage duration (read-only memory section in most systems).
 *
 * IMPORTANT:
 *      They are not created on stack or heap.
 *      They exist for the entire lifetime of the program.
 *
 * - The compiler automatically appends a null character '\0'
 *   at the end of every string literal.
 *
 * Memory representation:
 *      "Hello"
 *      H  e  l  l  o  \0
 *
 * ============================================================
 * TYPE OF STRING LITERALS
 * ============================================================
 *
 * 1. Narrow string literal (default)
 * ------------------------------------------------------------
 *      "Hello"
 *
 * Type:
 *      const char[6]
 *
 * Decays to:
 *      const char*
 *
 * Example:
 *      const char* str = "Hello";
 *
 * ------------------------------------------------------------
 * 2. Wide string literal
 * ------------------------------------------------------------
 *      L"Hello"
 *
 * Type:
 *      const wchar_t[6]
 *
 * Example:
 *      const wchar_t* str = L"Hello";
 *
 * Usage:
 *      Used for wide character systems (Unicode / OS APIs)
 *
 * ------------------------------------------------------------
 * 3. UTF-16 string literal
 * ------------------------------------------------------------
 *      u"Hello"
 *
 * Type:
 *      const char16_t[6]
 *
 * Example:
 *      const char16_t* str = u"Hello";
 *
 * Encoding:
 *      UTF-16 (2 bytes per character)
 *
 * ------------------------------------------------------------
 * 4. UTF-32 string literal
 * ------------------------------------------------------------
 *      U"Hello"
 *
 * Type:
 *      const char32_t[6]
 *
 * Example:
 *      const char32_t* str = U"Hello";
 *
 * Encoding:
 *      UTF-32 (fixed 4 bytes per character)
 *
 * ------------------------------------------------------------
 * 5. RAW STRING LITERAL (IMPORTANT)
 * ------------------------------------------------------------
 *
 * Syntax:
 *      R"( ... )"
 *
 * Example:
 *      const char* path = R"(C:\Users\Admin\Files)";
 *
 * - Raw string literals ignore escape sequences.
 *
 * Normal string:
 *      "C:\\Users\\Admin\\Files"
 *
 * Raw string:
 *      R"(C:\Users\Admin\Files)"
 *
 * Advantages:
 *      - No need for escaping \n, \t, \\, etc.
 *      - Useful for file paths, regex, JSON, multiline text
 *
 * Multi-line example:
 *
 *      const char* text = R"(Hello
 *      World
 *      C++)";
 *
 * ============================================================
 * IMPORTANT PROPERTIES OF STRING LITERALS
 * ============================================================
 *
 * 1. STORED IN READ-ONLY MEMORY (MOST IMPORTANT)
 * ------------------------------------------------------------
 * - String literals are stored in a read-only section
 *   of memory (implementation dependent, but typical behavior).
 *
 * Example:
 *      const char* str = "Hello";
 *
 * Trying to modify:
 *      str[0] = 'J';   ❌ Undefined Behavior
 *
 * Reason:
 *      Memory is not writable.
 *
 * ------------------------------------------------------------
 * 2. STATIC LIFETIME
 * ------------------------------------------------------------
 * - String literals exist throughout program execution.
 *
 * ------------------------------------------------------------
 * 3. MAY BE SHARED
 * ------------------------------------------------------------
 * - Identical literals may share memory.
 *
 * ============================================================
 * POINTER BEHAVIOR WITH STRING LITERALS
 * ============================================================
 *
 * Example:
 *      const char* str = "Hello";
 *
 * You can do:
 *      str = "World";   ✔ valid (pointer changes)
 *
 * But NOT:
 *      str[0] = 'W';    ❌ undefined behavior
 *
 * ============================================================
 * CHARACTER TYPES IN C++
 * ============================================================
 *
 * 1. char
 *      - 1 byte
 *      - ASCII / UTF-8
 *
 * 2. wchar_t
 *      - wide character type
 *
 * 3. char16_t
 *      - UTF-16 encoding
 *
 * 4. char32_t
 *      - UTF-32 encoding
 *
 * ============================================================
 * CHARACTER LITERAL PREFIXES
 * ============================================================
 *
 * 'A'   → char
 * L'A'  → wchar_t
 * u'A'  → char16_t
 * U'A'  → char32_t
 *
 * "A"   → const char[]
 * L"A"  → const wchar_t[]
 * u"A"  → const char16_t[]
 * U"A"  → const char32_t[]
 *
 * ============================================================
 * STRING LITERAL VS CHARACTER ARRAY
 * ============================================================
 *
 * const char* str = "Hello";
 *      - Points to read-only memory
 *
 * char str[] = "Hello";
 *      - Own copy of data
 *      - Modifiable
 *
 * ============================================================
 * WHY '\0' IS IMPORTANT
 * ============================================================
 *
 * - Marks end of string
 *
 * "Hi"
 *  H  i  \0
 *
 * Without '\0', functions cannot detect end.
 *
 * ============================================================
 * MODERN C++ NOTE
 * ============================================================
 *
 * Prefer:
 *      std::string
 *      std::string_view
 *
 * over raw string pointers.
 *
 * ============================================================
 * SUMMARY
 * ============================================================
 *
 * STRING LITERALS:
 *      - Stored in read-only memory
 *      - Always null-terminated
 *
 * TYPES:
 *      "Hello"   → const char[]
 *      L"Hello"  → const wchar_t[]
 *      u"Hello"  → const char16_t[]
 *      U"Hello"  → const char32_t[]
 *      R"(...)   → raw string literal
 *
 * RULE:
 *      Never modify string literals
 *
 * ============================================================
*/

#include <iostream>
#include <string>

void print(const char* message)
{
    std::cout << message << std::endl;
}

// std::string
void print(const std::string& message)
{
    std::cout << message << std::endl;
}

// wide string (wchar_t)
void print(const wchar_t* message)
{
    std::wcout << message << std::endl;
}

// UTF-16 string
void print(const char16_t* message)
{
    std::cout << reinterpret_cast<const char*>(message) << std::endl;
}

// UTF-32 string
void print(const char32_t* message)
{
    std::cout << reinterpret_cast<const char*>(message) << std::endl;
}

int main()
{

    using namespace std::string_literals;

    // string literal
    const char* car = "Buggati";
    print(car);

    // string literal using string STL
    std::string name = "Anormus"s + " Celsete";
    print(name);

    // character types

    const wchar_t* text = L"This is some wide character text. ";
    print(text);

    const char16_t* text16b = u"This is 16bit character text";
    print(text16b);

    const char32_t* text32b = U"This is 32 bit character text";
    print(text32b);

    const char* passage = R"(Hello man
    this is going to be a reallyyyyyyy
    longggg textttt)";
    print(passage);

    return 0;

}