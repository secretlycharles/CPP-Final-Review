#include <iostream>
#include <string>

using namespace std;

void static_variables() {
    static int static_int = 0;
    static_int += 1;
    cout << "Static Int Variable: " << static_int << endl;
};

int main() {
    // These are data types in C++
    // Structure: <type> <name> = <value>;
    // Each line below both declares the variable and defines it with a value

    int number = 0;                        // integer: 32-bit signed
    char character = 'A';                  // char: holds 1 character
    string str = "Hello World";            // string from the C++ Standard Library
    float float_num = 420.6032491f;        // float: 32-bit, ~7 digits of precision (IEEE 754)
    double double_num = 69.4206929492491;  // double: 64-bit, ~15 digits of precision
    bool isTrue = true;                    // boolean: true value
    bool isFalse = false;                  // boolean: false value
    int array[5] = {1, 2, 3, 4, 5};        // integer array with 5 elements
    cout << "Number: " << number << endl;
    cout << "Char: " << character << endl;
    cout << "String: " << str << endl;
    cout << "Float: " << float_num << endl;
    cout << "Double: " << double_num << endl;
    cout << "Bool True: " << isTrue << endl;
    cout << "Bool False:" << isFalse << endl;
    

    number++; // Post-increment: evaluates `number` first (0), then increments to 1
    number--; // Post-decrement: evaluates `number` (1), then decrements to 0

    ++number; // Pre-increment: increments first (to 1), then evaluates as 1
    --number; // Pre-decrement: decrements first (to 0), then evaluates as 0

    // The key difference shows up in expressions like:
    int a = number++; // a = 0, number becomes 1 after
    int b = ++number; // number becomes 2 first, then b = 2
    cout << "A: " << a << endl;
    cout << "B: " << b << endl;

    // Testing out static variables (see function definition below)
    // A static variable inside a function retains its value between calls.
    // It is only initialized once and then "remembers" its value across calls.
    //
    // In `static_variables()`, the first time it's called, `static_int` is 0 and becomes 1.
    // On the second call, it continues from 1, becoming 2.
    //
    // This happens because static variables are stored in the data segment,
    // not re-created on each function call like local variables.
    //
    // Just imagine that the definition of the variable is *skipped* after the first call,
    // and you’re always working with the same instance.
    static_variables();
    static_variables();

    return 0;
};