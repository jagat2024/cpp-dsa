#include<iostream>
using namespace std;
class Student{
    string name;
    
    public:
    Student(){
        cout<<"non parameterised ";
    }
    Student (string name){
        cout<<"parameterised"<<endl;
        this->name=name;
        
    }
    void getinfo(){
        cout<<name<<endl;
        
    }
};
int main(){
    Student s1("jagat");
    s1.getinfo();
}