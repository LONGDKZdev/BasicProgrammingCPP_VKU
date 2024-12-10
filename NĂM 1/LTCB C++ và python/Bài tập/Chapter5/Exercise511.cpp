#include <bits/stdc++.h>
using namespace std;

int main(){
    string n;
    cout << "Enter a number to convert to English words: ";
    cin >> n;

    // Duyệt qua từng ký tự trong chuỗi và in ra chữ tương ứng bằng tiếng Anh


    for(char digit : n) {
        switch (digit) {
            case '0': cout << "zero "; break;
            case '1': cout << "one "; break;
            case '2': cout << "two "; break;
            case '3': cout << "three "; break;
            case '4': cout << "four "; break;
            case '5': cout << "five "; break;
            case '6': cout << "six "; break;
            case '7': cout << "seven "; break;
            case '8': cout << "eight "; break;
            case '9': cout << "nine "; break;
        }
    }
}

/*NOTE
// Cú pháp (char digit : n) là một cách viết ngắn gọn của C++ để duyệt qua từng phần tử của một chuỗi hoặc một mảng (còn gọi là range-based for loop).
// Trong trường hợp này, n là chuỗi ký tự (string), và digit sẽ lần lượt đại diện cho từng ký tự trong chuỗi n ở mỗi lần lặp của vòng lặp.*/