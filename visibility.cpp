/**
 * ============================================================
 * VISIBILITY (ACCESS SPECIFIERS) IN C++
 * ============================================================
 *
 * Visibility:
 * ------------------------------------------------------------
 * - Visibility determines who can access the members
 *   (variables and functions) of a class.
 *
 * - C++ provides access control through access
 *   specifiers.
 *
 * - Access specifiers help implement:
 *
 *      1. Encapsulation
 *      2. Data Hiding
 *      3. Security
 *      4. Controlled Access
 *
 * - Visibility is one of the core concepts of
 *   Object-Oriented Programming (OOP).
 *
 * ============================================================
 * Why Visibility is Needed
 * ============================================================
 *
 * Consider:
 *
 * class BankAccount
 * {
 * public:
 *      double balance;
 * };
 *
 * BankAccount acc;
 * acc.balance = -100000;
 *
 * Problem:
 *
 *      Invalid data can be assigned.
 *
 * Solution:
 *
 *      Hide data using private members and
 *      provide controlled access through
 *      public functions.
 *
 * ============================================================
 * Access Specifiers in C++
 * ============================================================
 *
 * C++ provides three access specifiers:
 *
 *      1. public
 *      2. protected
 *      3. private
 *
 * ============================================================
 * 1. Public Access Specifier
 * ============================================================
 *
 * Members declared as public:
 *
 *      • Accessible inside the class.
 *      • Accessible outside the class.
 *      • Accessible in derived classes.
 *
 * Example:
 *
 * class Student
 * {
 * public:
 *      int rollNo;
 *
 *      void display()
 *      {
 *      }
 * };
 *
 * Student s;
 *
 * s.rollNo = 101;
 * s.display();
 *
 * Both accesses are valid.
 *
 * Public members form the interface
 * of a class.
 *
 * ============================================================
 * 2. Private Access Specifier
 * ============================================================
 *
 * Members declared as private:
 *
 *      • Accessible only inside the class.
 *      • NOT accessible outside the class.
 *      • NOT directly accessible by
 *        derived classes.
 *
 * Example:
 *
 * class Student
 * {
 * private:
 *      int marks;
 * };
 *
 * Student s;
 *
 * s.marks = 90;
 *
 * Error:
 *
 *      marks is private.
 *
 * ============================================================
 * Accessing Private Members
 * ============================================================
 *
 * Private members are usually accessed
 * through public member functions.
 *
 * Example:
 *
 * class Student
 * {
 * private:
 *      int marks;
 *
 * public:
 *
 *      void setMarks(int m)
 *      {
 *          marks = m;
 *      }
 *
 *      int getMarks()
 *      {
 *          return marks;
 *      }
 * };
 *
 * Student s;
 *
 * s.setMarks(95);
 *
 * cout << s.getMarks();
 *
 * This provides controlled access.
 *
 * ============================================================
 * 3. Protected Access Specifier
 * ============================================================
 *
 * Members declared as protected:
 *
 *      • Accessible inside the class.
 *      • Accessible inside derived classes.
 *      • NOT accessible through objects.
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
 * Dog d;
 *
 * d.age = 5;
 *
 * Error:
 *
 *      age is protected.
 *
 * ============================================================
 * Comparison of Access Specifiers
 * ============================================================
 *
 *                      Inside   Outside   Derived
 * ------------------------------------------------
 * public                 Yes      Yes       Yes
 *
 * protected              Yes      No        Yes
 *
 * private                Yes      No        No
 *
 * ============================================================
 * Default Visibility in Class
 * ============================================================
 *
 * Example:
 *
 * class Test
 * {
 *      int x;
 * };
 *
 * Here:
 *
 *      x is private.
 *
 * Rule:
 *
 *      Default access level in class
 *      is private.
 *
 * ============================================================
 * Default Visibility in Structure
 * ============================================================
 *
 * Example:
 *
 * struct Test
 * {
 *      int x;
 * };
 *
 * Here:
 *
 *      x is public.
 *
 * Rule:
 *
 *      Default access level in struct
 *      is public.
 *
 * ============================================================
 * Visibility and Encapsulation
 * ============================================================
 *
 * Encapsulation means:
 *
 *      Binding data and functions together
 *      while hiding internal implementation.
 *
 * Example:
 *
 * class BankAccount
 * {
 * private:
 *      double balance;
 *
 * public:
 *      void deposit(double amount)
 *      {
 *      }
 *
 *      void withdraw(double amount)
 *      {
 *      }
 * };
 *
 * Users interact through public functions
 * without directly modifying balance.
 *
 * ============================================================
 * Friend Functions and Visibility
 * ============================================================
 *
 * Friend functions can access private and
 * protected members.
 *
 * Example:
 *
 * class Test
 * {
 * private:
 *      int x;
 *
 *      friend void show(Test&);
 * };
 *
 * void show(Test& t)
 * {
 *      t.x = 10;
 * }
 *
 * Friend functions bypass normal
 * visibility restrictions.
 *
 * ============================================================
 * Visibility in Inheritance
 * ============================================================
 *
 * Consider:
 *
 * class Base
 * {
 * public:
 *      int a;
 *
 * protected:
 *      int b;
 *
 * private:
 *      int c;
 * };
 *
 * ------------------------------------------------------------
 * Public Inheritance
 * ------------------------------------------------------------
 *
 * class Derived : public Base
 * {
 * };
 *
 * Result:
 *
 *      a → public
 *      b → protected
 *      c → inaccessible
 *
 * ------------------------------------------------------------
 * Protected Inheritance
 * ------------------------------------------------------------
 *
 * class Derived : protected Base
 * {
 * };
 *
 * Result:
 *
 *      a → protected
 *      b → protected
 *      c → inaccessible
 *
 * ------------------------------------------------------------
 * Private Inheritance
 * ------------------------------------------------------------
 *
 * class Derived : private Base
 * {
 * };
 *
 * Result:
 *
 *      a → private
 *      b → private
 *      c → inaccessible
 *
 * ============================================================
 * Real World Analogy
 * ============================================================
 *
 * Think of a smartphone:
 *
 * Public:
 *      Buttons visible to users.
 *
 * Protected:
 *      Internal controls accessible to
 *      manufacturers and developers.
 *
 * Private:
 *      Internal circuitry hidden from
 *      everyone except the device itself.
 *
 * ============================================================
 * Advantages of Proper Visibility
 * ============================================================
 *
 * 1. Data Hiding
 *
 *      Protects sensitive information.
 *
 * 2. Security
 *
 *      Prevents unauthorized modification.
 *
 * 3. Maintainability
 *
 *      Internal implementation can change
 *      without affecting users.
 *
 * 4. Encapsulation
 *
 *      Keeps data and behavior together.
 *
 * 5. Controlled Access
 *
 *      Validation can be performed before
 *      modifying data.
 *
 * ============================================================
 * Best Practices
 * ============================================================
 *
 * 1. Keep data members private.
 *
 * 2. Expose only necessary functions
 *    as public.
 *
 * 3. Use protected only when derived
 *    classes need access.
 *
 * 4. Minimize direct access to internal
 *    implementation details.
 *
 * ============================================================
 * Summary
 * ============================================================
 *
 * Visibility:
 *      Determines who can access class
 *      members.
 *
 * Public:
 *      Accessible everywhere.
 *
 * Protected:
 *      Accessible inside the class and
 *      derived classes.
 *
 * Private:
 *      Accessible only inside the class.
 *
 * Default in Class:
 *      Private
 *
 * Default in Struct:
 *      Public
 *
 * Purpose:
 *      Data Hiding, Encapsulation,
 *      Security, and Controlled Access.
 *
 * Visibility is the foundation of
 * encapsulation in C++.
 *
 * ============================================================
 */

#include <iostream>

class Router
{
public:
    int version = 4;

protected:
    const char *MAC = "AA:F3:23:66:98:FF";

private:
    const char *IP = "192.11.3.3";

public:
    void setIP(const char *newIP)
    {
        IP = newIP;
    }

    const char* getIp()
    {
        return IP;
    }
};

class Modem: public Router
{
    public:
    void setConfig()
    {
        std::cout<<"Settuping up configuration for MAC Address: "<<MAC<<std::endl;
    }
};

int main()
{
    Router router;
    std::cout<<router.getIp()<<std::endl;

    router.setIP("11.12.45.225");
    std::cout<<router.getIp()<<std::endl;
    
    Modem modem;
    modem.setConfig();
    
    return 0;
}