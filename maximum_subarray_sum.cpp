//finding the maximum_subarray_sum by bruteforce method 
#include<bits/stdc++.h>
using namespace std;
int maximum_subarray_sum(vector<int> arr){
    int max_sum=INT16_MIN;
    for(int st=0;st<arr.size();st++){
        int curr_sum=0;
        for(int end=st;end<arr.size();end++){
            curr_sum=curr_sum+arr[end];
            max_sum=max(max_sum,curr_sum); 
        }
    }
    return max_sum ;
}
int main(){
    vector<int> arr={3,-4,5,4,-1,7,-8};
    int a=maximum_subarray_sum(arr);
    cout<<"the maximum subarray sum is:"<<a;
}