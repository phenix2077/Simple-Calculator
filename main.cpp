// CALCULATOR

#include <iostream>
using namespace std;

// declaring the presentation project
void calculatorIntro();

// declaring function's operation
double addition(double a, double b);
double subtraction(double a, double b);
double multiplication(double a, double b);

int main()
{
    // The main program.
    calculatorIntro();
    double num1, num2;
    int operationSign;
    char endProgram;
    do
    {
		cout << "\nEnter your first and second number." << endl;
		cin >> num1 >> num2;
        cout << "\nChoose the operation sign.\n"
             << "1. Addition  2. Subtraction  3. Multiplication  4. Division  5. Quit" << endl
			 << endl;
		cin >> operationSign;
        switch (operationSign)
        {
        case 1:
            cout << "Result = " << addition(num1, num2) << endl;
            break;
		case 2:
			cout << "Result = " << subtraction(num1, num2) << endl;
			break;
		case 3:
			cout << "Result = " << multiplication(num1, num2) << endl;
			break;
		case 4: 
			if(num2 != 0)
				cout << "Result = " << num1 / num2 << endl;
			else
				cout << "\nError: Division by zero is impossible!" << endl;
			break;
		case 5:
			return 0;
		default :
			cout << "enter a valid choise!" << endl;
			break;
        }
		cout << "\n\nIf you want to quit the program write Q or q. If not, write anything else"
			 << endl;
		cin >> endProgram;

    } while (endProgram != 'Q' && endProgram != 'q');

    return 0;
}

void calculatorIntro()
{
    cout << "This is a CALCULATOR.\n\n"
         << "This is how to use this program:\n"
         << "- First choose the operation sign (+, -, *, /...).\n"
         << "- Then input the first and the second number.\n"
         << "When you are done with the calculation, write Q or q to quit the program.\n\n"
         << "Enjoy the program." << endl;
}

double addition(double a, double b)
{
    return a + b;
}
double subtraction(double a, double b)
{
    return a - b;
}
double multiplication(double a, double b)
{
    return a * b;
}
