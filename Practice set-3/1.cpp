#include<iostream>
#include<string>
using namespace std;
class student{
    private:
    string name;
    int age;
    public:
    void set_value(string na, int ag){
        name=na;
        age=ag;
    }
    void get_value(){
        cout<<" name :"<<name<<" age: "<<age<<endl;
    }
};
int main(){
    student s1;
    s1.set_value("navadeep", 19);
    s1.get_value();

    return 0;
}