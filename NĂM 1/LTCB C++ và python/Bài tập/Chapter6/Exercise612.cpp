#include <iostream>
using namespace std;

void factorial(int *num, int *result) {
    *result = 1;
    for (int i = 1; i <= *num; i++) {
        *result *= i;
    }
}

int main() {
    int num, result;
    cin >> num;

    factorial(&num, &result);
    cout << num << endl;
    cout <<result << endl;
    return 0;
}
