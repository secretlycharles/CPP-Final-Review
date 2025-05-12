#include <iostream>

using namespace std;

int main() {
    int a = 69;
    int b = 69;
    int c = 420;

    // Basic if statement
    if(a == b) {
        cout << "A is equal to B" << endl;
    };

    // Basic If else
    if (a == c) {
        // If the condition a == c is true, then the if statement will follow here
        cout << "A is equal to C" << endl;
    } else {
        // Otherwise, if all conditons above fail. The else block will catch it,
        // otherwise if not defined, then itll fall through and continue to execute
        cout << "No if conditions matched so we fell back here" << endl;
    }

    // Nested if-else
    if(a == b) {
        if(a == c) {
            cout << "A is equal to C" << endl;
        } else {
            cout << "No if conditons matched so we fell back here inside of a==b" << endl;
        };
    } else {
        cout << "No if conditions matched so we fell back here" << endl;
    };

    // If, else if, else
    if(a != b) {
        cout << "A is not equal to B" << endl;
    } else if(a == b) {
        cout << "A is equal to B" << endl;
    } else {
        cout << "No if conditions matched so we fell back here" << endl;
    };

    // Switch Statement
    switch(a) {
        case 420:
            cout << "A is equal to 420" << endl;
            break;
        case 69:
            cout << "A is equal to 69" << endl;
            //break; this is required otherwise we'll be dropping until we hit a break, useful if multiple cases support similar code
        case 70:
            cout << "Since we didn't have a break inside of 69, we fell threw here and broke out of the switch" << endl;
            break;
        default:
            cout << "No condition met here for A" << endl;
            break;
    };

    return 0;
};