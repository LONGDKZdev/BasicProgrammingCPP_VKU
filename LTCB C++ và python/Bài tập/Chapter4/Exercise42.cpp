#include <bits/stdc++.h>
using namespace std;

int main (){
    int valueIn;
    cout<<"Enter value (from 1 to 10) = ";
    cin>>valueIn;
    cout<<"---------------------------------------------------------------"<<endl;


if(valueIn < 1 || valueIn > 10){
    cout<<"ERROR! cann't convert ";
}
    else{
        cout<<"Number had converted from normal number to Roman number = ";
        switch(valueIn){
            case 1 : cout<<"I";break;
            case 2 : cout<<"II";break;
            case 3 : cout<<"III";break;
            case 4 : cout<<"IV";break;
            case 5 : cout<<"V";break;
            case 6 : cout<<"VI";break;
            case 7 : cout<<"VII";break;
            case 8 : cout<<"VIII";break;
            case 9 : cout<<"IX";break;
            case 10 : cout<<"X";break;
        }
}
    cout<<endl;
    cout<<"---------------------------------------------------------------"<<endl;
    

}