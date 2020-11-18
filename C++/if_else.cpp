#include<iostream>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w", stdout);
    #endif

    int savings;
    // cout<<"enter your savings"<<endl;
    cin>>savings;

    if (savings>5000){
        cout<<"Neha\n";
    } else if(savings>2000){
        cout<<"Shreya\n";
    } else {
        cout<<"Friends\n";
    }

    return 0;
}