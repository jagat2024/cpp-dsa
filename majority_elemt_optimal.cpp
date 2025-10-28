//optimal qay to find majority element in an array {time complexity nlogn}
#include<bits/stdc++.h>
using namespace std;
int majority_element(vector<int> arr){
    int n=arr.size();
    sort(arr.begin(),arr.end());
    int freq=1;
    int ans=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]=arr[i-1]){
            freq++;
        }
        else{
            freq=1;
            ans=arr[i];
        }
        if(freq>n/2){
            return ans;
        }
    }
    return ans;
}
int main(){
    vector<int> arr;
    int i;
    cout<<"enter the elements present in array";
    cin>>i;
    for (int j=0;j<i;j++){
        int z;
        cin>>z;
        arr.push_back(z);
    }
    int k=majority_element(arr);
    cout<<"the mejority element in the array is :"<<k<<endl;

}