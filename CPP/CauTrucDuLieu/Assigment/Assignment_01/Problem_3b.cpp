#include <bits/stdc++.h>
using namespace std;

void add(double* a, double* b, double* result) { *result = *a + *b; }
void subtract(double* a, double* b, double* result) { *result = *a - *b; }
void multiply(double* a, double* b, double* result) { *result = *a * *b; }
void divide(double* a, double* b, double* result) { *result = (*b != 0) ? (*a / *b) : 0; }

int main() {
   double a, b, result;
   cout << "Enter two real numbers: ";
   cin >> a >> b;

   add(&a, &b, &result);
   cout << "Addition: " << result << endl;

   subtract(&a, &b, &result);
   cout << "Subtraction: " << result << endl;

   multiply(&a, &b, &result);
   cout << "Multiplication: " << result << endl;

   divide(&a, &b, &result);
   cout << "Division: " << result << endl;

   return 0;
}
