#include <iostream>
using namespace std;

void loopArrIn(int n,int arr[][10]){
for(int i=0; i < n;i++){
        for(int j=0;j < n;j++){
            cin>>arr[i][j];
            }
    }
}
void loopArrOut(int n, int arr[][10]){
for(int i=0; i < n;i++){
        for(int j=0;j < n;j++){
            cout<<arr[i][j]<<" ";
            }
            cout<<endl;
    }
}


int main(){
    int n, max;
    cin>>n;
    int arr[10][10];
    if(n <= 0 || n > 10){
        cout<<"N";
    }

    else{
        loopArrIn(n,arr);
        // loopArrOut(n,arr);
        
        max=arr[0][0];

        for(int i=0; i < n;i++){
            for(int j=0;j < n;j++){
            if(arr[i][j] > max && arr[i][j] % 3 == 0){
                max = arr[i][j];
                }
                
            }
        }
        if(max % 3 == 0){
            cout<<max;
        }
        else{
            cout<<"N";
        }
    }
}