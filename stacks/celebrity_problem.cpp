#include<bits/stdc++.h>
using namespace std;
int get_celebrity(vector<vector<int>> &arr){
    stack<int> s;
    int n=arr.size();
    for(int i=0;i<n;i++){
        s.push(i);
    }
    while(s.size()>1){
        int a=s.top(); 
        s.pop();
        int b= s.top();
        s.pop();
        if(arr[a][b]==0){
            s.push(a);
        }
        else{
            s.push(b);
        }
    }
    int celeb=s.top();
    for(int i=0;i<n;i++){
        if((i!=celeb) && (arr[i][celeb]==0 || arr[celeb][i]==1)){
            return -1;
        }
    }
    return celeb;
}
int main(){
    vector<vector<int>> arr={{0,1,0},{0,0,0},{0,1,0}};
    int ans = get_celebrity(arr);
    cout<<"celebrity is:"<<ans<<endl;
}
