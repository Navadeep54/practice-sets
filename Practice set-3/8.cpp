#include<iostream>
#include<string>
using namespace std;
class Account{
    private:
    int acc_num;
    double balance;
    public:
    void set_values(int ac, double bal){
        acc_num=ac;
        balance=bal;
    }
    void get_values(){
        cout<<"Account number:"<<acc_num<<" the balance is: "<<balance<<endl;
    }
};
int main(){
    Account a1,a2;
    a1.set_values(1001,6589.8);
    a2.set_values(1002,9797.0);
    a1.get_values();
    a2.get_values();
    return 0;
}