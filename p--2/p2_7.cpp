#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter a num:";
    cin>>num;
    int k=0;
    for(int i=2; i<=num/2; i++){
        if(num%i==0){
            k=1;
        }
        else{
            k=0;
        }
    }
    if(k==0){
        cout<<"num is prime";
    }
    else{
        cout<<"num is not a prime";
    }
}