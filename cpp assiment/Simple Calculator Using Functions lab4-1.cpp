#include <iostream>
using namespace std;
//addition
double add(double num1, double num2) {
    return num1 + num2;
}
//subtraction
double subtract(double num1, double num2) {
    return num1 - num2;
}
//multiplication
double multiply(double num1, double num2) {
    return num1 * num2;
}
//division
double divide(double num1, double num2) {
    if (num2 != 0) {
        return num1 / num2;
    } else {
        cout << "Error: Division by zero is not allowed." <<"\n";
    }   
}
main() {
    double num1, num2, result;
    char operation;

   cout << "Enter first number: ";
    cin >> num1;

   cout << "Enter operation (+, -, *, /): ";
    cin >> operation;

   cout << "Enter second number: ";
    cin >> num2;

    switch (operation) {
        case '+':
            result = add(num1, num2);
            break;
        case '-':
            result = subtract(num1, num2);
            break;
        case '*':
            result = multiply(num1, num2);
            break;
        case '/':
            result = divide(num1, num2);
            break;
        default:
            cout << "Invalid operation." <<"\n";
    }
    if (operation == '+' || operation == '-' || operation == '*' || (operation == '/' && num2 != 0)) {
        cout << "Result: " << result <<"\n";
    }
}
