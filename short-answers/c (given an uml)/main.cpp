#include <iostream>

using namespace std;

// Create Class
class Rectangle {
    // Define private fields
    private:
        double width;
        double length;

    // Impelment constructor and methods
    public:
        Rectangle(double w, double l) {
            width = w;
            length = l;
        };

        double area() {
            return length * width;
        };

        void print() {
            cout << "Width: " << width << ", Length: " << length << ", Area: " << area() << endl;
        };
};

int main() {
    // Create object
    Rectangle obj1(1,1);
    Rectangle obj2(2,2);
    Rectangle obj3(3,3);
    
    // Create array
    Rectangle rects[3] = {obj1, obj2, obj3};

    // Print array
    for(int i = 0; i < 3; i++) {
        rects[i].print();
    };

    return 0;
};