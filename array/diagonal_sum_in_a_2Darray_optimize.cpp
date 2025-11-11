#include<bits/stdc++.h>
using namespace std;
int diagonal_sum(vector<vector<int>> arr,int n,int m){
    int diagonal=0;
    for(int i=0;i<n;i++){
        diagonal=diagonal+arr[i][i];
        if(i!=n-i-1){
            diagonal=diagonal+arr[i][n-i-1];
        }
    }
    return diagonal;
}
int main() {
    int m, n;
    cout << "Enter rows and columns: ";
    cin >> m >> n;

    vector<vector<int>> arr(m, vector<int>(n));

    cout << "Enter elements of matrix:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    int k=diagonal_sum(arr,m,n);
    cout<<k<<endl;
}