#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    double cgpa;
    Student(string name,double cgpa){
        this->name=name;
        this->cgpa=cgpa;
    }
    void getinfo(){
        cout<<"student:"<<" "<<name<<endl;
        cout<<"cgpa:"<<" "<<cgpa<<endl;
    }

};
int main(){
    Student s1("jagat",9.4);
    s1.getinfo();
}