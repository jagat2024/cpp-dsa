/*You are given an array prices where prices[i] is the price of a given stock on the ith day.
You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.
*/
#include<bits/stdc++.h>
using namespace std;
int buy_sell_stock(vector<int> arr){
    int n=arr.size();
    int best_buy=arr[0];
    int max_profit=0;
    for(int i=1;i<n;i++){
        if(arr[i]>best_buy){
            max_profit=max(max_profit,arr[i]-best_buy);
        }
        best_buy=min(best_buy,arr[i]);
    }
    return max_profit;
}
int main(){
    vector<int> arr;
    int n;
    cin>>n;
    cout<<"eneter the input in the array"<<endl;
    for(int i=0;i<n;i++){
        int z;
        cin>>z;
        arr.push_back(z);
    }
    cout<<"maxprofit"<<":->"<<buy_sell_stock(arr);
}