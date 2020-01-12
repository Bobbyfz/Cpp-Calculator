#include <iostream>
#include <math.h>

void operate(char op, double firstOperand, double secondOperand);
int keepGoing(void);

int main()
{
    char op;
    double firstOperand;
    double secondOperand;

    do
    {

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
            std::cout << "Thats not an int, please enter an integer (both numbers have been cleared): \n";
            std::cin.clear();
            std::cin.ignore();
            std::cin >> firstOperand >> secondOperand;
        }

        operate(op, firstOperand, secondOperand);
        keepGoing();

    } while (keepGoing != 0);
}

void operate(char op, double firstOperand, double secondOperand)
{

    switch (op)
    {
    case '+':
        std::cout << firstOperand << " added to " << secondOperand << " is equal to: " << firstOperand + secondOperand << "\n";
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

int keepGoing(void)
{
    char choice;

    do
    {

    std::cout << "Would you like to calculate again? (y/n)\n";
    std::cin >> choice;

    } while (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N');

    if (choice == 'y' || choice == 'Y')
    {
        return 1;
    }
    else if (choice == 'n' || choice == 'N')
    {
        exit(0);
    }
    
}
