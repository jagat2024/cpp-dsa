#include<bits/stdc++.h>
using namespace std;
void bubblesort(vector<int> &arr, int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j+1]<arr[j]){
                swap(arr[j+1],arr[j]);
            }
        }
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
    bubblesort(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
}