#include <iostream>
#include <bits/stdc++.h>
#include <fstream>

using namespace std;

int main(){
    ofstream taoFile ;// đặt tên bất kì 
    ifstream xuatFile;
    ofstream fileIn;
    ifstream fileOut;

    taoFile.open("D://Output file from CPP.txt");
    // taoFile.open("D://(A)Programming JJJJJ/HỌC TẬP/Output file from CPP.txt");
    string chuoi;
    cout<<"nhap chuoi luu vao file : ";
    getline(cin,chuoi);
    taoFile<<chuoi;
    taoFile.close();
    xuatFile.open("D://Output file from CPP.txt");
    if(!xuatFile){
        cout<<"File khong ton tai";
    }
    else{
        cout<<"File ton tai";
    }


int Sum = 0, n;
    fileIn.open("EX56.txt");
    cout<<"Exercise 5.6"<<endl;
    cout<<"Enter limit value to caculate sum : ";
    cin>>n;
    for(int i =0;i <= n;i++){
        Sum +=i ;
    }
    fileIn<<"(with n ="<<n<<")Value of Sum = "<<Sum;
    fileIn.close();

// thao tác đưa vào file

    fileOut.open("EX56.txt");
    
    if(!fileOut){
    cout<<"ERROR";
    }
    else{
        cout<<Sum;
    }
    cout<<endl;
}
    