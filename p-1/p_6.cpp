#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter a number:";
    cin>>a;
    for(int i=1; i<=10; i++){
        cout<<a<<"*"<<i<<"="<<a*i<<endl;
    }
}