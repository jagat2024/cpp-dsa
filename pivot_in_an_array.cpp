#include<bits/stdc++.h>
using namespace std;
int pivot_in_array(vector<int>& arr){
    int start=0;
    int end=arr.size()-1;
    int mid=start+(end-start)/2;
    while(start<end){
        if(arr[mid]>=arr[0]){
            start=mid+1;
        }
        else {
            end=mid;
        }
        mid=start+(end-start)/2;
    }
    return end;
}
int main(){
    vector<int> arr={6,5,7,10,1,2,3};
    int z=pivot_in_array(arr);
    cout << "Peak index = " << z << endl;
    cout << "Peak element = " << arr[z] << endl;
    return 0;
}