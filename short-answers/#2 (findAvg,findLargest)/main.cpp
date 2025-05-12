#include <iostream>

using namespace std;

double findAverage(int [], int);
int findLargest(int [], int);

int main() {
    const int SIZE = 8;
    int arr[SIZE] = {22,34,67,43,56,87,89,64};
    double average = 0;
    int max;

    max = findLargest(arr,SIZE);
    average = findAverage(arr, SIZE);
    cout << "\nLargest value is : " << max;
    cout << "\nAverage is : " << average;

    return 0;
};

double findAverage(int array[], int size) {
    // Total sum of all the elements
    double sum = 0;

    // Loop over all elements and add the value to sum`
    for(int i = 0; i < size; i++) {
        sum += array[i];
    };

    // Total Sum / Size == average
    return sum / size;
};

int findLargest(int array[], int size) {
    // Start at the 0th index
    int largest = array[0];

    // Loop over all elements after 0th index
    for(int i = 1; i < size; i++) {
        // If the currente element
        if(array[i] > largest)
            largest = array[i];
    };

    // Return the largest
    return largest;
};