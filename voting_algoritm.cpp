//using moore's voting algorithm
#include<bits/stdc++.h>
using namespace std;

int majority_element(vector<int> arr){
    int n=arr.size();
    int freq=0;
    int ans=0;
    for(int i=0;i<n;i++){
        if (freq==0){
            ans=arr[i];
        }
        if (arr[i+1]==ans){
            freq++;
        }
        else{
            freq--;
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