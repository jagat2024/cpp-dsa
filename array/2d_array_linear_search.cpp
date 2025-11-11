#include <bits/stdc++.h>
using namespace std;

pair<int,int> linear_search(vector<vector<int>>& arr, int m, int n, int key) {
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(arr[i][j] == key) {
                return {i,j};
            }
        }
    }

}

int main() {
    int m, n;
    cout << "Enter rows and columns: ";
    cin >> m >> n;

    int key;
    cout << "Enter key to search: ";
    cin >> key;

    vector<vector<int>> arr(m, vector<int>(n));
    cout << "Enter array elements:\n";
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    pair<int ,int> j=linear_search(arr,m,n,key);
    cout<<" "<<j.first<<" "<<j.second;

    return 0;
}
