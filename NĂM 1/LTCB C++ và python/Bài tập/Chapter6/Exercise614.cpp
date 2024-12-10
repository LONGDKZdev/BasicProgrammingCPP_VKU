#include <iostream>
using namespace std;

// Overloaded functions
int add(int a, int b) {
    return a + b;
}

float add(float a, float b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

int main() {
    // Integer addition
    int x = 25, y = 50;
    cout << add(x, y) << endl;

    // Float addition
    float a = 12.65f, b = 116.50f;
    cout << add(a, b) << endl;

    // Double addition
    double m = 1234.567, n = 2468.357;
    cout << add(m, n) << endl;

    return 0;
}
