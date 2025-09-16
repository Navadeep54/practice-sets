#include<iostream>
#include<string>
using namespace std;
class celsius{
    private:
    double celsius;
    public:
    void set_celsius(double c){
        celsius=c;
    }
    void get_fahernheit(){
        double fahernheit= (celsius*9.0/5.0)+32;
        cout<<"celsius "<<celsius<<" Faheerheit"<<fahernheit<<endl;
    }
};
int main(){
    celsius c1,c2;
    c1.set_celsius(0);
    c2.set_celsius(100);
    c1.get_fahernheit();
    c2.get_fahernheit();
    return 0;
}