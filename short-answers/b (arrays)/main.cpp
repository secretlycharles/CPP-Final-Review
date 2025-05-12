#include <iostream>

using namespace std;

// Define func prototype
void handleArr(int array[], int size);

// Main func
int main() {
    const int SIZE = 5;
    int arr[SIZE] = {23, 53, 12, 64, 34};

    // Call Array Handler
    handleArr(arr, SIZE);

    return 0;
};

void handleArr(int array[], int size) {
    // Print all elements of the array
    for(int i = 0; i < size; i++) {
        cout << array[i] << " ";
    };
    cout << endl;
    
    // Find smallest/largest value in the array
    int largest = array[0];
    int smallest = array[0];

    // Start from index 1 because we already declared the first one in the vars above
    for(int i = 1; i < size; i++) {
        // If the current element is larger than largest, replace it with it
        if(array[i] > largest)
            largest = array[i];
        // If the current element is smaller than smallest, replace it with it
        if(array[i] < smallest)
            smallest = array[i];
    };

    // Print out results
    cout << "Largest Number: " << largest << endl;
    cout << "Smallest Number: " << smallest << endl;

    // Find sum and return all sum of values or specificed values
    int sum = 0;
    int oddSum = 0;
    int evenSum = 0;

    // Loop over area
    for(int i = 0; i < size; i++) {
        // Handle sum by adding all elements to it
        sum += array[i];

        // Check for odd number, dividng it by 2 and it not returning 0 == odd
        if(array[i] % 2 != 0)
            oddSum += array[i];
        
        // Check for even number, dividing it by 2 and it returning 0 == even
        if(array[i] % 2 == 0)
            evenSum += array[i];
    };

    // Print out numbers
    cout << "Sum: " << sum << endl;
    cout << "Odd Sum: " << oddSum << endl;
    cout << "Even Sum: " << evenSum << endl;

    int target = 64;
    bool found = false;
    // We must search linearly so we must go through each element
    for(int i = 0; i < size; i++) {
        if(array[i] == target)
            found = true;
    };

    // Print result
    if(found)
        cout << "Found target '" << target << "' within the array" << endl;
    else
        cout << "Failed to find target within the array" << endl;

    // Find average and return average of all values
    double avg = 0;
    sum = 0; // (since this already exists in the scope, don't declare but just redefine it with 0)

    // Get sum
    for(int i = 0; i < size; i++) {
        sum += array[i];
    };

    // Calculate average (we must cast to get double, or just define the sum as a double)
    avg = static_cast<double>(sum) / size;

    cout << "Average of all values is: " << avg << endl;
};