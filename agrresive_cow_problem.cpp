#include <bits/stdc++.h>
using namespace std;

bool is_possible(vector<int> &arr, int n, int m, int distance) {
    int cows = 1;
    int last_pos = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] - last_pos >= distance) {
            cows++;
            last_pos = arr[i];
        }
        if (cows == m) return true;
    }
    return false;
}

int aggressive_cow(vector<int> &arr, int n, int m) {
    sort(arr.begin(), arr.end());
    int st = 0;
    int end = arr[n - 1] - arr[0];
    int ans = -1;

    while (st <= end) {
        int mid = st + (end - st) / 2;
        if (is_possible(arr, n, m, mid)) {
            ans = mid;
            st = mid + 1;  // try for larger distance
        } else {
            end = mid - 1; // try smaller distance
        }
    }
    return ans;
}

int main() {
    int n, m;
    cout << "Enter number of stalls: ";
    cin >> n;
    cout << "Enter number of cows: ";
    cin >> m;

    vector<int> arr(n);
    cout << "Enter stall positions: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    int result = aggressive_cow(arr, n, m);
    cout << "Maximum minimum distance: " << result << endl;
    return 0;
}
