#include<iostream>
using namespace std;

int main(){
    int date;
    cout<<"input date on which u wanna go out";
    cin>>date;
    int pocketmoney = 3000;
    for(date = 1;date<=30;date++){
        if(date%2==0){
            continue;
        }
        if(pocketmoney==0){
            break;
        }
        cout<<"Go out Today"<<endl;
        pocketmoney -= 300;
    }
    return 0;
}