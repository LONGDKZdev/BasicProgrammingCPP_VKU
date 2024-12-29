#include <bits/stdc++.h>
using namespace std;

int main (){
    

    
			cout<<"Enter value A = ";
			int A ;
			cin>>A;
			cout<<"Enter value B = ";
			int B ;
			cin>>B;
			cout<<"Enter value C = ";
			int C ;
			cin>>C;
			cout<<"------------------------------"<<endl;
	///////////////////////////////////////////////////////////////
			if(B > 0 && C >0) 
				cout<<A<<"x^2 "<<"+"<<B<<"x "<<"+"<<C<<" = 0"<<endl;
			else if(B < 0 && C < 0)
				cout<<A<<"x^2 "<<B<<"x "<<C<<" = 0"<<endl;
			else if(B > 0 && C < 0)
				cout<<A<<"x^2 "<<"+"<<B<<"x "<<C<<" = 0"<<endl;
			else if(B < 0 && C > 0)
				cout<<A<<"x^2 "<<B<<"x "<<"+"<<C<<" = 0"<<endl;
			cout<<"------------------------------"<<endl;
	///////////////////////////////////////////////////////////////	
			int B2 = B/2;
			int delta = (int)pow(B2,2) - A*C;
			
			if(delta < 0)
				cout<<"no value"<<endl;
				else if(delta == 0) 
				{
					int value1 ;
					value1  = (-B / 2*A);
					cout<<"two equal values = "<<value1<<endl; 
				}
				else if(delta > 0) 
				{
					
					double value3 = (double)(-B-sqrt(delta))/2*A;
					double value4 = (double)(-B+sqrt(delta))/2*A;
					cout<<"two distinct value "<<endl;
					cout<<"value1 = "<<setprecision(3)<<value3<<endl;
					cout<<"value2 = "<<setprecision(3)<<value4<<endl;
				}
		}

//Bài tập cắn bậc 2 


