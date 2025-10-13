#include<bits/stdc++.h>
using namespace std;
int firstoccur(vector<int>& arr,int n,int k){
    int start=0;
    int end=n-1;
    int ans=-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if (arr[mid]==k){
            ans=mid;
            end=mid-1;
        }
        else if(arr[mid]<k){
            start=mid+1;
        }
        else if(arr[mid]>k){
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
    
}
int lastoccur(vector<int>& arr,int n,int k){
    int start=0;
    int end=n-1;
    int ans=-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if (arr[mid]==k){
            ans=mid;
            start=mid+1;
        }
        else if(arr[mid]<k){
            start=mid+1;
        }
        else if(arr[mid]>k){
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair<int,int>p;
    p.first=firstoccur(arr,n,k);
    p.second=lastoccur(arr,n,k);
    return p;
}
int main() {
    vector<int> arr = {1, 2, 3, 3, 3, 4, 5};
    int k = 3;
    pair<int,int> ans = firstAndLastPosition(arr, arr.size(), k);
    cout << ans.first << "is the first occurance  index " << ans.second<< "is the last occurance  index"<<endl;
    int s = (ans.second - ans.first) + 1;
    cout<<"the total.no. of occurance is :"<<s<<endl;
}