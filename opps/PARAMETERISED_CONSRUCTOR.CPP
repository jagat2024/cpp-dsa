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
    //parametrised constructr; 
    normal_creation_of_teacher(string n,string d,long long s, long long phone){
        name=n;
        dept=d;
        salary=s;
        phoneno=phone;

    }
    //getter
    long long get_phoneno(){
        return phoneno;
    }
    long long get_salary(){
        return salary;
    }
};
int main(){


    normal_creation_of_teacher t1("jagat","computerscience",2500000,9331973920);
    cout<<t1.name<<endl;
    cout<<t1.dept<<endl;
    cout<<t1.get_salary()<<endl;
    cout<<t1.get_phoneno();
}
