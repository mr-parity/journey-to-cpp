/**
 * ============================================================
 * MUTABLE KEYWORD IN C++
 * ============================================================
 *
 * The 'mutable' keyword is a special C++ specifier that
 * removes const restrictions from a specific object member
 * or lambda closure object.
 *
 * Depending on where it is used, mutable has two meanings:
 *
 *      1. mutable Data Members
 *      2. mutable Lambda Expressions
 *
 * Although both use the same keyword, they solve
 * different problems.
 *
 * ============================================================
 * PART 1 : MUTABLE DATA MEMBERS
 * ============================================================
 *
 * Normally, a const member function cannot modify any
 * non-static data member of an object.
 *
 * Example:
 *
 * class Logger
 * {
 * private:
 *
 *      int accessCount = 0;
 *
 * public:
 *
 *      void print() const
 *      {
 *          accessCount++; // Error
 *      }
 * };
 *
 * Result:
 *
 *      Compilation Error
 *
 * Reason:
 *
 *      print() is const.
 *
 *      Therefore the compiler treats the object
 *      as read-only inside the function.
 *
 * ============================================================
 * BASIC SYNTAX
 * ============================================================
 *
 *      mutable data_type variable;
 *
 * Example:
 *
 *      mutable int accessCount;
 *
 * ============================================================
 * USING MUTABLE DATA MEMBERS
 * ============================================================
 *
 * Example:
 *
 * class Logger
 * {
 * private:
 *
 *      mutable int accessCount = 0;
 *
 * public:
 *
 *      void print() const
 *      {
 *          accessCount++;
 *      }
 * };
 *
 * Result:
 *
 *      Allowed
 *
 * Even though print() is const,
 * accessCount may still be modified.
 *
 * ============================================================
 * WHY DOES MUTABLE EXIST?
 * ============================================================
 *
 * Some members are implementation details rather
 * than actual object state.
 *
 * Examples:
 *
 *      • Cache Values
 *      • Statistics
 *      • Logging Information
 *      • Access Counters
 *      • Performance Metrics
 *      • Mutex Objects
 *
 * These values may change internally while the
 * logical meaning of the object remains unchanged.
 *
 * ============================================================
 * MUTABLE AND CONST OBJECTS
 * ============================================================
 *
 * mutable members may also be modified through
 * const objects.
 *
 * Example:
 *
 * class Test
 * {
 * public:
 *
 *      mutable int counter = 0;
 * };
 *
 * int main()
 * {
 *      const Test t;
 *
 *      t.counter++;
 * }
 *
 * Result:
 *
 *      Allowed
 *
 * Because counter is mutable.
 *
 * ============================================================
 * WHAT HAPPENS INTERNALLY?
 * ============================================================
 *
 * Consider:
 *
 * class Example
 * {
 * private:
 *
 *      int value;
 *
 * public:
 *
 *      void show() const;
 * };
 *
 * The compiler conceptually treats:
 *
 *      this
 *
 * as:
 *
 *      const Example* const this;
 *
 * Therefore:
 *
 *      value = 10;
 *
 * is illegal.
 *
 * However:
 *
 *      mutable int value;
 *
 * tells the compiler:
 *
 *      "Ignore const restrictions
 *       for this member."
 *
 * ============================================================
 * MUTABLE AND CACHING
 * ============================================================
 *
 * One of the most common uses.
 *
 * Example:
 *
 * class Database
 * {
 * private:
 *
 *      mutable bool cacheValid = false;
 *      mutable std::string cache;
 *
 * public:
 *
 *      std::string getData() const;
 * };
 *
 * Updating cache data does not change the
 * logical state of the database.
 *
 * Therefore mutable is appropriate.
 *
 * ============================================================
 * MUTABLE AND LAZY EVALUATION
 * ============================================================
 *
 * Example:
 *
 * class ExpensiveCalculation
 * {
 * private:
 *
 *      mutable bool calculated = false;
 *      mutable int result = 0;
 *
 * public:
 *
 *      int getResult() const;
 * };
 *
 * The value is computed only when needed.
 *
 * Subsequent calls reuse the cached result.
 *
 * ============================================================
 * MUTABLE AND THREAD SAFETY
 * ============================================================
 *
 * One of the most important real-world uses.
 *
 * Example:
 *
 * class Counter
 * {
 * private:
 *
 *      mutable std::mutex mtx;
 *      int count;
 *
 * public:
 *
 *      int getCount() const
 *      {
 *          std::lock_guard<std::mutex> lock(mtx);
 *          return count;
 *      }
 * };
 *
 * Locking a mutex modifies the mutex object.
 *
 * Without mutable:
 *
 *      Compilation Error
 *
 * With mutable:
 *
 *      Allowed
 *
 * ============================================================
 * LOGICAL CONSTNESS
 * ============================================================
 *
 * mutable supports the concept of:
 *
 *      Logical Constness
 *
 * Meaning:
 *
 *      The object's visible behavior
 *      remains unchanged.
 *
 * Even if:
 *
 *      Some internal bookkeeping data
 *      changes behind the scenes.
 *
 * ============================================================
 * PART 2 : MUTABLE LAMBDA EXPRESSIONS
 * ============================================================
 *
 * mutable has an entirely different meaning
 * when used with lambda expressions.
 *
 * By default:
 *
 *      Lambda captures by value are treated
 *      as const inside operator().
 *
 * Example:
 *
 *      int x = 10;
 *
 *      auto fn = [x]()
 *      {
 *          x++; // Error
 *      };
 *
 * Result:
 *
 *      Compilation Error
 *
 * ============================================================
 * WHY DOES THIS HAPPEN?
 * ============================================================
 *
 * A lambda is transformed into an anonymous class.
 *
 * Conceptually:
 *
 *      auto fn = [x]() {};
 *
 * becomes:
 *
 *      class Anonymous
 *      {
 *      private:
 *
 *          int x;
 *
 *      public:
 *
 *          void operator()() const
 *          {
 *          }
 *      };
 *
 * Notice:
 *
 *      operator() is const by default.
 *
 * Therefore captured-by-value variables
 * become read-only.
 *
 * ============================================================
 * MUTABLE LAMBDA
 * ============================================================
 *
 * Syntax:
 *
 *      [capture]() mutable
 *      {
 *      }
 *
 * Example:
 *
 *      int x = 10;
 *
 *      auto fn =
 *      [x]() mutable
 *      {
 *          x++;
 *      };
 *
 * Result:
 *
 *      Allowed
 *
 * ============================================================
 * IMPORTANT BEHAVIOR
 * ============================================================
 *
 * mutable modifies ONLY the lambda's copy.
 *
 * Example:
 *
 *      int x = 10;
 *
 *      auto fn =
 *      [x]() mutable
 *      {
 *          x++;
 *          std::cout << x;
 *      };
 *
 *      fn();
 *
 *      std::cout << x;
 *
 * Output:
 *
 *      11
 *      10
 *
 * Original x remains unchanged.
 *
 * The lambda modifies its own captured copy.
 *
 * ============================================================
 * CAPTURE BY REFERENCE
 * ============================================================
 *
 * Example:
 *
 *      int x = 10;
 *
 *      auto fn =
 *      [&x]()
 *      {
 *          x++;
 *      };
 *
 * mutable is unnecessary here.
 *
 * Because:
 *
 *      The lambda already has access
 *      to the original variable.
 *
 * ============================================================
 * DATA MEMBER MUTABLE vs LAMBDA MUTABLE
 * ============================================================
 *
 * Data Member mutable:
 *
 *      Removes const restrictions from
 *      specific class members.
 *
 * Example:
 *
 *      mutable int counter;
 *
 * ------------------------------------------------------------
 *
 * Lambda mutable:
 *
 *      Removes const qualification from
 *      the lambda's operator().
 *
 * Example:
 *
 *      [x]() mutable
 *      {
 *          x++;
 *      }
 *
 * ------------------------------------------------------------
 *
 * Same keyword.
 *
 * Different purpose.
 *
 * ============================================================
 * IMPORTANT RULES
 * ============================================================
 *
 * 1. mutable data members may be modified
 *    inside const member functions.
 *
 * 2. mutable data members may be modified
 *    through const objects.
 *
 * 3. mutable lambdas allow modification
 *    of captured-by-value variables.
 *
 * 4. mutable lambdas modify only their
 *    internal copies.
 *
 * 5. mutable should not be used to
 *    bypass proper const correctness.
 *
 * ============================================================
 * SUMMARY
 * ============================================================
 *
 * mutable Data Member:
 *
 *      Removes const restrictions for a
 *      specific member variable.
 *
 * Common Uses:
 *
 *      • Caches
 *      • Counters
 *      • Statistics
 *      • Logging
 *      • Mutexes
 *
 * ------------------------------------------------------------
 *
 * mutable Lambda:
 *
 *      Allows modification of variables
 *      captured by value.
 *
 *      Changes only the lambda's copy.
 *
 * ------------------------------------------------------------
 *
 * Philosophy:
 *
 *      "Certain implementation details may
 *       change internally even when an object
 *       or operation appears logically const."
 *
 * ============================================================
 */

#include <iostream>
#include <string>

class GameMap
{
private:
    const std::string m_current_map = "Los Angeles";
    mutable int access_count = 0;

public:
    const std::string &getCurrentMapName() const
    {
        access_count++;
        return m_current_map;
    }
};

int main()
{
    // classes
    GameMap *map = new GameMap();

    std::cout << map->getCurrentMapName() << std::endl;
    delete map;

    // lambdas
    int x = 10;

    auto fn =
        [x]() mutable
    {
        x++;
        std::cout << x<<std::endl;
    };

    fn();

    std::cout << x<<std::endl;

    return 0;
}