#include<iostream>
using namespace std;
class Teacher{
    private:
        long long salary;
        long long phoneno;
    public:
        string name;
        string dept; 
    Teacher(string name,string dept,long long salary,long long phoneno){
        this->name=name;
        this->dept=dept;
        this->salary=salary;
        this->phoneno=phoneno;
    }
    //copy constructor
    Teacher(Teacher &orgobj){
        this->name=orgobj.name;
        this->dept=orgobj.dept;
        this->salary=orgobj.salary;
        this->phoneno=orgobj.phoneno;
    }
};