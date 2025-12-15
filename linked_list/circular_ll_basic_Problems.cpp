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
    void print_ll(){
        if(head == NULL) return;

        Node* temp = head;
        do{
            cout << temp->data << "->";
            temp = temp->next;
        }while(temp != head);

        cout << "HEAD\n";
    }
    void insert_at_head(int val){
        if (head==NULL){
            Node* newnode=new Node(val);
            head=tail=newnode;
            tail->next=head;
        }
        else{
            Node* newnode=new Node(val);
            newnode->next=head;
            head=newnode;
            tail->next=head;
        }
    }
    void insert_at_tail(int val){
        if (head==NULL){
            Node* newnode=new Node(val);
            head=tail=newnode;
            tail->next=head;
        }
        else{
            Node *newnode= new Node(val);
            tail->next=newnode;
            tail=newnode;
            newnode->next=head;
            return;
        }  
    }
    void delete_at_head(){
        if(head==NULL){
            cout<<"the circular list us empty"<<endl;
            return;
        }
        if(head==tail){
            delete head;
            head=tail=NULL;
            return;
        }
        else{
            Node* temp=head;
            head=head->next;
            tail->next=head;
            temp->next=NULL;
            delete temp;
            return;
        }
    }

};
int main(){
    Circular_linked_list cll;
    cll.insert_at_head(1);
    cll.insert_at_head(2);
    cll.insert_at_head(3);
    cll.insert_at_head(4);
    cll.insert_at_head(5);
    cll.insert_at_head(6);
    cll.insert_at_head(7);
    cll.insert_at_tail(20);
    cll.insert_at_tail(21);
    cll.insert_at_tail(22);
    cll.delete_at_head();

    cll.print_ll();
}
