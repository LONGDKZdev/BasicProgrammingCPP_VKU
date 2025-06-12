#include <bits/stdc++.h>
using namespace std;

double add(double a, double b) { return a + b; }
double subtract(double a, double b) { return a - b; }
double multiply(double a, double b) { return a * b; }
double divide(double a, double b) { return (b != 0) ? (a / b) : 0; }

int main() {
   double a, b;
   cout << "Enter two real numbers: ";
   cin >> a >> b;
    
   cout << "Addition: " << add(a, b) << endl;
   cout << "Subtraction: " << subtract(a, b) << endl;
   cout << "Multiplication: " << multiply(a, b) << endl;
   cout << "Division: " << divide(a, b) << endl;

   return 0;
}
