#include <iostream>

using namespace std;

// Function prototype
void passByReference(int &a, int &b);
void passByCopy(int a, int b);

int main() {
    int a = 420;
    int b = 69;

    passByCopy(a, b);
    cout << "After passByCopy: A = " << a << ", B = " << b << endl;

    passByReference(a, b);
    cout << "After passByReference: A = " << a << ", B = " << b << endl;

    return 0;
};

void passByReference(int &a, int &b) {
    // a and b are references to the original variables passed in
    // So changes here directly affect the originals in main()

    // Swap reference
    swap(a, b);
};

void passByCopy(int a, int b) {
    // Since we only have copies of the value, when swapping
    // We are only swapping the a & b of the scope
    // Not the one inside of main
    int copy = a;

    a = b;
    b = copy;
};