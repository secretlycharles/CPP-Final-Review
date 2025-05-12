#include <iostream>

using namespace std;

// Class definition
class Obj {
    // Used to prevent the field being accessed outside the scope
    private:
        // Define a field in the class
        string name;
    // Used to allow access outside of the scope
    public:
        // No Arg Constructor
        Obj() {
            // Setting field to Charles Mendez
            name = "Charles Mendez";
        };

        // 1 Arg Constructor (this is overloading)
        Obj(string n) {
            // Setting field to name
            name = n;
            // this->name = n; works too, it seperates the class & arg
            // for example this->name is different from name if passed in from the args
        };

        // Defining a method/func
        void printName() {
            // Priniting out name field (this is accessible because name exists in the scope/class)
            cout << "Name: " << name << endl; 
        };
};

int main() {
    Obj o1;                     // default constructor
    Obj o2("Mendez Charles");   // overloaded constructor

    o1.printName();  // Name: Charles Mendez
    o2.printName();  // Name: Mendez Charles

    return 0;
}