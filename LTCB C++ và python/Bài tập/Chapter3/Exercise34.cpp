#include <iostream>
#include<String>

using namespace std;

int main(){
    string letter;
    cout<<"Enter String of the characters from keyboad : ";
    getline(cin,letter);
    cout<<letter;
    cout<<"Size of the String of the characters = "<<letter.size();
}