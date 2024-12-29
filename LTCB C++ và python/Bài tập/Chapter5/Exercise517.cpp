#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhập số nguyên dương n: ";
    cin >> n;

    // Kiểm tra n hợp lệ
    if (n <= 0) {
        cout << "N" << endl;
    }

    int k = 0;       // Khởi tạo k
    int sum = 0;     // Tổng S(k)

    while (sum + k + 1 <= n) {
        k++;
        sum += k; 
    }

    cout << "Số nguyên dương k lớn nhất là: " << k << endl;
    return 0;
}
