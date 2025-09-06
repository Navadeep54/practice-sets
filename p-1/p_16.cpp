#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter a num:";
    cin>>num;
    int a=num;
    int sum=0;
    while(a>0){
        sum=sum+a%10;
        //cout<<sum;
        a=a/10;
    }
    cout<<sum;
}