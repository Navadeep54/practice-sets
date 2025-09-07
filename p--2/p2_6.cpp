#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter a num:";
    cin>>num;
    int rev=0,a;
    do{
         a=num%10;
         rev=rev*10+a;
         num=num/10;
          
    }while(num!=0);
    cout<<"reversed num"<<rev<<endl;
}