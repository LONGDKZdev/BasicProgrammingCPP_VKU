#include <iostream>
using namespace std;

void swapNumbers(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b;
    cin >> a;
    cin >> b;

    
    swapNumbers(&a, &b);
    cout << "A = " << a <<endl;
    cout << "B = " << b << endl;

    return 0;
}
