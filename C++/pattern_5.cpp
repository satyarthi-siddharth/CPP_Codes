#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int k=n;k>=1;k--){
        for(int i=k-1;i>0;i--){
            cout<<" ";
        }
        for(int j=k;j<=n;j++){
            cout<<"*";
        }
        cout<<endl;
    }        
    return 0;
}