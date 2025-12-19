//this is stock span prblm where span =consecutivr prev day price<=toaday price
#include<bits/stdc++.h>
using namespace std;
void stock_span(vector<int>& stock){
    vector<int> ans(stock.size(),0);
    stack<int> st;
    for(int i=0;i<stock.size();i++){
        while(st.size()>0&& stock[st.top()]<=stock[i]){
            st.pop();
        }
        if(st.empty()){
            ans[i]=i+1;
        }
        else{
            ans[i]=i-st.top();
        }
        st.push(i);
    }
    for(int val: ans){
        cout<<val<<" "<<endl;
    }
}
int main(){
    vector<int> stock={100,80,60,70,60,75,85};
    stock_span(stock);
}
