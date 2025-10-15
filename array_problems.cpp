#include<iostream>
#include<vector>
using namespace std;
/*
int main(){
    cout<<"find the max and min from the array"<<endl;
    int n;
    cout<<"enter the no. of  element to enter  "<<endl;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=0;
    int min=INT16_MAX;
    int i=0;
    while(i<n){
        for (int i=0;i<n;i++){
        if(arr[i]<min){
           min=arr[i];
        }
        if(arr[i]>max){
                max=arr[i];
            }
        }
        i++;
    }
    cout<<"max"<<max<<" "<<"min"<<min<<endl;
}
*/
//reverse an array by pass by reference
/*
-----------------------------------------------------------------
void revarr(vector<int> &arr){
    for(int i = 0; i < arr.size()/2; i++){
        int temp = arr[i];
        arr[i] = arr[arr.size() - 1 - i];
        arr[arr.size() - 1 - i] = temp;
    }
}

int main(){
    int n;
    cout<<"enter the no. of  element to enter  "<<endl;
    cin>>n;
    vector<int> arr;
    for (int i=0;i<n;i++){
        int key;
        cin>>key;
        arr.push_back(key);
    }
    revarr(arr);
    for (int i=0;i<n;i++){
        cout<<arr[i];
    }

}
--------------------------------------------------------------------
*/
//write a function to acalculate the sum and product of elements in an array
/*
-------------------------------------------------------------------------------------------
pair<int, int> sum_product(vector<int> &arr) {
    int sum = 0;
    int product = 1;
    for(int i = 0; i < arr.size(); i++) {
        sum += arr[i];
        product *= arr[i];
    }
    return {sum, product}; 
}
int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    pair<int, int> p = sum_product(arr);
    cout << "Sum = " << p.first << ", Product = " << p.second << endl;
    return 0;
}
-------------------------------------------------------------------------------------------
*/
//waf to print max and mini number of an array and awap them
//---------------------------------------------------------------------------
/*
void swap(vector<int> arr){
    int max=0;
    int min=INT16_MAX;
    int i=0;
    while(i<arr.size()){
        for (int i=0;i<arr.size();i++){
        if(arr[i]<min){
           min=arr[i];
        }
        if(arr[i]>max){
                max=arr[i];
            }
        }
        i++;
    }
    swap(max,min);
    cout<<"max"<<max<<" "<<"min"<<min<<endl;
}

int main(){
    cout<<"find the max and min from the array"<<endl;
    int n;
    cout<<"enter the no. of  element to enter  "<<endl;
    cin>>n;
    vector <int> arr(n);
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    swap(arr);
}
*/
//write a function to print all the unique no in an array
/*
void unique(vector<int> &arr){
    for (int i=0;i<arr.size();i++){
        int count=0;
        for(int j=0;j<arr.size();j++){ 
            if(arr[i]==arr[j]){                                              
                count++;
            }
        }
        if(count==1){
            cout<<"is a unique no.:"<<arr[i]<<endl;
        }
         
    }
}
 int main(){
    int n;
    cout<<"enter the no. of elements to enter "<<endl;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    unique(arr);
 }
*/
//write a function to find intersection of 2 array
void intersection_array(vector<int> arr1,vector<int> arr2){
    for (int i=0;i<arr1.size();i++){
        for(int j=0;j<arr2.size();j++){
            if(arr1[i]==arr2[j]){
                cout<<"the intersection is "<<arr1[i];
            }
        }
    }
}
int main(){
    int n;
    cout<<"enter the no. of elements to enter "<<endl;
    cin>>n;
    vector<int> arr1(n);
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    int j;
    cout<<"enter the no. of elements to enter "<<endl;
    cin>>j;
    vector<int> arr2(n);
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    intersection_array(arr1,arr2);
}










