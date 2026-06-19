/**
 * ============================================================
 * CONSTRUCTOR INITIALIZER LIST (MEMBER INITIALIZER LIST)
 * ============================================================
 *
 * A Constructor Initializer List is a special C++ syntax used
 * to initialize data members and base classes BEFORE the
 * constructor body executes.
 *
 * Syntax:
 *
 *      ClassName(parameters)
 *          : member1(value1),
 *            member2(value2),
 *            BaseClass(value3)
 *      {
 *      }
 *
 * The initializer list appears after the constructor
 * parameter list and before the constructor body.
 *
 * ============================================================
 * WHY DOES IT EXIST?
 * ============================================================
 *
 * Objects are constructed in two stages:
 *
 *      1. Member Initialization
 *      2. Constructor Body Execution
 *
 * The initializer list controls stage #1.
 *
 * Without an initializer list, members are first
 * default-constructed and then assigned values
 * inside the constructor body.
 *
 * This can be inefficient and sometimes impossible.
 *
 * ============================================================
 * BASIC EXAMPLE
 * ============================================================
 *
 * class Employee
 * {
 * private:
 *
 *      int id;
 *      std::string name;
 *
 * public:
 *
 *      Employee(int i, const std::string& n)
 *          : id(i), name(n)
 *      {
 *      }
 * };
 *
 * What happens?
 *
 *      id is initialized with i
 *      name is initialized with n
 *
 * BEFORE entering the constructor body.
 *
 * ============================================================
 * INITIALIZATION vs ASSIGNMENT
 * ============================================================
 *
 * Consider:
 *
 * class Example
 * {
 * private:
 *
 *      std::string text;
 *
 * public:
 *
 *      Example(const std::string& s)
 *      {
 *          text = s;
 *      }
 * };
 *
 * What actually happens?
 *
 * Step 1:
 *
 *      text is default-constructed
 *
 * Step 2:
 *
 *      text is assigned s
 *
 * Therefore:
 *
 *      Construction + Assignment
 *
 * ============================================================
 *
 * Using an initializer list:
 *
 * class Example
 * {
 * private:
 *
 *      std::string text;
 *
 * public:
 *
 *      Example(const std::string& s)
 *          : text(s)
 *      {
 *      }
 * };
 *
 * What happens?
 *
 * Step 1:
 *
 *      text is directly constructed with s
 *
 * Therefore:
 *
 *      Direct Construction
 *
 * No unnecessary assignment occurs.
 *
 * ============================================================
 * PERFORMANCE BENEFIT
 * ============================================================
 *
 * For primitive types:
 *
 *      int
 *      double
 *      char
 *
 * The difference is usually small.
 *
 * For complex objects:
 *
 *      std::string
 *      std::vector
 *      std::map
 *      User-defined classes
 *
 * Direct initialization can avoid extra work.
 *
 * Therefore initializer lists are generally
 * preferred whenever possible.
 *
 * ============================================================
 * REQUIRED FOR CONST MEMBERS
 * ============================================================
 *
 * const data members MUST be initialized
 * using an initializer list.
 *
 * Example:
 *
 * class Test
 * {
 * private:
 *
 *      const int value;
 *
 * public:
 *
 *      Test(int v)
 *          : value(v)
 *      {
 *      }
 * };
 *
 * Why?
 *
 * A const member must receive its value
 * when it is created.
 *
 * Assignment later is impossible.
 *
 * ============================================================
 * INVALID EXAMPLE
 * ============================================================
 *
 * class Test
 * {
 * private:
 *
 *      const int value;
 *
 * public:
 *
 *      Test(int v)
 *      {
 *          value = v; // Error
 *      }
 * };
 *
 * Result:
 *
 *      Compilation Error
 *
 * ============================================================
 * REQUIRED FOR REFERENCE MEMBERS
 * ============================================================
 *
 * References must also be initialized using
 * an initializer list.
 *
 * Example:
 *
 * class Test
 * {
 * private:
 *
 *      int& ref;
 *
 * public:
 *
 *      Test(int& r)
 *          : ref(r)
 *      {
 *      }
 * };
 *
 * Reason:
 *
 * References cannot be reseated after creation.
 *
 * ============================================================
 * REQUIRED FOR BASE CLASSES
 * ============================================================
 *
 * Base classes are initialized through the
 * initializer list.
 *
 * Example:
 *
 * class Person
 * {
 * public:
 *
 *      Person(std::string n);
 * };
 *
 * class Employee : public Person
 * {
 * public:
 *
 *      Employee(std::string n)
 *          : Person(n)
 *      {
 *      }
 * };
 *
 * Person is constructed BEFORE Employee.
 *
 * ============================================================
 * REQUIRED FOR MEMBERS WITHOUT
 * DEFAULT CONSTRUCTORS
 * ============================================================
 *
 * Example:
 *
 * class Engine
 * {
 * public:
 *
 *      Engine(int hp);
 * };
 *
 * class Car
 * {
 * private:
 *
 *      Engine engine;
 *
 * public:
 *
 *      Car()
 *          : engine(200)
 *      {
 *      }
 * };
 *
 * If Engine has no default constructor,
 * initialization inside the constructor body
 * would be impossible.
 *
 * ============================================================
 * MULTIPLE MEMBER INITIALIZATION
 * ============================================================
 *
 * Example:
 *
 * class Student
 * {
 * private:
 *
 *      int id;
 *      std::string name;
 *      double gpa;
 *
 * public:
 *
 *      Student(int i,
 *              std::string n,
 *              double g)
 *          : id(i),
 *            name(n),
 *            gpa(g)
 *      {
 *      }
 * };
 *
 * Multiple members are separated by commas.
 *
 * ============================================================
 * IMPORTANT RULE:
 * ORDER OF INITIALIZATION
 * ============================================================
 *
 * Many programmers believe members are initialized
 * in the order written in the initializer list.
 *
 * This is FALSE.
 *
 * Members are initialized in the order they are
 * DECLARED inside the class.
 *
 * Example:
 *
 * class Example
 * {
 * private:
 *
 *      int a;
 *      int b;
 *
 * public:
 *
 *      Example()
 *          : b(20),
 *            a(10)
 *      {
 *      }
 * };
 *
 * Actual initialization order:
 *
 *      a -> first
 *      b -> second
 *
 * Because declaration order controls initialization.
 *
 * NOT the initializer list order.
 *
 * ============================================================
 * WHY IS THIS IMPORTANT?
 * ============================================================
 *
 * Consider:
 *
 * class Example
 * {
 * private:
 *
 *      int a;
 *      int b;
 *
 * public:
 *
 *      Example()
 *          : b(a),
 *            a(10)
 *      {
 *      }
 * };
 *
 * Actual execution:
 *
 *      a initialized first
 *      b initialized second
 *
 * Depending on compiler diagnostics,
 * this may create warnings or unexpected behavior.
 *
 * Best Practice:
 *
 *      Write initializer lists in the same order
 *      as member declarations.
 *
 * ============================================================
 * MEMBER INITIALIZER LIST AND MOVE SEMANTICS
 * ============================================================
 *
 * Initializer lists work extremely well with
 * move semantics.
 *
 * Example:
 *
 * class Data
 * {
 * private:
 *
 *      std::vector<int> values;
 *
 * public:
 *
 *      Data(std::vector<int> v)
 *          : values(std::move(v))
 *      {
 *      }
 * };
 *
 * The vector contents are moved directly into
 * the member object.
 *
 * ============================================================
 * WHAT HAPPENS INTERNALLY?
 * ============================================================
 *
 * Conceptually:
 *
 *      Employee(int i, string n)
 *          : id(i), name(n)
 *      {
 *      }
 *
 * behaves like:
 *
 *      Construct id using i
 *      Construct name using n
 *      Enter constructor body
 *
 * The constructor body runs only AFTER all
 * members and base classes have been initialized.
 *
 * ============================================================
 * BEST PRACTICES
 * ============================================================
 *
 * 1. Prefer initializer lists whenever possible.
 *
 * 2. Always use initializer lists for:
 *
 *      • const members
 *      • reference members
 *      • base classes
 *      • members without default constructors
 *
 * 3. Keep initialization order identical to
 *    declaration order.
 *
 * 4. Prefer direct initialization over
 *    assignment in the constructor body.
 *
 * 5. Use move semantics in initializer lists
 *    when ownership transfer is desired.
 *
 * ============================================================
 * SUMMARY
 * ============================================================
 *
 * Constructor Initializer List:
 *
 *      A mechanism used to initialize data
 *      members and base classes before the
 *      constructor body executes.
 *
 * Advantages:
 *
 *      • More efficient
 *      • Required for const members
 *      • Required for references
 *      • Required for base class construction
 *      • Works with move semantics
 *      • Avoids unnecessary assignments
 *
 * Key Rule:
 *
 *      Members are initialized in the order
 *      they are declared in the class,
 *      NOT the order listed in the initializer list.
 *
 * Philosophy:
 *
 *      "Construct objects correctly the first time,
 *       rather than constructing them and then
 *       assigning values afterward."
 *
 * ============================================================
 */

#include <iostream>
#include <string>

class Hunter
{
private:
    std::string name;
    int kills;

public:
    Hunter() : name("Unknown"), kills(0)
    {
    }

    Hunter(const std::string& name, int kills) : name(name), kills(kills)
    {
    }

public:
    void getHunterStats()
    {
        std::cout << "Hunter " << name << " has killed " << kills << " targets" << std::endl;
    }
};

int main()
{
    Hunter noob;
    noob.getHunterStats();

    Hunter pro("Nathan",183);
    pro.getHunterStats();
    return 0;
}