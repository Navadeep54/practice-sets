#include<iostream>
#include<string>
using namespace std;
class cars{
    private:
    string brand;
    string model;
    public:
    void set_values(string br, string mo){
        brand=br;
        model=mo;
    }
    void get_values(){
        cout<<"the car brand is :"<<brand<<endl<<"model is "<<model<<endl;
    }
};
int main(){
    cars car[3];
    car[0].set_values("Suziki","Dezire");
    car[1].set_values("Toyota","Fortunire");
    car[2].set_values("hundai","creta");
    for(int i=0; i<3; i++){
        car[i].get_values();
    }
    return 0;
}