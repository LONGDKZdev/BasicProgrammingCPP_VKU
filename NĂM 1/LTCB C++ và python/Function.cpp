#include <iostream>
#include <cmath>
using namespace std;

int TestFunction(){
    return 100;
}

void Print(){
    cout<<"HELLO WORLD!";
}

int sum(int a,int b){
    return a+b;
}
double POW(double c, double d){
    cout<<"Enter c , d to caculate Pow\n";
    cin>>c>>d;
    return pow(c,d);
}
int TONG(int n){
    int sum =0;
    for(int i =0; i <= n;i++){
        sum = sum + i;
    }
    return sum;
}

int TinhLuyThua(int a, int n){
    int luythua = 1;
    for(int i = 1; i <= n; i++){
        luythua *= a;
    }
    return luythua;
}

int Sum(int x){
    int s =0;
    while (x>0){
        s += x%10;
        x /= 10;
    }
    return s;
}

//Hàm phương thức chính để chạy chương trình 
int main(){
    // cout<<"Print String \n";
    // Print();
    // cout<<endl;
    // int a,b;
    // cout<<"Enter a , b to caculate sum\n";
    // cin>>a>>b;
    // cout<<"Value of sum = "<<sum(a,b)<<endl;
    // double c, d;
    // cout<<"Value of Pow  = "<<POW(c,d)<<endl;


    // int n;
    // cout<<"Enter n";
    // cin>>n;
    // cout<<"Sum from 1 to "<<n<<" is "<<TONG(n);
    // return 0;

    int a,n;
    cout<<"Enter a :";cin>>a;
    cout<<"Enter n :";cin>>n;
    cout<<"Gia tri cua "<< a <<" mu "<<n<<" la : "<<TinhLuyThua(a,n);
    // cout<<TestFunction;

}
