/**
 * ============================================================
 * OBJECT CREATION / OBJECT INSTANTIATION IN C++
 * ============================================================
 *
 * Object:
 * ------------------------------------------------------------
 * An object is an instance of a class.
 *
 * A class acts as a blueprint that defines:
 *
 *      • Data Members (Variables)
 *      • Member Functions (Methods)
 *
 * Objects are the actual entities created
 * from that blueprint.
 *
 * Example:
 *
 *      Class  -> Blueprint of a House
 *      Object -> Actual House Built
 *
 * ============================================================
 * CLASS VS OBJECT
 * ============================================================
 *
 * Class:
 *
 *      Defines structure and behavior.
 *
 *      No memory is allocated for
 *      non-static data members until
 *      an object is created.
 *
 * Object:
 *
 *      Actual instance of a class.
 *
 *      Memory is allocated when
 *      the object is created.
 *
 * Example:
 *
 *      class Car
 *      {
 *      public:
 *          string brand;
 *      };
 *
 *      Car car1;
 *
 * Here:
 *
 *      Car     -> Class
 *      car1    -> Object
 *
 * ============================================================
 * WHAT IS OBJECT INSTANTIATION?
 * ============================================================
 *
 * Instantiation means:
 *
 *      Creating an object from a class.
 *
 * When an object is instantiated:
 *
 *      1. Memory is allocated.
 *      2. Data members are created.
 *      3. Constructors may be called.
 *      4. The object becomes usable.
 *
 * Example:
 *
 *      Car myCar;
 *
 * Here:
 *
 *      myCar is instantiated from
 *      the Car class.
 *
 * ============================================================
 * SIMPLE OBJECT CREATION
 * ============================================================
 *
 * Class Definition:
 *
 *      class Student
 *      {
 *      public:
 *          string name;
 *          int age;
 *      };
 *
 * Object Creation:
 *
 *      Student s1;
 *
 * Memory:
 *
 *      s1
 *      ├── name
 *      └── age
 *
 * ============================================================
 * ACCESSING OBJECT MEMBERS
 * ============================================================
 *
 * The dot operator (.)
 * is used to access members.
 *
 * Example:
 *
 *      Student s1;
 *
 *      s1.name = "John";
 *      s1.age  = 20;
 *
 *      cout << s1.name;
 *
 * Output:
 *
 *      John
 *
 * ============================================================
 * MULTIPLE OBJECTS
 * ============================================================
 *
 * A class can create many objects.
 *
 * Example:
 *
 *      Student s1;
 *      Student s2;
 *      Student s3;
 *
 * Memory:
 *
 *      s1 -> Separate Memory
 *      s2 -> Separate Memory
 *      s3 -> Separate Memory
 *
 * Each object owns its own copy
 * of non-static data members.
 *
 * ============================================================
 * OBJECTS ON THE STACK
 * ============================================================
 *
 * Most commonly objects are created
 * on the stack.
 *
 * Example:
 *
 *      Student s1;
 *
 * Characteristics:
 *
 *      • Automatic lifetime
 *      • Automatically destroyed
 *      • Fast allocation
 *
 * Object exists until:
 *
 *      Scope ends.
 *
 * Example:
 *
 *      {
 *          Student s1;
 *      }
 *
 * After block ends:
 *
 *      s1 is destroyed automatically.
 *
 * ============================================================
 * CONSTRUCTOR DURING INSTANTIATION
 * ============================================================
 *
 * Constructors initialize objects.
 *
 * Example:
 *
 *      class Student
 *      {
 *      public:
 *
 *          Student()
 *          {
 *              cout << "Created";
 *          }
 *      };
 *
 *      Student s1;
 *
 * Output:
 *
 *      Created
 *
 * Constructor executes automatically
 * when object is instantiated.
 *
 * ============================================================
 * PARAMETERIZED CONSTRUCTOR
 * ============================================================
 *
 * Example:
 *
 *      class Student
 *      {
 *      public:
 *
 *          string name;
 *
 *          Student(string n)
 *          {
 *              name = n;
 *          }
 *      };
 *
 * Object Creation:
 *
 *      Student s1("John");
 *
 * Result:
 *
 *      name = "John"
 *
 * ============================================================
 * DYNAMIC OBJECT CREATION
 * ============================================================
 *
 * Objects can also be created
 * dynamically using new.
 *
 * Example:
 *
 *      Student* ptr =
 *          new Student();
 *
 * Memory:
 *
 *      Stack:
 *          ptr
 *
 *      Heap:
 *          Student Object
 *
 *      ptr --------> Object
 *
 * ============================================================
 * WHY DYNAMIC ALLOCATION?
 * ============================================================
 *
 * Dynamic objects:
 *
 *      • Exist beyond current scope
 *      • Allow flexible memory usage
 *      • Useful for large structures
 *      • Common in data structures
 *
 * Example:
 *
 *      Student* s =
 *          new Student();
 *
 * ============================================================
 * DELETING DYNAMIC OBJECTS
 * ============================================================
 *
 * Objects created with new
 * must be destroyed using delete.
 *
 * Example:
 *
 *      Student* s =
 *          new Student();
 *
 *      delete s;
 *
 * Failure to delete causes:
 *
 *      Memory Leak
 *
 * ============================================================
 * STACK OBJECT VS HEAP OBJECT
 * ============================================================
 *
 * Stack Object:
 *
 *      Student s1;
 *
 *      Automatic destruction.
 *
 * Heap Object:
 *
 *      Student* s1 =
 *          new Student();
 *
 *      Manual destruction required.
 *
 * ============================================================
 * OBJECT POINTERS
 * ============================================================
 *
 * A pointer can store the address
 * of an object.
 *
 * Example:
 *
 *      Student s1;
 *
 *      Student* ptr = &s1;
 *
 * Access Members:
 *
 *      ptr->name
 *
 * Equivalent:
 *
 *      (*ptr).name
 *
 * ============================================================
 * OBJECT ARRAY
 * ============================================================
 *
 * Multiple objects can be stored
 * inside an array.
 *
 * Example:
 *
 *      Student students[3];
 *
 * Creates:
 *
 *      students[0]
 *      students[1]
 *      students[2]
 *
 * Three separate objects.
 *
 * ============================================================
 * TEMPORARY OBJECTS
 * ============================================================
 *
 * Objects can be created temporarily.
 *
 * Example:
 *
 *      Student("John");
 *
 * Characteristics:
 *
 *      • Exists temporarily
 *      • Destroyed automatically
 *      • Often used in expressions
 *
 * ============================================================
 * COPY INSTANTIATION
 * ============================================================
 *
 * One object can be created
 * from another object.
 *
 * Example:
 *
 *      Student s1;
 *
 *      Student s2 = s1;
 *
 * Result:
 *
 *      s2 receives a copy of s1.
 *
 * Copy Constructor may be called.
 *
 * ============================================================
 * MODERN C++ OBJECT CREATION
 * ============================================================
 *
 * Preferred Initialization:
 *
 *      Student s1{};
 *
 *      Student s2{"John"};
 *
 * Benefits:
 *
 *      • Consistent syntax
 *      • Prevents narrowing
 *      • Modern C++ style
 *
 * ============================================================
 * OBJECT LIFETIME
 * ============================================================
 *
 * Object Lifetime Begins:
 *
 *      When object is created.
 *
 * Object Lifetime Ends:
 *
 *      When object is destroyed.
 *
 * Stack Object:
 *
 *      End of scope.
 *
 * Heap Object:
 *
 *      delete statement.
 *
 * ============================================================
 * MEMORY REPRESENTATION
 * ============================================================
 *
 * Example:
 *
 *      class Student
 *      {
 *      public:
 *          string name;
 *          int age;
 *      };
 *
 *      Student s1;
 *
 * Memory:
 *
 *      s1
 *      ├── name
 *      └── age
 *
 * Every object contains storage
 * for its non-static data members.
 *
 * ============================================================
 * SUMMARY
 * ============================================================
 *
 * Class:
 *
 *      Blueprint for objects.
 *
 * Object:
 *
 *      Instance of a class.
 *
 * Instantiation:
 *
 *      Process of creating an object.
 *
 * Stack Object:
 *
 *      Student s1;
 *
 * Heap Object:
 *
 *      Student* s1 =
 *          new Student();
 *
 * Access Members:
 *
 *      s1.name
 *
 *      ptr->name
 *
 * Modern C++ Rule:
 *
 *      Prefer automatic (stack)
 *      objects whenever possible.
 *
 *      Use dynamic allocation only
 *      when ownership or lifetime
 *      requirements demand it.
 *
 * ============================================================
*/


#include <iostream>
#include<string>

using String = std::string;

class Player
{
    private:
        String m_name;
        int m_level;
        int m_current_money;

    public:
        Player():m_name("Unknown"),m_level(0),m_current_money(0)
        {

        }

        Player(const String& name, int level, int money):
            m_name(name),m_level(level),m_current_money(money)
        {

        }

    public:
        void debugPlayer()
        {
            std::cout<<"Player Name: "<<m_name<<std::endl;
            std::cout<<"Player Level: "<<m_level<<std::endl;
            std::cout<<"Player Money: "<<m_current_money<<std::endl;
            std::cout<<"----------------------------------------"<<std::endl;

        }
};

int main()
{

    // stack allocated objects
    Player momo;
    momo.debugPlayer();

    Player rancho("Rancho",1,0); // Player rancho = Player("Rancho",1,0)
    rancho.debugPlayer();


    // heap allocated 
    Player* ptr;

    {
        Player* mogambo = new Player("Mogambo",45,100000);
        ptr = mogambo;
        mogambo->debugPlayer();
    }

    delete ptr; // free mogambo using ptr and mogambo is now out of scope

    return 0;
}