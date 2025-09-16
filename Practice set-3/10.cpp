#include<iostream>
#include<string>
using namespace std;
class University{
    private:
    string name;
    int rank;
    public:
    void set_values(string na, int ra){
        name=na;
        rank=ra;

    }
    void get_values(){
        cout<<"The university name is: "<<name <<" And the rank is "<< rank<<endl;
    }
};
int main(){
    University u1,u2;
    u1.set_values("Sai",1);
    u2.set_values("Srm",2);
    u1.get_values();
    u2.get_values();
    return 0;
}