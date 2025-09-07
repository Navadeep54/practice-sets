#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter a num:";
    cin>>a;
    int p;
    cout<<"enter a power of  a:";
    cin>>p;
   int  power_of_num=1;
    while(p>0){
           power_of_num=power_of_num*a;
           p--;
    }
    cout<<power_of_num;
}