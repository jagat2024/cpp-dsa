#include <bits/stdc++.h>
using namespace std;

int maximum_sum_array(vector<vector<int>> arr, int m, int n) {
    int max_sum = INT_MIN;

    for (int j = 0; j < n; j++) { // column loop
        int col_sum = 0;
        for (int i = 0; i < m; i++) { // row loop
            col_sum += arr[i][j];
        }
        max_sum = max(max_sum, col_sum);
    }

    return max_sum;
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

    int k = maximum_sum_array(arr, m, n);
    cout << "Maximum column sum: " << k << endl;

    return 0;
}
