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
    char quit;

    do
    {
        cout << "\n===== CALCULATOR =====\n";
        cout << "1. Addition (+)\n";
        cout << "2. Subtraction (-)\n";
        cout << "3. Multiplication (*)\n";
        cout << "4. Division (/)\n";
        cout << "5. Power (a^b)\n";
        cout << "6. Square root (sqrt)\n";
        cout << "7. Quit\n";
        cout << "Choose an operation: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cin >> a >> b;
            cout << "Result = " << addition(a, b) << endl;
            break;

        case 2:
            cin >> a >> b;
            cout << "Result = " << subtraction(a, b) << endl;
            break;

        case 3:
            cin >> a >> b;
            cout << "Result = " << multiplication(a, b) << endl;
            break;

        case 4:
            cin >> a >> b;
            if (b != 0)
                cout << "Result = " << a / b << endl;
            else
                cout << "Error: division by zero!" << endl;
            break;

        case 5:
            cin >> a >> b;
            cout << "Result = " << power(a, b) << endl;
            break;

        case 6:
            cin >> a;
            if (a >= 0)
                cout << "Result = " << sqrt(a) << endl;
            else
                cout << "Error: sqrt of negative number!" << endl;
            break;

        case 7:
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
