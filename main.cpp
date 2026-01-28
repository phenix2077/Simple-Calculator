#include <iostream>
#include <cmath>
using namespace std;

// declaring functions

double addition(double a, double b);
double subtraction(double a, double b);
double multiplication(double a, double b);
double power(double base, double exp);

int main()
{
    int choice;
    double a, b;		// a and b are number input by the user.
    int num1, num2;		// num1 and num2 are number input by the user for modulus operation
    char quit;

    do
    {
        cout << "\n===== CALCULATOR =====\n\n";
        cout << "1. Addition (+)\n";
        cout << "2. Subtraction (-)\n";
        cout << "3. Multiplication (*)\n";
        cout << "4. Division (/)\n";
        cout << "5. Modulus (a%b)\n";
        cout << "6. Power (a^b)\n";
        cout << "7. Square root (sqrt)\n";
        cout << "8. Cube root (cbrt)\n";
        cout << "9. N-th root\n";
        cout << "10. Quit\n";
        cout << "Choose an operation: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        	cout << "Enter the first and the second number." << endl;
            cin >> a >> b;
            cout << "Result = " << addition(a, b) << endl;
            break;

        case 2:
        	cout << "Enter the first and the second number." << endl;
            cin >> a >> b;
            cout << "Result = " << subtraction(a, b) << endl;
            break;

        case 3:
        	cout << "Enter the first and the second number." << endl;
            cin >> a >> b;
            cout << "Result = " << multiplication(a, b) << endl;
            break;

        case 4:
        	cout << "Enter the first and the second number." << endl;
            cin >> a >> b;
            if (b != 0)
                cout << "Result = " << a / b << endl;
            else
                cout << "Error: division by zero!" << endl;
            break;
        case 5:
        	cout << "Enter the first and the second number." << endl;
        	cin >> num1 >> num2;
        	if (num2 != 0)
        		cout << "Result = " << num1 % num2 << endl;
        	else
        		cout << "Error: divison by zero!" << endl;
        	break;

        case 6:
        	cout << "Enter the base and the exponent." << endl;
            cin >> a >> b;
            cout << "Result = " << power(a, b) << endl;
            break;

        case 7:
        	cout << "Enter the number." << endl;
            cin >> a;
            if (a >= 0)
                cout << "Result = " << sqrt(a) << endl;
            else
                cout << "Error: sqrt of negative number!" << endl;
            break;

        case 8:
            cout << "Enter the number." << endl;
            cin >> a;
            if (a >= 0)
            	cout << "Result = " << cbrt(a) << endl;
            else
            	cout << "Error: cbrt of negative number!" << endl;
            break;
        case 9:
        	cout << "Enter the number and the root." << endl;
        	cin >> a >> b;
        	if (a >= 0)
        		cout << "Result = " << pow(a, 1/b) << endl;
        	else
        		cout << "Error: n-th root of negative number!" << endl;
        	break;
        case 10:
        	return 0;

        default:
            cout << "Invalid choice!" << endl;
        }

        cout << "\nQuit? (q/Q to quit, anything else to continue): ";
        cin >> quit;

    } while (quit != 'q' && quit != 'Q');

    return 0;
}

		//Functions

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

double power(double base, double exp)
{
    return pow(base, exp);
}
