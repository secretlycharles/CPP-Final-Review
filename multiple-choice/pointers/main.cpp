#include <iostream>

using namespace std;

int main() {
    // This is an integer
    int a = 42069;
    cout << "A: " << a << endl;

    // This is referencing a pointer value
    int *b = &a;
    cout << "B: " << b << endl;

    // This is dereferencing a pointer
    int c = *b;
    cout << "C: " << c << endl;

    // We can also define a value
    *b = 1337;
    cout << "B: " << *b << endl;

    // Example output
    // A: 42069 (Value of A)
    // B: 0x7ffeeed1acdc (Memory Address Value of A)
    // C: 42069 (Deferences A Pointer to get Value at memory address)
    // B: 1337 (Setting the value of the referencing pointer value)
};