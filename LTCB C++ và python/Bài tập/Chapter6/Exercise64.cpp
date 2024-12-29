#include <iostream>
using namespace std;

int digitSum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int findBiggest(int n, int m) {
    if (n > m) return -1;
    int maxNumber = n, maxSum = digitSum(n);
    for (int i = n + 1; i <= m; i++) {
        int currentSum = digitSum(i);
        if (currentSum > maxSum || (currentSum == maxSum && i > maxNumber)) {
            maxNumber = i;
            maxSum = currentSum;
        }
    }
    return maxNumber;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << findBiggest(n, m) << endl;
    return 0;
}
