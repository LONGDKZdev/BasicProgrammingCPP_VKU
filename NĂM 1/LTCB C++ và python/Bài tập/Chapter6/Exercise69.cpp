#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int primorial(int n) {
    int count = 0, num = 2, result = 1;
    while (count < n) {
        if (isPrime(num)) {
            result *= num;
            count++;
        }
        num++;
    }
    return result;
}

int main() {
    int n;
    cin >> n;

    cout << n<< primorial(n) << endl;
    return 0;
}
