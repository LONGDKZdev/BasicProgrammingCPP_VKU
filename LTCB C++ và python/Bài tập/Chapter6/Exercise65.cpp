#include <iostream>
#include <cmath>
using namespace std;

int derivative(int x, int y) {
    return y * pow(x, y - 1);
}

int main() {
    int x, y;
    cin >> x >> y;
    cout << derivative(x, y) << endl;
    return 0;
}
