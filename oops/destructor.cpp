#include<bits/stdc++.h>
using namespace std;
//shallow copy
class Student{
    public:
    string name;
    float* cgpaptr;
    Student(string name,double cgpa){
        this->name=name;
        cgpaptr = new float;
        *cgpaptr=cgpa;
    }
    //DEEPCOPY CONSTRUCTOR WE HAVE TO BUILD OUR OWN CONSTRUCTOR
    Student (Student &obj){
        this->name=obj.name;
        cgpaptr=new float;
        *cgpaptr=*obj.cgpaptr;
    }
    ~Student(){
        cout<<"hi i deleted everything"<<endl;
    }
    void getinfo(){
        cout<<"student:"<<" "<<name<<endl;
        cout<<"cgpa:"<<" "<<*cgpaptr<<endl;
    }

};
int main(){
    Student s1("jagat",9.4);
    
    Student s2(s1);
    s1.getinfo();
   

 
}