#include <iostream>

int main() {
    double num1, num2, result;
    char op;

    // Take user input for the first number
    std::cout << "Enter the first number: ";
    std::cin >> num1;

    // Take user input for the operator
    std::cout << "Enter an operator (+, -, *, /): ";
    std::cin >> op;

    // Take user input for the second number
    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // Perform the operation based on the operator
    switch (op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        default:
            std::cout << "Invalid operator!" << std::endl;
            return 1;  // Exit the program
    }

    // Display the result
    std::cout << "Result: " << result << std::endl;

    return 0;
}
