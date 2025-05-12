#include <iostream>

using namespace std;

class Rectangle {
    private:
        double width;
        double length;

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