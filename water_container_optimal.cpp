#include<bits/stdc++.h>
using namespace std;
int water_max_container(vector<int> arr){
    int i=0;
    int j=arr.size()-1;
    int maxx=0;
    while(i<j){
        int height=min(arr[i],arr[j]);
        maxx=max(maxx,height*(j-i));
        if (arr[i] < arr[j]){ 
            i++;}
        else{  
            j--;
        }
        
    }
    return maxx;
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
    cout<<"maxprofit"<<":->"<<water_max_container(arr);
}

