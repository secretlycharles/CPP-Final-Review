#include <iostream>

using namespace std;

// define func prototype
void printArr(int array[], int size);

int main() {
    // define array
    int array[5] = {1,2,3,4,5};

    // print array
    printArr(array, 5);
    return 0;
};

// function definition
void printArr(int array[], int size) {
    // loop over all elements and print them
    for(int i = 0; i < size; i++) {
        cout << array[i] << " ";
    };
    // breakline at the end
    cout << endl;
};