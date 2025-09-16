#include<iostream>
#include<string>
using namespace std;
class BankAccount{
        private:
        double balance=0;
        public:
        void setBalance(double b){
            if(b<0){
                cout<<" Error balance cannot be negative:"<<endl;
            }
            else{
                balance=b;
            }
        }
        void getBalance(){
            cout<<"balance is"<<balance<<endl;
        }
};
int main(){
    BankAccount a1,a2;
    a1.setBalance(500);
    a1.getBalance();
    a2.setBalance(-98);
    
    a2.getBalance();
    return 0;
}