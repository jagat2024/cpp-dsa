#include<iostream>
#include<vector>
using namespace std;
int single_element_sorted_array(vector<int> arr){
    int st=0;
    int n=arr.size()-1;
    int end=arr.size()-1;
    if(arr.size()==1) return arr[0];
    while(st<=end){
        int mid=st+(end-st)/2;
        if(mid==0 && arr[0]!=arr[1]){
           return arr[mid];
        }
        if(mid==arr.size()-1 && arr[n-2]!=arr[n-1])
            return arr[mid];
        if(arr[mid]!=arr[mid-1] && arr[mid]!=arr[mid+1]){
            return arr[mid];
        }    
        if(mid%2==0){
            if(arr[mid]==arr[mid-1]){
                end=mid-1;
            }
            else
                st=mid+1;
        }
        else{
            if(arr[mid]==arr[mid-1]){
                st=mid+1;
            }
            else{
                end=mid-1;
            }
        }
    }  
}
int main(){
    vector<int> arr;
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        int z;
        cin>>z;
        arr.push_back(z);
    }
    int k=single_element_sorted_array(arr);
    cout<<"the elemnt is at"<<k<<endl;
}