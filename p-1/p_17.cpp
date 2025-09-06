#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter a n:";
    cin>>n;
    int a=0;
    int b=1;
    int next = a+b;
    cout<<"Fibomacci Series upto "<<n<<" terms: ";
    cout<<a<<" "<<b<<" ";

    for(int i = 3;i<=n;i++){
        cout<<next<<" ";
        a = b;
        b = next;
        next = a+b;
    }
    return 0;
}