#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
class Circular_linked_list{
    Node *head;
    Node *tail;
    public:
    Circular_linked_list(){
        head=tail=NULL;
    }
    void push_back(int val){
        if(head==NULL){
            Node *newnode= new Node(val);
            head=tail=newnode;
            head->next=head;
            return;
        }
        else{
            Node *newnode= new Node(val);
            tail->next=newnode;
            tail=newnode;
            newnode->next=head;
            return;
        }
        
    }
    void print_ll(){

        Node* temp=tail->next;
        int c=0;
        while(c!=14){
            cout<<temp->data<<"->";
            temp=temp->next;
            c++;
        }
        cout<<endl;
    }
};
int main(){
    Circular_linked_list cll;
    cll.push_back(1);
    cll.push_back(2);
    cll.push_back(3);
    cll.push_back(4);
    cll.push_back(5);
    cll.push_back(6);
    cll.push_back(7);
    cll.print_ll();
}
