#include<bits/stdc++.h>
using namespace std;
string remove_all_occurance(string s,string part){
    while(s.length()>0 && s.find(part)<s.length()){
        s.erase(s.find(part),part.length());
    }
    return s;
}
int main(){
    string s;
    getline(cin,s);
    string part;
    getline(cin,part);
    string z=remove_all_occurance(s,part);
    cout<<z;

}
