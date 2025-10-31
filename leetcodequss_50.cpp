//leetcode ques50 pow(x,n)
#include<bits/stdc++.h>
using namespace std;
double myPow(double x,int n){
    if(n==0) return 1.0;
    if(x==0) return 0.0;
    if(x==1) return 1.0;
    if(x==-1 && n%2==0) return 1.0;
    if(x==-1 && n%2!=0) return -1.0;
    long binform=n;
    double ans=1;
    if(n<0){
        x=1/x;
        binform= (-1)* binform;
    }
    while(binform>0){
        if(binform%2==1){
            ans=ans*x;
        }
        x=x*x;
        binform=binform/2;
    }
    return ans;
}
int main(){
    double x=2.00000;
    int z=10;
    cout<<myPow(x,z);
}