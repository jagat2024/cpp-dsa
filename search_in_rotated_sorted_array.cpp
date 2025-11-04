#include<iostream>
#include<vector>
using namespace std;
int bs(vector<int> arr,int tar){
    int i=0;
    int j=arr.size()-1;
    
    while(i<j){
        int mid=i+(j-i)/2;
        if(arr[mid]==tar){
            return mid;
        }
        if(tar<arr[mid]){
            if(arr[i]<=tar && tar<=arr[mid]){
                j=mid-1;
            }
            i=mid+1;
        }
        else if(tar>arr[mid]){
            if(arr[mid]<=tar && tar<=arr[j]){
                i=mid+1;
            }
            j=mid-1;
        }
        
    }
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
    cout<<"target at index"<<bs(arr,0);
}
