#include<iostream>
#include"io.h"
#include"calculator.h"

using namespace calculator;
using namespace io;


void runCalculator() {
    double num1 = getNumber();
    char op = getOperator();
    double num2 = getNumber();

    double result;

    switch (op) {
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
        std::cout << "Invalid operator" << std::endl;
        return;
    }

    printResult(result);
}

int main() {
    runCalculator();
    return 0;
}