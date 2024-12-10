#include <iostream>
#include <string>
using namespace std;

int main() {
    // Nhập số nguyên dương n
    string n;
    cout << "Enter postive integer n : ";
    cin >> n;

    // Biến để kiểm tra có chữ số lẻ hay không
    bool hasOddDigit = false;

    // Duyệt từng chữ số trong chuỗi n
    for (char digit : n) {
        // Chuyển chữ số từ ký tự sang số nguyên và kiểm tra nếu là số lẻ
        if ((digit - '0') % 2 != 0) {
            cout << digit;
            hasOddDigit = true;
        }
    }

    if (!hasOddDigit) {
        cout << "N";
    }

    cout << endl;
    return 0;
}