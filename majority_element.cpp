//brute force approach to find majority elemt in an array time complexity o(n^2)
#include<bits/stdc++.h>
using namespace std;
int majority_element(vector<int> arr){
    for (auto val:arr){
        int freq=0;
        for(auto item: arr){
            if(val==item){
                freq++;
            }
        }
        if(freq>arr.size()/2){
            return val; 
        }
    }
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