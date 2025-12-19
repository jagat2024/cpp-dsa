#include<bits/stdc++.h>
using namespace std;
bool is_valid(string str){
    stack<char> st;
    for(int i=0;i<str.size();i++){
        if(str[i]=='(' || str[i]=='[' || str[i]=='{'){
            st.push(str[i]);
        }
        else{
            if(st.size()==0){
                return false;
            }
            if((str[i]=='}'&& st.top()=='}') || (str[i]==']'&& st.top()=='[')||(str[i]==')'&& st.top()=='(')){
                st.pop();
            }
            else{
                return false;
            }
        }
    }
    return st.size()==0?true:false;
}
int main(){
    string s;
    cin>>s;
    bool k=is_valid(s);
    cout<<k<<endl;
}
