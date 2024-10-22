#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ofstream taoFile ;// đặt tên bất kì 
    ifstream xuatFile;
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
}