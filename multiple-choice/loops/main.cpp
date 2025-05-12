#include <iostream>

using namespace std;

int main() {
    int ten = 10;

    // while(ten--) runs as long as ten is not 0
    // ten is printed after being decremented, so output is 9 through 0
    while (ten--) {
        cout << ten << " ";
    }
    cout << endl;

    // Simple for loop
    // Structure: Initialization; Condition; Increment
    // Prints values from 0 to 9
    for (int i = 0; i < 10; i++) {
        cout << i << " ";
    }
    cout << endl;

    // do-while loop
    int twenty = 20;

    // A do-while loop always runs at least once.
    // Here, twenty is printed first, then decremented.
    // Loop runs until twenty becomes -1 (when twenty-- evaluates to false)
    do {
        cout << twenty << " ";
    } while (twenty--);
    cout << endl;

    // Nested loop
    int thirty;
    int fourty = 40;
    
   // Outer do-while loop runs at least once
    do {
        thirty = 30; // reset `thirty` each outer iteration

        // Inner while loop: counts down from 3 to 0
        while (thirty--) {
            cout << thirty << " ";
        }

        cout << "| " << fourty << endl; // marks end of one outer loop iteration
    } while (fourty--);

    return 0;
}
