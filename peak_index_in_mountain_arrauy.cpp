#include<bits/stdc++.h>
using namespace std;
int peakIndexInMountainArray(vector<int>& arr) {
    int start = 0;
    int end = arr.size() - 1;
    int mid;

    while (start < end) {
        mid = start + (end - start) / 2;

        if (arr[mid] < arr[mid + 1]) {
            start = mid + 1;
        } else {
            end = mid;
        }
    }

    return start; 
}

int main(){
    vector<int> arr={1,3,5,7,6,4,2};
    int z=peakIndexInMountainArray(arr);
    cout << "Peak index = " << z << endl;
    cout << "Peak element = " << arr[z] << endl;
    return 0;
}