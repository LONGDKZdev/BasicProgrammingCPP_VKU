#include <iostream>
using namespace std;

int main(){
    int x, y;
    cout<<"Enter value x = ";
    cin>>x;
    cout<<"Enter value y = ";
    cin>>y;
    int p = x*y, s = x+y;
    int q = (s*s)+p*(s*x)*(p+y);
    cout << "p = "<<p<<endl;
    cout<< "s = "<<s<<endl;
    cout<<"q = "<<q<<endl;

}