
////////////////////////////
//CHƯƠNG TRÌNH HOÀN THIỆN//
//////////////////////////


#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Khai báo cấu trúc công dân
struct Citizen {
    string fullName;
    string gender;
    int birthYear;
    string hometown;
};

int main() {
    int n; // Số lượng công dân
    cin >> n;
    cin.ignore(); // Loại bỏ ký tự xuống dòng sau khi nhập n

    vector<Citizen> citizens(n); // Danh sách công dân

    // Nhập thông tin của từng công dân
    for (int i = 0; i < n; i++) {
        getline(cin, citizens[i].fullName);  // Họ và tên
        getline(cin, citizens[i].gender);   // Giới tính
        cin >> citizens[i].birthYear;       // Năm sinh
        cin.ignore();                       // Loại bỏ ký tự xuống dòng
        getline(cin, citizens[i].hometown); // Quê quán
    }

    // Xuất thông tin từng công dân
    for (int i = 0; i < n; i++) {
        cout << citizens[i].fullName << endl; // Họ và tên
        cout << citizens[i].gender << endl;  // Giới tính
        cout << 2021 - citizens[i].birthYear << endl; // Tuổi (tính đến 2021)
        cout << citizens[i].hometown << endl; // Quê quán
    }

    return 0;
}

