#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
        Node(int val){
        data=val;
        next=NULL;
        }
};
class Queue{
    Node* head;
    Node* tail;
    public:
    Queue(){
        head=tail=NULL;
    }
    void push(int val){
        Node* newnode=new Node(val);
        if(head==NULL){
            head=tail=newnode;
        }
        else{
            tail->next=newnode;
            tail=newnode;
        }
    }
    void pop(){
        if(head==NULL){
            cout<<"the queue is empty"<<endl;
        }
        else{
            Node*temp=head;
            head=head->next;
            delete(temp);
        }
    }
    void seek(){
        if(head==NULL){
            cout<<"empty"<<endl;
        }
        else{
            cout<<head->data;
        }
    }
};
int main(){
    Queue q;
    q.push(10);
    q.push(11);
    q.push(12);
    q.push(13);
    q.push(14);
    q.push(15);
    q.seek();
    q.pop();
    q.seek();
}
