/**
 * ============================================================
 * INHERITANCE IN C++
 * ============================================================
 *
 * Inheritance:
 * ------------------------------------------------------------
 * - Inheritance is one of the fundamental concepts of
 *   Object-Oriented Programming (OOP).
 * - It allows a new class to acquire the properties
 *   and behaviors of an existing class.
 * - The existing class is called the Base Class
 *   (Parent Class or Superclass).
 * - The new class is called the Derived Class
 *   (Child Class or Subclass).
 *
 * Real World Example:
 *
 *      Animal
 *          ↓
 *      Dog
 *
 * A Dog is an Animal.
 *
 * The Dog can inherit common characteristics
 * from Animal while adding its own features.
 *
 * Benefits:
 *      1. Code Reusability
 *      2. Reduced Duplication
 *      3. Better Organization
 *      4. Extensibility
 *      5. Supports Polymorphism
 *
 * ============================================================
 * Basic Concept
 * ============================================================
 *
 * Consider:
 *
 * class Animal
 * {
 * public:
 *      void eat()
 *      {
 *      }
 * };
 *
 * class Dog : public Animal
 * {
 * };
 *
 * Dog d;
 *
 * The Dog class automatically inherits the
 * public members of Animal.
 *
 * Result:
 *
 *      d.eat();     // Valid
 *
 * ============================================================
 * Terminology
 * ============================================================
 *
 * Base Class:
 *
 *      Class whose members are inherited.
 *
 * Derived Class:
 *
 *      Class that inherits from another class.
 *
 * Example:
 *
 * class Animal
 * {
 * };
 *
 * class Dog : public Animal
 * {
 * };
 *
 * Base Class:
 *
 *      Animal
 *
 * Derived Class:
 *
 *      Dog
 *
 * ============================================================
 * Syntax of Inheritance
 * ============================================================
 *
 * class DerivedClass : access_specifier BaseClass
 * {
 * };
 *
 * Example:
 *
 * class Animal
 * {
 * public:
 *      void eat()
 *      {
 *      }
 * };
 *
 * class Dog : public Animal
 * {
 * };
 *
 * ============================================================
 * Why Inheritance?
 * ============================================================
 *
 * Without inheritance:
 *
 * class Dog
 * {
 * public:
 *      void eat()
 *      {
 *      }
 * };
 *
 * class Cat
 * {
 * public:
 *      void eat()
 *      {
 *      }
 * };
 *
 * Common code must be repeated.
 *
 * With inheritance:
 *
 * class Animal
 * {
 * public:
 *      void eat()
 *      {
 *      }
 * };
 *
 * class Dog : public Animal
 * {
 * };
 *
 * class Cat : public Animal
 * {
 * };
 *
 * Common functionality exists only once.
 *
 * ============================================================
 * Access Specifiers and Inheritance
 * ============================================================
 *
 * Base class members can be:
 *
 *      public
 *      protected
 *      private
 *
 * Example:
 *
 * class Base
 * {
 * public:
 *      int publicVar;
 *
 * protected:
 *      int protectedVar;
 *
 * private:
 *      int privateVar;
 * };
 *
 * ------------------------------------------------------------
 * Public Inheritance
 * ------------------------------------------------------------
 *
 * Syntax:
 *
 * class Derived : public Base
 * {
 * };
 *
 * Conversion:
 *
 *      Base Public     → Derived Public
 *      Base Protected  → Derived Protected
 *      Base Private    → Not Accessible
 *
 * Example:
 *
 * class Dog : public Animal
 * {
 * };
 *
 * Represents:
 *
 *      "Dog IS-A Animal"
 *
 * This is the most common form of inheritance.
 *
 * ------------------------------------------------------------
 * Protected Inheritance
 * ------------------------------------------------------------
 *
 * Syntax:
 *
 * class Derived : protected Base
 * {
 * };
 *
 * Conversion:
 *
 *      Base Public     → Derived Protected
 *      Base Protected  → Derived Protected
 *      Base Private    → Not Accessible
 *
 * ------------------------------------------------------------
 * Private Inheritance
 * ------------------------------------------------------------
 *
 * Syntax:
 *
 * class Derived : private Base
 * {
 * };
 *
 * Conversion:
 *
 *      Base Public     → Derived Private
 *      Base Protected  → Derived Private
 *      Base Private    → Not Accessible
 *
 * ============================================================
 * Protected Members
 * ============================================================
 *
 * Protected members are accessible:
 *
 *      • Inside the base class.
 *      • Inside derived classes.
 *
 * Protected members are NOT accessible:
 *
 *      • Outside the class hierarchy.
 *
 * Example:
 *
 * class Animal
 * {
 * protected:
 *      int age;
 * };
 *
 * class Dog : public Animal
 * {
 * public:
 *      void setAge()
 *      {
 *          age = 5;
 *      }
 * };
 *
 * ============================================================
 * Constructor Call Order
 * ============================================================
 *
 * When a derived object is created:
 *
 *      Base Constructor Executes First
 *      Derived Constructor Executes Second
 *
 * Example:
 *
 * class Base
 * {
 * public:
 *      Base()
 *      {
 *          std::cout << "Base";
 *      }
 * };
 *
 * class Derived : public Base
 * {
 * public:
 *      Derived()
 *      {
 *          std::cout << "Derived";
 *      }
 * };
 *
 * Output:
 *
 *      Base
 *      Derived
 *
 * ============================================================
 * Destructor Call Order
 * ============================================================
 *
 * When an object is destroyed:
 *
 *      Derived Destructor Executes First
 *      Base Destructor Executes Last
 *
 * Example:
 *
 * Output:
 *
 *      Derived Destructor
 *      Base Destructor
 *
 * Rule:
 *
 *      Construction:
 *          Base → Derived
 *
 *      Destruction:
 *          Derived → Base
 *
 * ============================================================
 * Types of Inheritance
 * ============================================================
 *
 * ------------------------------------------------------------
 * 1. Single Inheritance
 * ------------------------------------------------------------
 *
 * One derived class inherits from one base class.
 *
 * Example:
 *
 *      Animal
 *          ↓
 *         Dog
 *
 * class Dog : public Animal
 * {
 * };
 *
 * ------------------------------------------------------------
 * 2. Multilevel Inheritance
 * ------------------------------------------------------------
 *
 * A derived class becomes a base class for
 * another class.
 *
 * Example:
 *
 *      Animal
 *          ↓
 *       Mammal
 *          ↓
 *         Dog
 *
 * class Mammal : public Animal
 * {
 * };
 *
 * class Dog : public Mammal
 * {
 * };
 *
 * ------------------------------------------------------------
 * 3. Multiple Inheritance
 * ------------------------------------------------------------
 *
 * A class inherits from multiple base classes.
 *
 * Example:
 *
 * class Engine
 * {
 * };
 *
 * class Wheels
 * {
 * };
 *
 * class Car : public Engine, public Wheels
 * {
 * };
 *
 * Car inherits from both Engine and Wheels.
 *
 * ------------------------------------------------------------
 * 4. Hierarchical Inheritance
 * ------------------------------------------------------------
 *
 * Multiple classes inherit from one base class.
 *
 * Example:
 *
 *           Animal
 *          /      \
 *       Dog       Cat
 *
 * ------------------------------------------------------------
 * 5. Hybrid Inheritance
 * ------------------------------------------------------------
 *
 * Combination of two or more inheritance types.
 *
 * Example:
 *
 *      Multiple + Multilevel
 *
 * ============================================================
 * Function Overriding
 * ============================================================
 *
 * A derived class can redefine a base class
 * function.
 *
 * Example:
 *
 * class Animal
 * {
 * public:
 *      void sound()
 *      {
 *      }
 * };
 *
 * class Dog : public Animal
 * {
 * public:
 *      void sound()
 *      {
 *      }
 * };
 *
 * Dog provides its own implementation.
 *
 * ============================================================
 * The Diamond Problem
 * ============================================================
 *
 * Example:
 *
 *          Animal
 *         /      \
 *      Dog      Cat
 *         \      /
 *          Hybrid
 *
 * class Animal
 * {
 * };
 *
 * class Dog : public Animal
 * {
 * };
 *
 * class Cat : public Animal
 * {
 * };
 *
 * class Hybrid : public Dog, public Cat
 * {
 * };
 *
 * Problem:
 *
 *      Hybrid receives two copies of Animal.
 *
 * Ambiguity occurs.
 *
 * ============================================================
 * Virtual Inheritance
 * ============================================================
 *
 * Virtual inheritance solves the diamond problem.
 *
 * Example:
 *
 * class Animal
 * {
 * };
 *
 * class Dog : virtual public Animal
 * {
 * };
 *
 * class Cat : virtual public Animal
 * {
 * };
 *
 * class Hybrid : public Dog, public Cat
 * {
 * };
 *
 * Result:
 *
 *      Only one Animal subobject exists.
 *
 * ============================================================
 * Object Slicing
 * ============================================================
 *
 * Example:
 *
 * class Base
 * {
 * };
 *
 * class Derived : public Base
 * {
 * };
 *
 * Derived d;
 * Base b = d;
 *
 * Result:
 *
 *      Derived-specific data is discarded.
 *
 * This is called:
 *
 *      Object Slicing
 *
 * To avoid slicing:
 *
 *      Use references or pointers.
 *
 * ============================================================
 * Under The Hood
 * ============================================================
 *
 * Inheritance does not physically copy code.
 *
 * A derived object contains:
 *
 *      Base Class Portion
 *      +
 *      Derived Class Portion
 *
 * Example:
 *
 * class Base
 * {
 * public:
 *      int x;
 * };
 *
 * class Derived : public Base
 * {
 * public:
 *      int y;
 * };
 *
 * Memory Layout:
 *
 *      +------------+
 *      | Base::x    |
 *      +------------+
 *      | Derived::y |
 *      +------------+
 *
 * The base subobject exists inside the
 * derived object.
 *
 * ============================================================
 * IS-A Relationship
 * ============================================================
 *
 * Public inheritance represents:
 *
 *      IS-A relationship
 *
 * Example:
 *
 *      Dog IS-A Animal
 *
 *      Car IS-A Vehicle
 *
 * Good inheritance follows the IS-A rule.
 *
 * If the relationship is:
 *
 *      HAS-A
 *
 * Prefer composition instead.
 *
 * Example:
 *
 *      Car HAS-A Engine
 *
 * Better:
 *
 * class Car
 * {
 *      Engine engine;
 * };
 *
 * ============================================================
 * Important Notes
 * ============================================================
 *
 * 1. Private members are inherited but cannot
 *    be directly accessed by derived classes.
 *
 * 2. Constructors are not inherited.
 *
 * 3. Destructors are inherited conceptually
 *    through the hierarchy but each class has
 *    its own destructor.
 *
 * 4. Base constructors execute before derived
 *    constructors.
 *
 * 5. Derived destructors execute before base
 *    destructors.
 *
 * 6. Public inheritance models an IS-A
 *    relationship.
 *
 * 7. Use virtual inheritance to solve the
 *    diamond problem.
 *
 * 8. Use virtual destructors in polymorphic
 *    base classes.
 *
 * ============================================================
 * Summary
 * ============================================================
 *
 * Inheritance:
 *      Mechanism that allows one class to acquire
 *      properties and behavior from another class.
 *
 * Base Class:
 *      Class being inherited from.
 *
 * Derived Class:
 *      Class that inherits.
 *
 * Public Inheritance:
 *      Models an IS-A relationship.
 *
 * Types:
 *      Single
 *      Multilevel
 *      Multiple
 *      Hierarchical
 *      Hybrid
 *
 * Construction Order:
 *      Base → Derived
 *
 * Destruction Order:
 *      Derived → Base
 *
 * Under The Hood:
 *      A derived object contains a base-class
 *      subobject and extends it with additional
 *      members and functionality.
 */

#include <iostream>

class Jet
{
public:
    const char *name;
    int year_of_manufacture;

    Jet()
    {
        std::cout<< "===> Jet base activated"<<std::endl;
    }

    void fly()
    {
        std::cout << "===> The jet has taken off" << std::endl;
    }

    void land()
    {
        std::cout << "===> The jet has landed successfully" << std::endl;
    }
};

class FighterJet : public Jet
{
public:
    int missle_available;

    FighterJet()
    {
        std::cout<< "===> Fighter Jet base actiavted"<<std::endl;
    }

    void attack()
    {
        std::cout << "===> Fighter Jet has attacked enemy base!" << std::endl;
    }
};

int main()
{
    FighterJet rafale;

    rafale.fly();
    rafale.attack();
    rafale.land();


    return 0;
}