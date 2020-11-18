#include<iostream>
using namespace std;

int main(){
    int m;
    cin>>m;

    for(int l=1;l<=m;l++){
        for(int r=l;r>=1;r--){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}