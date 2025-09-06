#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter three numbers:"<<endl;
    cin>>a>>b>>c;
    if(a>b&&a>c){
        cout<<"yhe largest number is"<<a<<endl;
    }
    else if(b>a&&b>c){
        cout<<"yhe largest number is"<<b<<endl;
        
    }
    else{
        cout<<"yhe largest number is"<<c<<endl;
    }
    return 0;
}
