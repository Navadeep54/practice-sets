#include<iostream>
using namespace std;
int main(){
    int i=1,
    count=0;
    while(count<10){
        if(i%2==0){
            cout<<i <<" ";
            count++;
        }
        i++;
    }
}