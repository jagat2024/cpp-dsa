#include<iostream>
using namespace std;
class Person{
public:
    string name;
    int id;
    Person(string name,int id){
        this->name=name;
        this->id=id;
    }

    Person() {

    }
};
class Student: public Person{
    public:
        int rollno;
    Student(string name,int id,int rollno):Person(name,id){
        this->rollno=rollno;

    }
    void getinfo(){
        cout<<"name"<<name;
        cout<<"id"<<id;
        cout<<"roll no"<<rollno;
    }
};
int main(){
    Student s1("jagat",103,1234);
    cout<<s1.name<<" "<<s1.id<<" "<<s1.rollno<<endl;
}
