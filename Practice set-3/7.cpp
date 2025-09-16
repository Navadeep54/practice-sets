#include<iostream>
#include<string>
using namespace std;
class circle{
    private:
    double radius;
    public:
    void set_value(double r){
        radius=r;
    }
    void get_value(){
        cout<<"Radius :"<<radius<<endl;
    }
    void get_area(){
         double area=3.14*radius*radius;
         cout<<"Area :"<<area<<endl;
    }

};
int main(){
    circle c1,c2;
    c1.set_value(5);
    c2.set_value(10);
    cout<<"circle c1"<<endl;
    c1.get_value();
    c1.get_area();

    cout<<"circle c2"<<endl;
    c2.get_value();
    c2.get_area();
    return 0;
}