#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node*next;
    Node(int val){
        data=val;
        prev=next=NULL;
    }

};
class doubly_linked_list{
    Node*head;
    Node* tail;
    
    public:
    doubly_linked_list(){
        head=NULL;
        tail=NULL;
    }
    void push_front(int val){
        if(head==NULL){
            Node* newnode=new Node(val);
            head=tail=newnode;
            return;
        }
        else{
            Node* newnode=new Node(val);
            newnode->next=head;
            head->prev=newnode;
            head=newnode;
        }
    }
    void push_back(int val){
        if(head==NULL){
            Node* newnode=new Node(val);
            head=tail=newnode;
            return;
        }
        else{
            Node* newnode=new Node(val);
            newnode->prev=tail;
            tail->next=newnode;
            tail=newnode;
        }
    }
    void pop_front(){
        if(head==NULL){
            cout<<"no list is there"<<endl; 
        }
        else{ 
            Node* tem=head;
            head=head->next;
            head->prev=NULL;
            delete tem;
        }

    }
    void pop_back(){
        if(head==NULL){
            cout<<"no list is there"<<endl;
        }
        else{
            Node*temp=tail;
            tail=tail->prev;
            tail->next=NULL;
            delete temp;
        }
    }
    void print_dll(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        return;
    }

};
int main(){
    doubly_linked_list dll;
    dll.push_front(9);
    dll.push_front(8);
    dll.push_front(7);
    dll.push_front(6);
    dll.push_front(5);
    dll.push_front(4);
    dll.push_front(3);
    dll.push_front(2);
    dll.push_front(1);
    dll.push_front(0);
    dll.push_back(10);
    dll.push_back(11);
    dll.push_back(12);
    dll.pop_front();
    dll.pop_front(); 
    dll.pop_back();
    dll.pop_back();
    dll.pop_back();
    dll.print_dll();
}
