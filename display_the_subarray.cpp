#include<bits/stdc++.h>
using namespace std;
void display_subarray(vector<int>& arr){
    for(int st=0;st<arr.size();st++){
        for(int end=st;end<arr.size();end++){
            for(int i=st;i<=end;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }
}
int main(){
    vector<int> arr={1,5,4,3,8};
    int n;
    cout<<"enter the elements number";
    cin>>n;
    display_subarray(arr);

}