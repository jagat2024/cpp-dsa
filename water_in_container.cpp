#include<bits/stdc++.h>
using namespace std;
int max_water(vector<int> arr){
    int n=arr.size();
    int max_water=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int height=min(arr[i],arr[j]);
            max_water=max(max_water,height*(j-i));
        }
    }
    return max_water;
}
int main(){
    vector<int> arr;
    int n;
    cin>>n;
    cout<<"enter the input in the array"<<endl;
    for(int i=0;i<n;i++){
        int z;
        cin>>z;
        arr.push_back(z);
    }
    cout<<"maxprofit"<<":->"<<max_water(arr);
}

