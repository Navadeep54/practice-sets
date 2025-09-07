





#include<iostream>
#include<cmath>

using namespace std;
int main(){
    int n,original,remainder,digit=0,result=0;
    cout<<"enetr a num";
    cin>>n;
    original=n;

    int temp = n;
    while(temp!=0){
        digit++;
        temp=temp/10;
    }



    temp=n;
    while(temp!=0){
        remainder=temp%10;
        result = result+round(pow(remainder,digit));
        temp=temp/10;
    }

    if(result==original){
        cout<<"this is armstrong";
    }else{
        cout<<"this is not armstrong";
    }

    return 0;
}