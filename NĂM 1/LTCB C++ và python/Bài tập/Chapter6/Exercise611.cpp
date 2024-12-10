#include <iostream>
using namespace std;

void calculateArea(float *radius, float *area) {
    *area = 3.14159 * (*radius) * (*radius);
}

int main() {
    float radius, area;
    cin >> radius;

    calculateArea(&radius, &area);
    cout << area << endl;

    return 0;
}
