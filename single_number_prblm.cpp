#include<bits/stdc++.h>
using namespace std;
int single_number(vector<int>& arr){
    int ans=0;
    for(int val: arr){
        ans=ans^val;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int z=single_number(arr);
    cout<<"the value or the single number that is unique is "<<z<<endl;
}