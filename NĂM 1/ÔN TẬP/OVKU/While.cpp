// Nhập số nguyên dương 
// n(n>0). Nếu 
// n không hợp lệ thì xuất ra màn hình ký tự N.
// Tìm giá trị nguyên dương 
// k lớn nhất sao cho 
// S(k)≤n.
// S(k) được định nghĩa như sau: 
// S(k)=1+2+3+…+k
#include <iostream>
using namespace std;

int main(){
    int n, i = 0;
    //cout<<"Enter n (with n >0):"; 
    cin>>n;
    int sum = 0;
    if(n > 0){
        while(sum <= n){
            i++;
            sum +=i;
            if (sum > n) {
            i--; 
            break;
            }
        }
        cout<<i;
    }
    else{
        cout<<"N";
    }
}