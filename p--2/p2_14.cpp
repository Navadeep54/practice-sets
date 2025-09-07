#include<iostream>
using namespace std;
int main(){
    int num,temp,big=0;
    cout<<"enter num:";
    cin>>num;
    temp=num;
    do{
        int digit=temp%10;
        if(digit>big){
            big=digit;
        }
        temp=temp/10;
    }while(temp>0);
    cout<<"the biggest digit is"<<big;
    return 0;
}