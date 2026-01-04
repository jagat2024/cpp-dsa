#include<bits/stdc++.h>
using namespace std;
class Circular_queue{
    private:
    int* arr;
    int curr_size;
    int cap;
    int f;
    int r;
    public:
    Circular_queue(int size){
        cap=size;
        arr=new int[cap];
        f=0;
        r=-1;
        curr_size=0;
    }
    void push(int val){
        if (curr_size==cap){
            cout<<"CQ is full"<<endl;
            return;
        }
        
        r=(r+1)%cap;
        arr[r]=val;
        curr_size++;
        
    }
    void pop(){
        if(empty()){
            cout<<"CQ is empty";
            return;
        }
        f=(f+1)%cap;
        curr_size--;
    }
    void front(){
        if(empty()){
            cout<<"CQ is empty";
            return;
        }
        cout<<arr[f]<<endl;
    }
    bool empty(){
        return curr_size==0;
    }
};
int main(){
    Circular_queue cq(3);
    cq.push(1);
    cq.push(2);
    cq.push(3);
    cq.pop();
    cq.push(4);
    cq.front();
}
