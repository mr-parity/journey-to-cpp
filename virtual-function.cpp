/**
 * ============================================================
 * VIRTUAL FUNCTIONS IN C++
 * ============================================================
 *
 * Virtual Functions:
 * ------------------------------------------------------------
 * - A virtual function is a member function declared
 *   with the keyword 'virtual' in a base class.
 * - It allows a derived class to provide its own
 *   implementation of the function.
 * - Virtual functions enable Runtime Polymorphism
 *   (Dynamic Polymorphism).
 *
 * In simple terms:
 *
 *      The function that gets executed is determined
 *      at runtime instead of compile time.
 *
 * Benefits:
 *      1. Runtime Polymorphism
 *      2. Flexible Design
 *      3. Extensibility
 *      4. Loose Coupling
 *      5. Cleaner Object-Oriented Design
 *
 * ============================================================
 * The Problem Without Virtual Functions
 * ============================================================
 *
 * Consider:
 *
 * class Animal
 * {
 * public:
 *      void speak()
 *      {
 *          std::cout << "Animal Sound";
 *      }
 * };
 *
 * class Dog : public Animal
 * {
 * public:
 *      void speak()
 *      {
 *          std::cout << "Bark";
 *      }
 * };
 *
 * Dog dog;
 *
 * Animal* ptr = &dog;
 *
 * ptr->speak();
 *
 * Output:
 *
 *      Animal Sound
 *
 * Why?
 *
 * Because normal member functions are resolved
 * during compilation.
 *
 * This is called:
 *
 *      Static Binding
 *      Early Binding
 *
 * The compiler only sees:
 *
 *      Animal*
 *
 * Therefore it calls:
 *
 *      Animal::speak()
 *
 * ============================================================
 * Introducing Virtual Functions
 * ============================================================
 *
 * By making the function virtual:
 *
 * class Animal
 * {
 * public:
 *
 *      virtual void speak()
 *      {
 *          std::cout << "Animal Sound";
 *      }
 * };
 *
 * class Dog : public Animal
 * {
 * public:
 *
 *      void speak()
 *      {
 *          std::cout << "Bark";
 *      }
 * };
 *
 * Dog dog;
 *
 * Animal* ptr = &dog;
 *
 * ptr->speak();
 *
 * Output:
 *
 *      Bark
 *
 * Now the function call is determined at runtime.
 *
 * This is called:
 *
 *      Dynamic Binding
 *      Late Binding
 *
 * ============================================================
 * Runtime Polymorphism
 * ============================================================
 *
 * Polymorphism means:
 *
 *      "Many Forms"
 *
 * Example:
 *
 * Animal* ptr;
 *
 * Dog dog;
 * Cat cat;
 *
 * ptr = &dog;
 * ptr->speak();
 *
 * ptr = &cat;
 * ptr->speak();
 *
 * Same interface:
 *
 *      speak()
 *
 * Different behavior depending on the actual object.
 *
 * This is Runtime Polymorphism.
 *
 * ============================================================
 * Function Overriding
 * ============================================================
 *
 * A derived class can redefine a virtual function.
 *
 * Example:
 *
 * class Animal
 * {
 * public:
 *
 *      virtual void speak()
 *      {
 *          std::cout << "Animal";
 *      }
 * };
 *
 * class Dog : public Animal
 * {
 * public:
 *
 *      void speak()
 *      {
 *          std::cout << "Bark";
 *      }
 * };
 *
 * Dog overrides:
 *
 *      Animal::speak()
 *
 * This process is called:
 *
 *      Function Overriding
 *
 * ============================================================
 * The override Keyword (C++11)
 * ============================================================
 *
 * Modern C++ provides:
 *
 *      override
 *
 * Example:
 *
 * class Dog : public Animal
 * {
 * public:
 *
 *      void speak() override
 *      {
 *          std::cout << "Bark";
 *      }
 * };
 *
 * Benefits:
 *
 *      • Better readability
 *      • Compiler verification
 *      • Prevents accidental mistakes
 *
 * Recommended:
 *
 *      Always use override when overriding
 *      virtual functions.
 *
 * ============================================================
 * Virtual Function Call Through References
 * ============================================================
 *
 * Virtual functions work with references too.
 *
 * Example:
 *
 * Dog dog;
 *
 * Animal& ref = dog;
 *
 * ref.speak();
 *
 * Output:
 *
 *      Bark
 *
 * Runtime dispatch works through:
 *
 *      • Base pointers
 *      • Base references
 *
 * ============================================================
 * Virtual Destructors
 * ============================================================
 *
 * When a class is intended to be used polymorphically,
 * its destructor should usually be virtual.
 *
 * Example:
 *
 * class Base
 * {
 * public:
 *
 *      virtual ~Base()
 *      {
 *      }
 * };
 *
 * class Derived : public Base
 * {
 * public:
 *
 *      ~Derived()
 *      {
 *      }
 * };
 *
 * Base* ptr = new Derived();
 *
 * delete ptr;
 *
 * Output:
 *
 *      Derived Destructor
 *      Base Destructor
 *
 * Without a virtual destructor:
 *
 *      Derived destructor may not execute.
 *
 * Result:
 *
 *      Resource leaks
 *      Undefined behavior
 *
 * ============================================================
 * Pure Virtual Functions
 * ============================================================
 *
 * A pure virtual function has no implementation
 * in the base class.
 *
 * Syntax:
 *
 *      virtual void func() = 0;
 *
 * Example:
 *
 * class Animal
 * {
 * public:
 *
 *      virtual void speak() = 0;
 * };
 *
 * Such a class becomes:
 *
 *      Abstract Class
 *
 * Objects cannot be created directly.
 *
 * Invalid:
 *
 *      Animal a;
 *
 * Valid:
 *
 *      Dog d;
 *
 * ============================================================
 * Abstract Classes
 * ============================================================
 *
 * A class containing at least one pure virtual
 * function is called an Abstract Class.
 *
 * Example:
 *
 * class Shape
 * {
 * public:
 *
 *      virtual void draw() = 0;
 * };
 *
 * Purpose:
 *
 *      Provide an interface.
 *
 * Derived classes must implement:
 *
 *      draw()
 *
 * ============================================================
 * Final Specifier
 * ============================================================
 *
 * C++11 provides:
 *
 *      final
 *
 * Example:
 *
 * class Dog : public Animal
 * {
 * public:
 *
 *      void speak() final
 *      {
 *      }
 * };
 *
 * Now further derived classes cannot override:
 *
 *      speak()
 *
 * ============================================================
 * Virtual Function Rules
 * ============================================================
 *
 * 1. Must be member functions.
 *
 * 2. Static functions cannot be virtual.
 *
 * 3. Constructors cannot be virtual.
 *
 * 4. Destructors can be virtual.
 *
 * 5. Virtual behavior works through:
 *
 *      • Pointers
 *      • References
 *
 * 6. Virtual dispatch does not occur when
 *    calling through objects directly.
 *
 * Example:
 *
 * Dog d;
 *
 * d.speak();
 *
 * This is a normal function call.
 *
 * ============================================================
 * Under The Hood
 * ============================================================
 *
 * Virtual functions are typically implemented
 * using:
 *
 *      vtable
 *      vptr
 *
 * ------------------------------------------------------------
 * vtable (Virtual Table)
 * ------------------------------------------------------------
 *
 * The compiler creates a hidden table containing
 * addresses of virtual functions.
 *
 * Example:
 *
 * Animal vtable:
 *
 *      +----------------------+
 *      | Animal::speak()      |
 *      +----------------------+
 *
 * Dog vtable:
 *
 *      +----------------------+
 *      | Dog::speak()         |
 *      +----------------------+
 *
 * ------------------------------------------------------------
 * vptr (Virtual Pointer)
 * ------------------------------------------------------------
 *
 * Every object containing virtual functions
 * typically stores a hidden pointer.
 *
 * This pointer references the appropriate vtable.
 *
 * Example:
 *
 * Dog object:
 *
 *      +------------+
 *      | vptr ------|----+
 *      +------------+    |
 *      | data       |    |
 *      +------------+    |
 *                        |
 *                        v
 *                 Dog vtable
 *
 * ============================================================
 * Runtime Dispatch
 * ============================================================
 *
 * Example:
 *
 * Animal* ptr = new Dog();
 *
 * ptr->speak();
 *
 * Conceptually:
 *
 *      Look at object's vptr
 *      ↓
 *      Access object's vtable
 *      ↓
 *      Find correct function address
 *      ↓
 *      Call Dog::speak()
 *
 * This decision occurs at runtime.
 *
 * ============================================================
 * Cost of Virtual Functions
 * ============================================================
 *
 * Virtual functions introduce:
 *
 *      • One vptr per object
 *      • One vtable per class
 *      • Slight runtime lookup cost
 *
 * Benefits usually outweigh these costs.
 *
 * Modern compilers heavily optimize
 * virtual function calls.
 *
 * ============================================================
 * Common Use Cases
 * ============================================================
 *
 *      • Game Engines
 *      • GUI Frameworks
 *      • Plugin Systems
 *      • Device Drivers
 *      • Shape Hierarchies
 *      • Animal Hierarchies
 *      • Interface-Based Design
 *
 * ============================================================
 * Important Notes
 * ============================================================
 *
 * 1. Virtual functions enable runtime polymorphism.
 *
 * 2. They are resolved at runtime.
 *
 * 3. Use override when overriding.
 *
 * 4. Constructors cannot be virtual.
 *
 * 5. Destructors should be virtual in
 *    polymorphic base classes.
 *
 * 6. Pure virtual functions create
 *    abstract classes.
 *
 * 7. Virtual dispatch works through
 *    pointers and references.
 *
 * 8. Virtual functions are typically
 *    implemented using vtables and vptrs.
 *
 * ============================================================
 * Summary
 * ============================================================
 *
 * Virtual Function:
 *      A function whose implementation is selected
 *      at runtime based on the actual object type.
 *
 * Runtime Polymorphism:
 *      Same interface, different behavior.
 *
 * override:
 *      Safely overrides a virtual function.
 *
 * Pure Virtual Function:
 *      virtual void func() = 0;
 *
 * Abstract Class:
 *      Class containing at least one pure
 *      virtual function.
 *
 * Under The Hood:
 *      Compiler creates vtables and stores a
 *      hidden vptr inside objects. Function calls
 *      are resolved at runtime using these tables,
 *      enabling dynamic dispatch.
*/

#include<iostream>

class Mammals
{
    public:
        virtual void walk()
        {
            std::cout<<"Walks on four legs"<<std::endl;
        }
};


class Human: public Mammals
{
    public:
    void walk() override
    {
        std::cout<< "Walks on two legs"<<std::endl;
    }
};

int main()
{

    Human* rohan = new Human();
    Mammals* ptr = rohan;

    ptr->walk();
;

    return 0;
}