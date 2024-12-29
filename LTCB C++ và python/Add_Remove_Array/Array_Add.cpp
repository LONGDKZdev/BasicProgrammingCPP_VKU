#include <iostream>
#include <iomanip>
using namespace std;

void show(int arr[], int n ){
    for(int i =0; i<n;i++){
        cout<<setw(6)<<arr[i];
    }
}


int main(){
    int arr[10];
    int i, n;
    cout<<"Nhap so phan tu: ";
    cin>>n;

    for(int i =0; i<n;i++){
        cout<<"Phan tu arr["<<i<<"] : ";
        cin>>arr[i];
    }

    cout<<"Mang vua nhap la: \n";
    show(arr, n);
    cout<<endl;
    int vitri, giatrichen;
    cout<<"Nhap vi tri :";
    cin>>vitri;
    cout<<"Nhap gia tri chen vao :";
    cin>>giatrichen;
    if(vitri < 0){
        vitri =0;
    }
    else if(vitri >n){
        vitri = n;
    }

    for(i = n; i >= vitri;i--){
        arr[i]= arr[i-1];
    }
    arr[i]=giatrichen;
    n++;

    cout<<"Mang sau khi chen vao: \n";
    show(arr, n);




    
}