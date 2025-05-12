#include <iostream>
#include <string>

using namespace std;

// Function prototypes
// type (void), name (printName), (args: first is a string, last is a string)
void printName(string first, string last);

// type (int), name (add), (args: a is an integer, b is an integer)
int add(int a, int b);

int main() {
    // Call defined function
    printName("Charles", "Mendez");

    // Call defined function
    int sum = add(420, 69);

    // Print result
    cout << "Sum: " << sum << endl;

    return 0;
};

// Function definition based on the protoype above (its literally 1 to 1 with argument names but with the block and code)
void printName(string first, string last) {
    cout << "First Name: " << first << endl;
    cout << "Last Name: " << last << endl;
};

// Function definition based on the protoype above (its literally 1 to 1 with argument names but with the block and code)
int add(int a, int b) {
    return a + b;
};