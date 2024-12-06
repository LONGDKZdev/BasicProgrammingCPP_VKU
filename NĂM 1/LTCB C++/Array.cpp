#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[10];
    int i,n;
    cout<<"Nhap phan tu :";
    cin>>n;
    for(int i =0; i<=n;i++){
        cout<<"Phan tu thu a ["<<i+1<<"]: ";
        cin>>arr[i];
    }
    cout<<"mang vua nhap la: "<<endl;
    for(int i =0; i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int sum=0;
    cout<<"tong cua mang la: ";
    for(int i =0; i<=n;i++){
        sum += arr[i];
    }
    cout<<sum<<endl;

    int tongchan=0;
    cout<<"tong chan cua mang la: ";
    for(int i =0; i<=n;i++){
        if(arr[i]%2==0){
            tongchan += arr[i];
        }
            
    }
    cout<<tongchan<<endl;
    cout<<"Find max / min"<<endl;

    int max = arr[0];
    int min = arr[0];
    for(int i = 0;i <= n; i++){
        if(arr[i] > max ){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }
    cout<<"max : "<<max<<endl;
    cout<<"min : "<<min<<endl;

    system("Pause");
}