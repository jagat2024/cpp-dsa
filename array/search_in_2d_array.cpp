#include<bits/stdc++.h>
using namespace std;
bool searchrow(vector<vector<int>> &arr,int row,int n,int key){
    int st=0;
    int end=n-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(arr[row][mid]==key){
            return true;
        }
        else if(arr[row][mid]<key){
            st=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return false;
}
bool search_in_2d_array(vector<vector<int>> &arr,int m,int n,int key){
    int st_row=0;
    int end_row=m-1;
    while(st_row<=end_row){
        int mid_row=st_row+(end_row-st_row)/2;
        if( arr[mid_row][0]<=key&& key<=arr[mid_row][n-1]){
           return searchrow( arr,mid_row,n, key);
        }
        else if(arr[mid_row][n-1]<key){
            st_row=mid_row+1;
        }
        else{
            end_row=mid_row-1;
        }
    }
    return false;
}
int main() {

    vector<vector<int>> arr = {
        {1, 4, 7, 9},
        {12, 15, 18, 20},
        {22, 25, 29, 30}
    };

    int key;
    cout << "Enter the key to search: ";
    cin >> key;

    if(search_in_2d_array(arr, arr.size(), arr[0].size(), key))
        cout << "FOUND\n";
    else
        cout << "NOT FOUND\n";

    return 0;
}