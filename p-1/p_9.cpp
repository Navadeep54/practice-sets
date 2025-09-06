#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter a number";
    cin>>a;
    int factorial=1;
    for(int i=1; i<=a; i++){
       factorial=factorial*i;
    }
    cout<<factorial;
    return 0;
}