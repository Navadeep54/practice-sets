#include<iostream>
using namespace std;
int main(){
    int num,temp,rev=0;
    cout<<"enter a number to check palindrome or not:";
    cin>>num;
    for(temp=num;temp>0;temp=temp/10){
        int digit=temp%10;
        rev=rev*10+digit;
    }
    if(num==rev){
        cout<<"the give num is palindrome";
    }
    else{
        cout<<"the given number is not palindrome:";
    }
}