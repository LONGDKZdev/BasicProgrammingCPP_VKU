#include <iostream>
using namespace std;

int main(){
    double electricNumber,Money=1;
    cout<<"Enter Electric Number (kWh): ";
    cin>>electricNumber;
    if(electricNumber < 0 || electricNumber > 300){
        cout<<"N";
    }     
    else if(electricNumber <= 50){
        Money= electricNumber * 100;
        cout<<Money<<" dong";
    }
    else if(electricNumber <= 100){
        Money = 50*100+(electricNumber-50)*150;
        cout<<Money<<" dong";
    }
    else if(electricNumber <= 150){
        Money = 50*100+50*150+(electricNumber-100)*200; 
        cout<<Money<<" dong";
    }
    else{
        Money = 50*100+50*150+50*200+(electricNumber-150)*200; 
        cout<<Money<<" dong";
    }
 
}