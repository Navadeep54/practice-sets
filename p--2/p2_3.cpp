#include<iostream>
using namespace std;
int main(){
    int a,i=1;
    cout<<" enter a number :";
    cin>>a;
    do{
        cout<<a<<" * "<< i <<"="<< a*i<<endl;
        i++;
        }while(i<=10);
    }