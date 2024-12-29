#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a,b,c;
    cout<<"Enter a = ";
    cin>>a;
    cout<<"Enter b = ";
    cin>>b;
    cout<<"Enter c = ";
    cin>>c;
    if(a != 0 && b!= 0 && c!=0)
    {
		if(a == b || a == c  ) {
			cout<<"E"<<endl;
		} 
        else if(a == b && a == c && b == c) {
			cout<<"I"<<endl;
        }
        else if(a != b || a != c || b != c) {
			cout<<"S"<<endl;
        }
    }
    else
    cout<<"Not triangle"<<endl;
}