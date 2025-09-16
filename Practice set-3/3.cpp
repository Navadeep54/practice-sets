#include<iostream>
#include<string>
using namespace std;
class books{
    private:
    string title;
    double price;
    public:
    void set_value(string ti, double pr){
        title=ti;
        price=pr;
    }
    void get_value(){
        cout<<"The Book title is"<<title<<" and the price is"<< price<<endl;
    }
};
int main(){
    books b1;
    b1.set_value("c++",999);
    b1.get_value();
    return 0;
}