#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter a number";
    cin>>num;
    int a=num;
    int rev;
    while(a>0){
        rev=a%10;
        cout<<rev;
        a=a/10;

    }
}