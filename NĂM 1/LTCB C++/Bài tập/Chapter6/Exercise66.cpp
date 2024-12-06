#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<pair<int, int>> primeFactorization(int n) {
    vector<pair<int, int>> factors;
    for (int i = 2; i * i <= n; i++) {
        int count = 0;
        while (n % i == 0) {
            count++;
            n /= i;
        }
        if (count > 0) factors.push_back({i, count});
    }
    if (n > 1) factors.push_back({n, 1});
    return factors;
}

int countDigits(int n) {
    int count = 0;
    while (n > 0) {
        count++;
        n /= 10;
    }
    return count;
}

int economicalNumber(int n) {
    vector<pair<int, int>> factors = primeFactorization(n);
    int primeDigits = 0;
    for (auto &factor : factors) {
        primeDigits += countDigits(factor.first);
        if (factor.second > 1) primeDigits += countDigits(factor.second);
    }
    int originalDigits = countDigits(n);
    if (primeDigits == originalDigits) return 1;
    else if (primeDigits < originalDigits) return 2;
    else return 3;
}

int main() {
    int n;
    cin >> n;
    cout << economicalNumber(n) << endl;
    return 0;
}
