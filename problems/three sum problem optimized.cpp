#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> three_sum(vector<int>&arr){
    int n=arr.size();
    
    set<vector<int>> unique;
    for(int i=0;i<n;i++){
        int tar=-arr[i];
        set<int> s;
        for(int j=i+1;j<n;j++){
            int third=-arr[j]+tar;
            if(s.find(third)!=s.end()){
                vector<int> trip={arr[i],arr[j],third};
                sort(trip.begin(),trip.end());
                unique.insert(trip);
            }
            s.insert(arr[j]);
        }
    }
    vector<vector<int>> ans(unique.begin(),unique.end());
    return ans;
}
int main(){
    vector<int> array;
    int n;
    cout<<"enter the number of elements to br input in array";
    cin>>n;
    for(int i=0;i<n;i++){
        int z;
        cin>>z;
        array.push_back(z);
    }
    vector<vector<int>> k=three_sum(array);
    for(auto &iter : k){
        cout << "[ ";
        for(int x : iter){
            cout << x << " ";
        }
        cout << "]\n";
    }
}
