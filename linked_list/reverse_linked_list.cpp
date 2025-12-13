#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int val){
        this->data=val;
        next=NULL;
    }
};
class list{
    Node *head;
    Node *tail;
    public:
    list(){
        head=tail=NULL;
    }
    void push_front(int val){
        if(head==NULL){
            Node *newnode= new Node(val);
            head=tail=newnode;
            return;
        }
        else{
            Node *newnode= new Node(val);
            newnode->next = head;
            head=newnode;
            return;
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
            tail->next=newnode;
            tail=newnode;
        }
    }
    void pop_front(){
        if(head==NULL){
            cout<<"the linked list is empty"<<endl;
            cout<<"============================"<<endl;
            return;
        }
        else{
            Node* temp=head;
            head=temp->next;
            delete temp;
        }

    }
    void pop_back(){
        if(head==NULL){
            cout<<"the linked list is empty"<<endl;
            cout<<"=================================="<<endl;
            return;
        }
        if(head == tail){   // only one node
            delete head;
            head = tail = NULL;
            return;
        }
        else{
            Node *temp=head;
            while(temp->next != tail){
             temp = temp->next;
            }
            delete tail;
            tail = temp;
            tail->next = NULL;
        }
    }
    void insert(int val,int pos){
        Node* newnode=new Node(val);
        Node* temp=head;
        int count=0;
        if(pos<=0){
            cout<<"invalid input"<<endl; return;
        }
        if(pos==1){
            push_front(val);return;
        }
        while(temp != NULL && count < pos-1){
            temp=temp->next;
            count++;
        }
        newnode->next=temp->next;
        temp->next=newnode;
        return;
    }
    int  search(int val){
        Node* temp = head;
        int idx = 0;

        while(temp != NULL){
            if(temp->data == val){
                return idx;
            }
            temp = temp->next;
            idx++;
        }
        return -1;
    }

    void print_ll(){
        Node* temp=head;
        if(temp==NULL){
            cout<<"the ll is empty"<<endl;
            return ;
        }
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        return;
    }
    void  reverse_linked_list(){
        Node* prev=NULL;
        Node* next=NULL;
        Node* curr=head;
        tail=head;
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;

            prev=curr;
            curr=next;
        }
        head=prev;
        return;
    }


};
int main(){
    list ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_front(4);
    ll.push_front(5);
    ll.push_front(6);
    ll.push_front(7);
    /*cout<<endl;
    ll.print_ll();
    cout<<endl;
    ll.pop_back();
    ll.insert(24,5);
    ll.print_ll();
    cout<<endl;
    ll.pop_front();
    ll.print_ll();
    cout<<endl;
    int k=ll.search(24);
    cout<<k<<endl;*/
    ll.reverse_linked_list();
    ll.print_ll();

}
