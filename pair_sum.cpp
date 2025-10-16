#include<bits/stdc++.h>
using namespace std;
vector<int> pairsum(vector<int> arr,int target){
    vector<int>ans;
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            if(arr[i]+arr[j]==target){
                ans.push_back(arr[i]);
                ans.push_back(arr[j]);
            }
        }
    }
    return ans;
}
int main(){
    vector<int> arr={1,2,3,4,7,9};
    int target=5;
    vector<int> ans=pairsum(arr,target);
    for(int i = 0; i < ans.size(); i += 2) {
        cout << ans[i] << " " << ans[i+1] << endl;
    }
}