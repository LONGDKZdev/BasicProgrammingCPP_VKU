#include <iostream>
#include <fstream>
using namespace std;

int main(){
    /////Exercise 5.4/////
    ofstream fileIn;
    ifstream fileOut;

    int i , valueIn, valueOut;
    fileIn.open("EX54.txt");
    cout<<"Exercise 5.4"<<endl;
    cout<<"Enter value : ";
    cin>>valueIn;
    valueOut = 0;
    i =1;
    do
    {
        valueOut += i*i;
        i++;
    }
    while(i <=valueIn);

    for(int a = 1; a <=valueIn; a++){
        if(a < valueIn){
        fileIn<<"("<<a<<"*"<<a<<")+";
        }
        else if(a == valueIn){
        fileIn<<"("<<a<<"*"<<a<<") =";
        }
    }
    fileIn<<valueOut;
    fileIn.close();
    /////EXercise 5.5/////
    fileIn.open("EX55.txt");
    cout<<"Exercise 5.5"<<endl;
    for (int i = 48; i <= 127; i++) {
        fileIn << "ASCII Code: " << i << " --> Character: " << char(i) << endl;
        // cout << "ASCII Code: " << i << " --> Character: " << char(i) << endl;
    }
    fileIn.close();

    /////EXercise 5.6/////
    
    
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

/////Exercise 5.7/////
    cout<<"Exercise 5.7"<<endl;
    fileIn.open("EX57.txt");
    cout<<"Enter value : ";
    cin>>valueIn;
    i = 2;
    int sum =0;
    
    if(valueIn < 1 && valueIn % 2 != 0){
        fileIn<<"ERROR!";
        cout<<"ERROR!";
    }
    else{
    do{
        sum +=i;
        if(i != valueIn){
            fileIn<<i<<" + ";
        }
        else if(i == valueIn){
            fileIn<<i<<" = "<<sum;
        }
        i+=2;
        
    }
    while(i <= valueIn);
    }
    fileIn.close();
/////Exercise5.8/////
cout<<"Exercise 5.8"<<endl;
    fileIn.open("EX58.txt");
    int product = 1;
    cout << "Enter the naturel number  n: ";
    cin >> n;
    product = 1;
    if (n == 0) {
        product = 0;
    } 
    else {
        while(n>0){
        int lastValue= n % 10;
        product = product * lastValue;
        n/=10;
        }
    }
    fileIn<<"Result = "<<product;
    fileIn.close();
}