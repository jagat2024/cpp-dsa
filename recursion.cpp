#include<bits/stdc++.h>
using namespace std;
//print name n times()

void nam(string name, int n) {
    if (n == 0) return;     // base case
    cout << name << endl;
    nam(name, n - 1);       // recursive call
}

int main() {
    nam("jagat", 5);
    return 0;
}

//print linearly from 1 to n

void linear(int i,int n){
    if (i>n){
        return;
    }
    cout<<i<<" "<<endl;
    linear(i+1,n);
}

int main(){
    linear(0,5);
}

//print from n to 1

void backword(int n){
    if(n<0){
        return;
    }
    cout<<n<<" "<<endl;
    backword(n-1);
}
int main(){
    backword(65);
}
    
//print linearly from 1 to n using backtracking 

void linearly(int i){
    if(i<1){
        return;
    }
    linearly(i-1);
    cout<<i;
    cout<<endl;
 }
 int main(){
    linearly(5);
}
//swapping the array or reversing the array
/*void reverse(int i,int arr[],int n){
    if(i>=n/2){
        return;
    }
    swap(arr[i],arr[n-i-1]);
    reverse(i+1,arr,n);

}

int main(){
    int n;
    cout<<"no of array element:"<<endl;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    reverse(0,arr,n);
    for (int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }

}
*/
/*
int palindrome(int i, string str, int n) {
    if (i >= n / 2) return 1;  // base case: checked all pairs
    if (str[i] != str[n - 1 - i]) return 0; // mismatch found
    return palindrome(i + 1, str, n); // recursive call
}

int main() {
    string str;
    cin >> str;
    int n = str.size();   // correct way to find length
    int z = palindrome(0, str, n);
    cout << z;
    return 0;
}
*/
//recursion
/*
int fibbonacci(int n){
    if(n<=1) return n;
    return fibbonacci(n-1)+fibbonacci(n-2);
}
int main(){
    int z=fibbonacci(3);
    cout<<z<<endl;
}
*/
//factorial
/*
 int factorial(int n){
    if(n<=1){
        return 1;
    }
    return n*factorial(n-1);
 }
 int main(){
    int n;
    cout<<"enter the no for which you want the factorial"<<endl;
    cin>>n;
    int k=factorial(n);
    cout<<k<<endl;
 }
 */
//code power of 2
/*
int power(int a,int p){
    if (p==0){
        return 1;
    }
    return a*power(a,p-1);
}

int main(){
    int a;
    int p;
    cout<<"enter the number whose power u want:";
    cin>>a;
    cout<<"enter the power "<<endl;
    cin>>p;
    int z=power(a,p);
    cout<<z;
}
*/
//print counting
/*
void print_counting(int n){
    if(n==0){
        return;
    }
    print_counting(n-1);
    cout<<n<<endl;
}
int main(){
    int n;
    cout<<"enter the number to count"<<endl;
    cin>>n;
    print_counting(n);
}
*/
//nthf term of the fibbonacci
/*
int fibbo(int n){
    if(n==1 or n==0){
        return n;
    }
    return fibbo(n-2)+fibbo(n-1);

}
int main(){
    int n;
    cout<<"enter the terms:"<<endl;
    cin>>n;
    int z=fibbo(n);
    cout<<z;
}
*/
//you RE  given a number of stairs,initially,you are a the oth stair and you need to reach the nth stair each time you can either clmb one step or 2 step;you are supposed the return the no. of distinct step
/*
int countstairs(int n){
    if(n==0){
        return 1;
    }
    if(n<0){
        return 0;
    }
    return countstairs(n-2)+countstairs(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<"the no of stairs is "<<n;
    cout<<endl;
    int z=countstairs(n);
    cout<<"the no. of distinct ways "<<z;
}
*/
//write a program for the output of digits
/* 
void digit(int n,string arr[10]){
    if(n==0){
        return;
    }
    int digits=n%10;
    n=n/10;
    digit(n, arr);
    cout<<arr[digits]<<" ";
}
int main(){
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    digit(420,arr);
}
*/
//wap to check if the given input of the array element are in sorted order
/*
bool issorted(int arr[],int size){
    if (size==0||size==1){
        return true;
    }
    else{
        if(arr[0]>arr[1]){
            return false;
        }
        else{
        return issorted(arr+1,size-1);
        }
    }
}
int main(){
    int arr[10]={0,1,2,3,4,5,6,7,8,9};
    if(issorted(arr,10)){
        cout<<"the array is sorted"<<endl;
    }
    else{
        cout<<"thew array is not sorted"<<endl;
    }

}
*/
//write a program to get sum of element in array using recurssion
/*
int get_sum(int *arr,int size){
    if(size==0){
        return 0;
    }
    if(size==1){
        return arr[0];
    }
    return arr[0]+get_sum(arr+1,size-1);
}
int main(){
    int arr[10]={0,1,2,3,4,5,6,7,8,9};
    int z=get_sum(arr,10);
    cout<<z<<endl;
}
*/
//linear search by recurssion
/*
int i=0;

bool linear_search(int arr[],int size,int key){
    if(arr[0]==key){
        return true;
    }
    if(size==0){
        return false;
    }
    i++;
    return linear_search(arr+1,size-1,key);
}
int main(){
    int arr[10]={3,5,4,7,8,9,1,20,22,54};
    int key=22;
    if(linear_search(arr,10,7)){
        cout<<"key found at index"<<i;
    }
    else{
        cout<<"elemeny not found";
    }
}
*/
/*
bool binary(int arr[],int size,int key,int start){
    if(start>size){
        return false;
    }
    int mid=start+(size-start)/2;
    if (key<arr[mid]){
        return binary(arr,mid-1,key,start);
    }
    else if(key>arr[mid]){
        return binary(arr,size,key,mid+1);
    }
}

int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"enter the key:"<<endl;
    cin>>key;
    if(binary(arr,size,key,0)){
        cout<<"element found"<<endl;
    }
    else{
        cout<<"element not found";
    }
}
*/
//first and last occurancew of element in an array
int firstoccur(vector<int>& arr,int n,int k){
    int start=0;
    int end=n-1;
    int ans=-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if (arr[mid]==k){
            ans=mid;
            end=mid-1;
        }
        else if(arr[mid]<k){
            start=mid+1;
        }
        else if(arr[mid]>k){
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
    
}
int lastoccur(vector<int>& arr,int n,int k){
    int start=0;
    int end=n-1;
    int ans=-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if (arr[mid]==k){
            ans=mid;
            start=mid+1;
        }
        else if(arr[mid]<k){
            start=mid+1;
        }
        else if(arr[mid]>k){
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair<int,int>p;
    p.first=firstoccur(arr,n,k);
    p.second=lastoccur(arr,n,k);
    return p;
}
int main() {
    vector<int> arr = {1, 2, 3, 3, 3, 4, 5};
    int k = 3;
    auto ans = firstAndLastPosition(arr, arr.size(), k);
    cout << ans.first << "is the first occurance  index " << ans.second<< "is the last occurance  index"<<endl;
}























































































































































































