#include<iostream>
#include<string>
using namespace std;
class Rectangle{
     private:
     int length;
     int width;
     public:
     void set_value(int l,int w){
            length=l;
            width=w;
     }
     void get_value(){
        cout<<"Area of rectangle is "<<length*width;
     }
};
int main(){
    Rectangle r1;
    r1.set_value(4,4);
    r1.get_value();
    return 0;
}