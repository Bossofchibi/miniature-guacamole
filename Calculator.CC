#include <iostream>

int main() {
    double num1, num2, result;
    char op;

    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter an operator (+, -, *, /): ";
    std::cin >> op;
    
    std::cout << "Enter the second number: ";
    std::cin >> num2;

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
            return 1;
    }

  
    std::cout << "Result: " << result << std::endl;

    return 0;
}
