#include<iostream>
#include<string>
using namespace std;
class employe{
    private:
    int id;
    int salary;
    public:
    void set_value(int i, int sal){
         id=i;
         salary=sal;
    }
    void get_value(){
        cout<<"The employee id is "<<id<<"salary is"<<salary<<endl;
    }
};
int main(){
    employe e1,e2;
    e1.set_value(23,998);
    e1.get_value();
    e2.set_value(33,987);
    e2.get_value();
    return 0;
}