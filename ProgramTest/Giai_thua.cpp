#include <bits/stdc++.h>
using namespace std;

int main (){
    int valueIn;
    cout<<"Enter value : ";
    cin>>valueIn;

    int valueOut = 1;
    int i = 1;
    while(i <=valueIn){
        valueOut *=i;
        i++;
    }
    //hoặc dùng do while làm trước kiểm tra sau
    // while(i <=valueIn);
    // do
    // {
    //     valueOut *=i;
    //     i++;
    // }
        cout<< valueIn<<"! = "<<valueOut<<endl; 
    
    

}