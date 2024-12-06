//Con trỏ *ptr để truy xuất địa chỉ
//theo tọa độ cơ số ,Trỏ đến địa chỉ đó để lấy giá trị
//Dùng & để lấy địa chỉ 
#include <iostream>
using namespace std;

int main(){
    int a =100;
    int *ptr =&a;
    cout<<"Adress of a :"<<&a<<endl;
    cout<<"Value of a ="<<a<<endl;
    a =200;
    int *ptr2 =&a;
    cout<<"Adress of a :"<<&a<<endl;
    cout<<"Value of a ="<<a<<endl;

\
}