#include <iostream>
#include <cmath>
using namespace std;

// declaring the presentation project
void calculatorIntro();

// declaring function's operation
double addition(double a, double b);
double subtraction(double a, double b);
double multiplication(double a, double b);

int main()
{
    calculatorIntro();

    int operationType;

    cout << "Choose the operation's type you want to use\n";
    cout << "1. Simple Operation (+, -, *, /)\n";
    cout << "2. Complex Operation (square root, power...)\n";
    cin >> operationType;

    while (operationType != 1 && operationType != 2)
    {
        cout << "Enter a valid input (1 or 2): ";
        cin >> operationType;
    }

    switch (operationType)
    {
    case 1:
    {
        double num1, num2;
        int operationSign;
        char endProgram;

        do
        {
            cout << "\nEnter your first and second number: ";
            cin >> num1 >> num2;

            cout << "\nChoose the operation sign.\n"
                 << "1. Addition\n"
                 << "2. Subtraction\n"
                 << "3. Multiplication\n"
                 << "4. Division\n"
                 << "5. Quit\n";
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
                if (num2 != 0)
                    cout << "Result = " << num1 / num2 << endl;
                else
                    cout << "Error: Division by zero is impossible!" << endl;
                break;
            case 5:
                return 0;
            default:
                cout << "Enter a valid choice!" << endl;
            }

            cout << "\nIf you want to quit the program write Q or q: ";
            cin >> endProgram;

        } while (endProgram != 'Q' && endProgram != 'q');

        break;
    }
    case 2:
    	{
    		double base, exponent;
    		int complexChoice;
    		
    		cout << "\nComplex Operations Menu\n";
    		cout << "1. Power (base^exponent)\n";
    		cout << "2. Quit\n";
    		cin >> complexChoice;
    		
    		
    		switch (complexChoice)
    		{
    			case 1:
    				cout << "Enter the base: ";
    				cin >> base;
    				
    				cout << "Enter the exponent: ";
    				cin >> exponent;
    				
    				cout << "Result = " << pow(base,exponent) << endl;
    				break;
    				
    			case 2:
    				return 0;
    				
    			default:
    				cout << "Enter a valid choice!" << endl;
    				
			}
		}
		break;
        
    }

    return 0;
}

// ===== FUNCTIONS =====

void calculatorIntro()
{
    cout << "===== SIMPLE CALCULATOR =====\n"
         << "Choose an operation and enter two numbers.\n"
         << "=============================\n";
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
