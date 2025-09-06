#include<iostream>
using namespace std;
int main(){
    for(int a=1; a<=100; a++){
        int p=1;
        if(a==1){
            p=0;
        }
        for(int i=2; i<=a/2; i++){
            if(a%i==0){
                p=0;
            }
        
        }
        if(p==1){
            cout<<" "<<a;
        }
    }
    
    
}