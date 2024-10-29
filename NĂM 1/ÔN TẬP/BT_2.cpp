//viết C Trình nhập điểm lý thuyết và thực hành lớn hơn 1 nhỏ hơn 10
#include <bits/stdc++.h>
using namespace std;

int main(){
    double lyThuyet, thucHanh;
    double dtb;
    cout<<"diem ly thuyet :";
    cin>>lyThuyet;
    cout<<"diem thuc hanh :";
    cin>>thucHanh;
    if((lyThuyet < 0 || lyThuyet > 10 ) || (thucHanh < 0 || thucHanh >10 )){
        cout<<"N";
    }
    else if(lyThuyet < 5 || thucHanh < 5){
        cout<<"R";
    }
    else{
        dtb =(lyThuyet + thucHanh) /2;
        cout<<dtb;
    }

}