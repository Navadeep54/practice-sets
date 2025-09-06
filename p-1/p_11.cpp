#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"enter marks of a student:";
    cin>>marks;
if(marks>=90){
    cout<<"grade is A";
}
else if(marks>=80 && marks<=89){
    cout<<"grade is B";
}
else if(marks>=70 && marks<=79){
    cout<<"grade is c";
}
else if(marks>=60 && marks<=69){
    cout<<"grade is D";
}
else if(marks<60){
    cout<<"grade is F";
}
else{
    cout<<"enter valid marks";
}
}