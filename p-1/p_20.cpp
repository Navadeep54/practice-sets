#include<iostream>
using namespace std;
int main(){
     int m,n;
     cout<<"enter m:";
     cin>>m;
     cout<<"enter n:";
     cin>>n;
     int gcd=1;
     for(int i=1; i<=min(m,n);i++){
        if(m%i==0 && n%i==0){
            gcd=i;
        }
     }
     cout<<"greatst factor is "<<gcd;
     return 0;
}