#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int arr[10];
    int i,n;
    cin>>n;
    for(i =0; i < n; i++){
        cout<<"value in array arr number "<<i+1<<" :";
        cin>>arr[i];
    }
    cout<<"Show 1 :"<<endl;
    for(i =0; i < n; i++){
        cout<<"arr["<<i<<"]:"<<arr[i]<<endl;
    }
    cout<<"Show 2 :"<<endl;
    for(i =0; i < n; i++){
        cout<<arr[i]<<setw(5);
    }
}