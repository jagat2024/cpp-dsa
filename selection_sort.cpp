#include<bits/stdc++.h>
using namespace std;
void selectionsort( vector<int> &arr,int size){
 for (int i=0;i< size;i++){
    int min=i;
    for(int j=i+1;j<size;j++){
        if(arr[j]<arr[min]){
            min=j;
        }
        
    }
    swap(arr[min],arr[i]);
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
    selectionsort(arr,size);
    cout<<"arr"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
}