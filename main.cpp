// CALCULATOR

#include <iostream>
using namespace std;

// declaring function's operation
double addition(double a, double b);
double subtraction(double a, double b);
double multiplication(double a, double b);
double division(double a, double b);

int main()
{
  // The main program.

  return 0;
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
double division(double a, double b)
{
  if(b != 0)
    return a / b;
  else
  {
    cout << "Error: Division by zero!" << endl;
    return 1;    // return 1 is for division by zero (0).
  }
}
