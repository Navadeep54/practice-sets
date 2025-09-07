#include<iostream>
using namespace std;
int main(){
    int n;
    int factorial=1;
    int i=1;
    cout<<"enter a number:";
    cin>>n;
    while(i<=n){
        factorial=factorial*i;
        i++;

    }
    cout<<"the factorial of given number is"<<factorial;
}