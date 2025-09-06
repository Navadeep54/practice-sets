#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter num:";
    cin>>num;
    int a=num;
    int pal=0;
    while(a>0){
        int dig =a%10;
        pal = pal*10+ dig;
        a=a/10;
    }
      
      if(pal==num){
        cout<<"num is palindrome:";
      }
      else{
        cout<<"not palindrome:";
      }
    }
