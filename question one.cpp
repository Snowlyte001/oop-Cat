#include <iostream>

int main() {
    const int limit = 4000000;

    int fib1 = 1;
    int fib2 = 2;
    int evenSum = 0;

    while (fib2 <= limit) {
        if (fib2 % 2 == 0) {
            evenSum += fib2;
        }

        // Generate the next Fibonacci term
        int nextTerm = fib1 + fib2;
        fib1 = fib2;
        fib2 = nextTerm;
    }

    std::cout << "The sum of even-valued terms in the Fibonacci sequence up to " << limit << " is: " << evenSum << std::endl;

    return 0;
}
