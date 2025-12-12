#include<iostream>
using namespace std;
class normal_creation_of_teacher
{
private:
    long long salary;
    long long phoneno;
public:
    string name;
    string dept;
    //nonparametrised constructr; jab bhi function call hoga ye bhi print hoga ye ek constructor hai
    normal_creation_of_teacher(){
        cout<<"hey i am the teacher"<<endl; 
    }
    //getter
    void set_salary(long long n){
        salary=n;
    }
    long long get_salary(){
        return salary;
    }
};
int main(){


    normal_creation_of_teacher t1;
    t1.name="jagat";
    t1.dept="cse";
    t1.set_salary(500000);
    cout<<t1.name<<endl;
    cout<<t1.dept<<endl;
    cout<<t1.get_salary();

}
