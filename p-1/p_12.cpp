#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter a number:/";
    cin>>a;
    int p = 1;
    for(int i=2; i<=a/2 ;i++){
        if(a%i==0){
            p = 0;
        }
    }
    if(p==0){
        cout<<"non prime";
    }
    else {
        cout<<"prime";
    }
}