#include <iostream>
#include <cctype> // Thư viện cung cấp hàm islower, isupper, isdigit

using namespace std;

int main() {
    char inputChar;

    // Yêu cầu người dùng nhập một ký tự
   //  cout << "Nhap mot ky tu: ";
    cin >> inputChar;

    // Kiểm tra loại ký tự
    if (islower(inputChar)) {
        cout << "L" << endl; // Ký tự viết thường
    } else if (isupper(inputChar)) {
        cout << "U" << endl; // Ký tự viết hoa
    } else if (isdigit(inputChar)) {
        cout << "D" << endl; // Chữ số
    } else {
        cout << "O" << endl; // Các ký tự khác
    }

    return 0;
}
