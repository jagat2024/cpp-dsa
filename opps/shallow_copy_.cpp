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
    void getinfo(){
        cout<<"student:"<<" "<<name<<endl;
        cout<<"cgpa:"<<" "<<*cgpaptr<<endl;
    }

};
int main(){
    Student s1("jagat",9.4);
    
    Student s2(s1);
    s1.getinfo();
    *s2.cgpaptr=8.94;//shallow cop is changing the whle value of the intial object so wecan understood wht is happening in shallow copy
    s2.getinfo();
    s1.getinfo();

 
}