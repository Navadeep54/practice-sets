#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b,c;
    float root1, root2;
    cout<<"Enter the coefiecient of of x^2:";
    cin>>a;
    cout<<"enter the coefiecient of x:";
    cin>>b;
    cout<<"enter the constnt:";
    cin>>c;
    int dis=((b*b)-4*a*c);
    if(dis<0){
        cout<<"the roots are imaginary";
        float dis_image=-dis;
        float real,image;
        real=(-b/(2*a));
        image=(sqrt(dis_image)/2*a);
        cout<<"roots are"<<real<<" + "<<image<<" i ,"<<real<<" - "<<image<<" i ";
    }
    else if(dis>0){
        cout<<" the roots are real";
        root1=(-b+sqrt(dis)/(2*a));
        root2=(-b-sqrt(dis)/(2*a));
        cout<<"the roots are "<<root1<<" "<<root2;
    }
    else if(dis==0){
        cout<<"the roots are same";
        root1=(-b/(2*a));
        cout<<"the roots are"<<root1<<root2;
    }
}