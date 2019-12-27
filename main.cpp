#include <iostream>
#include <stdio.h>
#include <math.h>

void clearKeyboardBuffer(void);

int main()
{
	char op;
	double firstOperand;
	double secondOperand;

	do
	{
		std::cout << "Enter an operator (+,-,/,*,^)\n";
		std::cin >> op;
		clearKeyboardBuffer();
	} while (op != '+' && op != '-' && op != '/' && op != '*'&&op != '^');
	
	std::cout << "Enter 2 operands (any int)\n";
	std::cin >> firstOperand >> secondOperand;
	
	switch (op)
	{
	case '+': 
		std::cout << firstOperand << " added to " << secondOperand << " is equal to: " << firstOperand + secondOperand;
		break;
	case '-':
		std::cout << firstOperand << " subtracted from " << secondOperand << " is equal to: " << firstOperand - secondOperand;
		break;
	case '/':
		std::cout << firstOperand << " divided by " << secondOperand << " is equal to: " << firstOperand / secondOperand;
		break;
	case '*':
		std::cout << firstOperand << " multiplied by " << secondOperand << " is equal to: " << firstOperand * secondOperand;
		break;
	case '^':
		std::cout << firstOperand << " raised to " << secondOperand << " is equal to: " << pow(firstOperand,secondOperand);
	}
}

void clearKeyboardBuffer(void)
{
	char ch;

	scanf_s("%c", &ch,1);

	while (ch != '\n' && ch != '\0')
	{
		scanf_s("%c", &ch, 1);
	}
}