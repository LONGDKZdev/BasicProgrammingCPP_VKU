#include <iostream>
#include <String>
using namespace std;

int main(){
    double number;
    cout<<" ";
    cout<<"Enter value number = ";
    cin>>number;
    cout<<"Value number after convert from Double to Int = "<<int(number)<<endl;
    // hoặc dùng
    cout<<"Value number after convert from Double to Int = "<<static_cast <int>(number)<<endl;
        cout<<" ";
    system("Pause");
}