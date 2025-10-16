//the code is done by kadanes algo and have time complexity of 0(n)
#include <bits/stdc++.h>
using namespace std;

void kadane_algo_summax_subarrya(vector<int> arr) {
    int curr_sum = 0;
    int max_sum = INT_MIN;
    for (int st = 0; st < arr.size(); st++) {
        curr_sum += arr[st];
        max_sum = max(curr_sum, max_sum);
        if (curr_sum < 0) {
            curr_sum = 0;
        }
    }
    cout << max_sum;
}

int main() {
    vector<int> arr = {3, -4, 5, 4, -1, 7, -8};
    kadane_algo_summax_subarrya(arr);
}
