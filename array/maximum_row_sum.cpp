#include<bits/stdc++.h>
using namespace std;
int maximum_sum_array(vector<vector<int>> arr,int m,int n){
    int max_sum=INT_MIN;
    for(int i=0;i<m;i++){
        int row_sum=0;
        for(int j=0;j<m;j++){
            row_sum+=arr[i][j];
        }
        max_sum=max(max_sum,row_sum);
    }
    return max_sum;
}
int main(){
    int m,n;
    cout<<"enter rows and column";
    cin>>m>>n;
    vector<vector<int>> arr(m,vector<int> (n));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int k=maximum_sum_array(arr,m,n);
    cout<<"maximum sum of row major"<<k<<endl;
}