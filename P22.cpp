//16-01-25 (Date of experiment)
//This is a simple program to implement 2 1-D arrays.

using namespace std;
#include <iostream>

int main() {
    int size;

    // Ask the user for the size of the arrays
    std::cout << "Enter the size of the arrays: ";
    std::cin >> size;

    // Declare two 1-D arrays
    int* array1 = new int[size];
    int* array2 = new int[size];

    // Input values for array1
    std::cout << "Enter " << size << " values for Array 1:\n";
    for (int i = 0; i < size; ++i) {
        std::cout << "Value " << (i + 1) << ": ";
        std::cin >> array1[i];
    }

    // Input values for array2
    std::cout << "Enter " << size << " values for Array 2:\n";
    for (int i = 0; i < size; ++i) {
        std::cout << "Value " << (i + 1) << ": ";
        std::cin >> array2[i];
    }

    // Print the contents of the arrays
    std::cout << "\nArray 1: ";
    for (int i = 0; i < size; ++i) {
        std::cout << array1[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Array 2: ";
    for (int i = 0; i < size; ++i) {
        std::cout << array2[i] << " ";
    }
    std::cout << std::endl;

    // Free dynamically allocated memory
    delete[] array1;
    delete[] array2;

    return 0;
}