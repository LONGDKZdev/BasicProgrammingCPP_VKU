#include <iostream>
#include <iomanip>
using namespace std;

void show(int arr[10][10],int n, int m ){
    for(int i =0; i<n; i++){
        for(int j = 0; j<m; j++){
            cout<<setw(4)<<arr[i][j];
        }
        cout<<endl;
    }
}

int main(){
    int arr[10][10];
    int i, j, n, m;
    cout<<"Nhap so hang : ";
    cin>>n;
    cout<<"Nhap so cot : ";
    cin>>m;
    cout<<endl;
    for(int i =0; i<n; i++){
        for(int j = 0; j<m; j++){
            cout<<"Phan thu ["<<i<<"]"<<"["<<j<<" ] :";
        cin>>arr[i][j];
        }
    }
    cout<<endl;
    cout<<"mang 2 chieu sau khi nhap \n";
    show(arr, n, m);
    
}