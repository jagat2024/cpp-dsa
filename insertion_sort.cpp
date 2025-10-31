#include<bits/stdc++.h>
using namespace std;
void insertionsort( vector<int> &arr,int size){
    for(int i=1;i<size;i++){
        int curr=arr[i];
        int prev=i-1;
        while(prev>=0 && curr<arr[prev]){
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=curr;
    }

}
int main(){
    vector<int> arr;
    int n;
    cout<<"enter the size of arr";
    cin>>n;
    for(int i=0;i<n;i++){
        int z;
        cin>>z;
        arr.push_back(z);
    }
    int size=arr.size();
    insertionsort(arr,size);
    cout<<"arr"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
}