// dùng getline(cin,name) có thể nhập được bất cứ thứ gì kể cả dấu cách
// độ dài chuổi 
#include <iostream>
#include <String>
using namespace std;

int main()
{
string fullName;
    cout<<"Enter fullName from keyboad : ";
    getline(cin,fullName);
    cout<<"Welcome "<<fullName<<" to VKU";
}