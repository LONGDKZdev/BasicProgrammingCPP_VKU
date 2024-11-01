#include <bits/stdc++.h>
using namespace std;
int main(){
int n;cin>>n;
int ArrayA[50];
    for(int i =0; i < n;i++){
        cin>>ArrayA[i];
    }
    for(int i =0; i < n;i++){
        cout<<ArrayA[i]<<" ";
    }
    int Max =ArrayA[0];
    int count = 0;
    for(int i =0; i < n;i++){
        if(ArrayA[i] > Max){
        Max = ArrayA[i];
        count =1;
        }
        else if(ArrayA[i] == Max){
            count++;
            }
        }
    cout<<endl;
    cout<<Max<<endl;
    cout<<count;
    //
}