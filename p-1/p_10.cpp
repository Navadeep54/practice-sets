#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"enter year:";
    cin>>year;
    if(year%4==0){
        cout<<"the given "<<year<< "is leap year:";
    }
    else{
        cout<<"the given "<<year<<" is not leap year:";
    }

}