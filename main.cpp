#include <iostream>
#include <math.h>

int main()
{
    char op;
    double firstOperand;
    double secondOperand;

    do
    {
        std::cout << "Enter an operator (+,-,/,*,^)\n";
        std::cin >> op;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    } while (op != '+' && op != '-' && op != '/' && op != '*' && op != '^');

    std::cout << "Enter 2 operands (any int)\n";
    std::cin >> firstOperand >> secondOperand;

    while (!std::cin)
    {
        std::cout << "Thats not an int, please enter an integer: \n";
        std::cin.clear();
        std::cin.ignore();
        std::cin >> firstOperand >> secondOperand;
    }

    switch (op)
    {
    case '+':
        std::cout << firstOperand << " added to " << secondOperand << " is equal to: " << firstOperand + secondOperand<<"\n";
        break;
    case '-':
        std::cout << firstOperand << " subtracted from " << secondOperand << " is equal to: " << firstOperand - secondOperand << "\n";
        break;
    case '/':
        std::cout << firstOperand << " divided by " << secondOperand << " is equal to: " << firstOperand / secondOperand << "\n";
        break;
    case '*':
        std::cout << firstOperand << " multiplied by " << secondOperand << " is equal to: " << firstOperand * secondOperand << "\n";
        break;
    case '^':
        std::cout << firstOperand << " raised to " << secondOperand << " is equal to: " << pow(firstOperand, secondOperand) << "\n";
        break;
    default:
        std::cout << "Error\n";
        break;

    }
}

