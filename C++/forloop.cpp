#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int sum=0;
    for(int counter=1;counter<=n;counter++){
        sum+=counter;
    }

    cout<<"sum of given numbers are : "<<sum<<endl;

    return 0;
}