#include <iostream>

int main() {
    const int size = 15;
    int inputArray[size];

    // Part (a): Taking 15 integer values as input from the user and storing them in an array
    std::cout << "Enter 15 integer values:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << "Enter value at index " << i << ": ";
        std::cin >> inputArray[i];
    }

    // Part (a): Printing the values stored in the array on the screen
    std::cout << "Values stored in the array:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << inputArray[i] << " ";
    }
    std::cout << std::endl;

    // Part (b): Checking if a user-entered number is present in the array
    int userNumber;
    std::cout << "Enter a number to check its presence in the array: ";
    std::cin >> userNumber;

    bool numberFound = false;
    int index;

    for (int i = 0; i < size; ++i) {
        if (inputArray[i] == userNumber) {
            numberFound = true;
            index = i;
            break;
        }
    }

    if (numberFound) {
        std::cout << "The number found at index " << index << std::endl;
    } else {
        std::cout << "Number not found in this array." << std::endl;
    }

    // Part (c): Creating another array, copying elements in reverse order, and printing the new array
    int reverseArray[size];

    for (int i = 0, j = size - 1; i < size; ++i, --j) {
        reverseArray[i] = inputArray[j];
    }

    std::cout << "Values in the new array (in reverse order):" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << reverseArray[i] << " ";
    }
    std::cout << std::endl;

    // Part (d): Calculating the sum and product of all elements in the array
    int sum = 0;
    long long product = 1;

    for (int i = 0; i < size; ++i) {
        sum += inputArray[i];
        product *= inputArray[i];
    }

    std::cout << "Sum of all elements: " << sum << std::endl;
    std::cout << "Product of all elements: " << product << std::endl;

    return 0;
}
