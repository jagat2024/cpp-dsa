//sorted array
#include<iostream>
#include<vector>
using namespace std;
int sorted_array(vector<int> &arr,int size){
    if(size==0 || size==1){
        return 1;
    }
    if(arr[size-1]<=arr[size-2]){
        return -1;
    }
    return sorted_array(arr,size-1);
    
}
int main(){
    vector<int> arr={1,2,3,5,4};
    int z=sorted_array(arr,arr.size());
    cout<<"the array is "<<" "<<z;
}
