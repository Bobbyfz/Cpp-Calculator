#include <iostream>
#include <cmath>

using namespace std;

void operate(char op, double firstOperand, double secondOperand);
bool keepGoing(void);

int main()
{
    char op;
    double firstOperand;
    double secondOperand;

    do
    {

        do
        {
            cout << "Enter an operator (+,-,/,*,^)\n";
            cin >> op;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

        } while (op != '+' && op != '-' && op != '/' && op != '*' && op != '^');

        cout << "Enter 2 operands (any int)\n";
        cin >> firstOperand >> secondOperand;

        while (!cin)
        {
            cout << "Thats not an int, please enter an integer (both numbers have been cleared): \n";
            cin.clear();
            cin.ignore();
            cin >> firstOperand >> secondOperand;
        }

        operate(op, firstOperand, secondOperand);

    } while (keepGoing());
}

void operate(char op, double firstOperand, double secondOperand)
{
    
    switch (op)
    {
    case '+':
        cout << firstOperand << " added to " << secondOperand << " is equal to: " << firstOperand + secondOperand << "\n";
        break;
    case '-':
        cout << firstOperand << " subtracted from " << secondOperand << " is equal to: " << firstOperand - secondOperand << "\n";
        break;
    case '/':
        cout << firstOperand << " divided by " << secondOperand << " is equal to: " << firstOperand / secondOperand << "\n";
        break;
    case '*':
        cout << firstOperand << " multiplied by " << secondOperand << " is equal to: " << firstOperand * secondOperand << "\n";
        break;
    case '^':
        cout << firstOperand << " raised to " << secondOperand << " is equal to: " << pow(firstOperand, secondOperand) << "\n";
        break;
    default:
        cout << "Error\n";
        break;

    }
}

bool keepGoing(void)
{
    char choice;

    do
    {

    cout << "Would you like to calculate again? (y/n)\n";
    cin >> choice;

    } while (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N');

    if (choice == 'y' || choice == 'Y')
    {
        return true;
    }
    else if (choice == 'n' || choice == 'N')
    {
        return false;
    }
    
    return false;
}
