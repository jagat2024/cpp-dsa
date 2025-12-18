#include<iostream>
#include<vector>
using namespace std;
class Stack{
    public:
    vector<int> stx;
    void push(int val){
        stx.push_back(val);
        return;
    }
    void pop(){
        stx.pop_back();
        return;
    }
    void top(){
        cout<<stx[stx.size()-1];
        return;
    }
    bool empty(){
        return stx.size()==0;
    }
};
int main(){
    Stack st;
    st.push(10);
    st.push(11);
    st.push(12);
    st.push(13);
    st.push(14);
    st.top();
    st.pop();
    st.top();
}
