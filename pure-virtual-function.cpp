/**
 * ============================================================
 * PURE VIRTUAL FUNCTIONS & INTERFACES IN C++
 * ============================================================
 *
 * Pure Virtual Functions:
 * ------------------------------------------------------------
 * - A pure virtual function is a virtual function that has
 *   no implementation in the base class.
 * - It is declared by assigning 0 to the function.
 *
 * Syntax:
 *
 *      virtual return_type functionName() = 0;
 *
 * - A class containing at least one pure virtual function
 *   becomes an ABSTRACT CLASS.
 * - You cannot create objects of an abstract class.
 *
 * ============================================================
 * Example of Pure Virtual Function
 * ============================================================
 *
 * class Animal
 * {
 * public:
 *
 *      virtual void speak() = 0;
 * };
 *
 * Animal a;   //  Not allowed (Abstract class)
 *
 * ============================================================
 * Why Pure Virtual Functions?
 * ============================================================
 *
 * Pure virtual functions are used when:
 *
 *      • You want to force derived classes to implement
 *        a function.
 *      • You want to define a common interface.
 *      • You only want to define "what to do",
 *        not "how to do".
 *
 * ============================================================
 * Abstract Class
 * ============================================================
 *
 * A class is called abstract if:
 *
 *      • It has at least one pure virtual function.
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
 * Properties:
 *
 *      • Cannot create objects
 *      • Can have normal functions too
 *      • Can have constructors
 *      • Can have data members
 *
 * ============================================================
 * Derived Class Must Implement
 * ============================================================
 *
 * If a class inherits from an abstract class,
 * it MUST implement all pure virtual functions
 * or it will also become abstract.
 *
 * Example:
 *
 * class Animal
 * {
 * public:
 *      virtual void speak() = 0;
 * };
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
 * Now Dog becomes a concrete class.
 *
 * ============================================================
 * Interface in C++
 * ============================================================
 *
 * C++ does not have a built-in "interface" keyword
 * like Java or C#.
 *
 * However, an interface is simulated using:
 *
 *      • Pure virtual functions only
 *
 * Interface = Abstract class with ONLY pure virtual functions
 *
 * Example:
 *
 * class IShape
 * {
 * public:
 *
 *      virtual void draw() = 0;
 *      virtual double area() = 0;
 * };
 *
 * ============================================================
 * Interface Rules (C++ Style)
 * ============================================================
 *
 * 1. All functions should be pure virtual.
 * 2. No data members (or minimal use).
 * 3. Destructor should be virtual.
 * 4. Used to define behavior contract.
 *
 * ============================================================
 * Example of Interface Usage
 * ============================================================
 *
 * class IPrinter
 * {
 * public:
 *
 *      virtual void print() = 0;
 * };
 *
 * class LaserPrinter : public IPrinter
 * {
 * public:
 *
 *      void print() override
 *      {
 *          std::cout << "Laser Printing";
 *      }
 * };
 *
 * class InkjetPrinter : public IPrinter
 * {
 * public:
 *
 *      void print() override
 *      {
 *          std::cout << "Inkjet Printing";
 *      }
 * };
 *
 * IPrinter* p;
 *
 * LaserPrinter lp;
 * InkjetPrinter ip;
 *
 * p = &lp;
 * p->print();   // Laser Printing
 *
 * p = &ip;
 * p->print();   // Inkjet Printing
 *
 * ============================================================
 * Real-World Analogy
 * ============================================================
 *
 * Interface = Contract
 *
 * Example:
 *
 *      Payment System Interface
 *
 *      • pay()
 *
 * Implementations:
 *
 *      • UPI Payment
 *      • Credit Card Payment
 *      • PayPal Payment
 *
 * All must follow the same rule:
 *
 *      implement pay()
 *
 * But each works differently internally.
 *
 * ============================================================
 * Difference: Abstract Class vs Interface
 * ============================================================
 *
 * Abstract Class:
 *
 *      • Can have both normal + pure virtual functions
 *      • Can have data members
 *      • Partial implementation allowed
 *
 * Interface (C++ style):
 *
 *      • Only pure virtual functions
 *      • No state (or minimal state)
 *      • Fully abstract behavior contract
 *
 * ============================================================
 * Under The Hood
 * ============================================================
 *
 * Pure virtual functions are stored in vtables.
 * Abstract classes still have vtables, but:
 *
 *      • Missing implementations are resolved
 *        in derived classes.
 *
 * When calling:
 *
 *      Animal* a = new Dog();
 *      a->speak();
 *
 * Runtime system uses:
 *
 *      vptr → vtable → correct override function
 *
 * ============================================================
 * Important Notes
 * ============================================================
 *
 * 1. You cannot instantiate abstract classes.
 *
 * 2. Derived classes MUST override pure virtual
 *    functions.
 *
 * 3. If not overridden, derived class remains abstract.
 *
 * 4. Interfaces are abstract classes with only
 *    pure virtual functions.
 *
 * 5. Virtual destructors are recommended in interfaces.
 *
 * ============================================================
 * Summary
 * ============================================================
 *
 * Pure Virtual Function:
 *      A function with no implementation in base class.
 *
 * Abstract Class:
 *      A class that contains at least one pure virtual function.
 *
 * Interface:
 *      A special form of abstract class used to define
 *      only behavior (contract) with no implementation.
 *
 * Purpose:
 *      To enforce a rule that derived classes must follow
 *      a specific structure and implement required functions.
 *
 * Result:
 *      Enables clean design, polymorphism, and loose coupling.
*/

#include<iostream>

class Vehicle
{

    public:
        virtual float getMilage() = 0;
};

class HondaSwift: public Vehicle
{
    private:
    float m_mileage = 16.23f;

    public:
        float getMilage()
        {
            return m_mileage;
        }
};

class ToyotaFortuner: public Vehicle
{
    private:
    float m_mileage = 7.1f;

    public:
        float getMilage()
        {
            return m_mileage;
        }
};


void printMileage(Vehicle* vehicle) 
{
    std::cout<<"Mileage is : "<<vehicle->getMilage()<<std::endl;
}

int main() 
{
    HondaSwift* my_car = new HondaSwift();
    ToyotaFortuner* my_fortuner = new ToyotaFortuner();

    printMileage(my_car);
    printMileage(my_fortuner);

    return 0;
}