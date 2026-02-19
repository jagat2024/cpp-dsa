#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node (int val){
        data=val;
        left=right=NULL;
    }
};
Node* insert(Node*root,int val){
    if(root==NULL){
        return new Node(val);
    }
    if(root->data>val){
        root->left=insert(root->left,val);
    }
    else{
        root->right=insert(root->right,val);
    }
}
bool searchbst( Node* root,int key){
    if(root==NULL){
        return false;
    }
    if(root->data==key){
        return true;
    }
    if(root->data<key){
        return searchbst(root->right,key);
    }
    else{
        return searchbst(root->left,key);
    }
}

Node* buildtree(vector<int> arr){
    Node* root=NULL;
    for(int val: arr){
        root=insert(root,val);
    }
    return root;
}
int main(){
    vector<int> arr={3,2,1,5,4,6};
    Node* root=buildtree(arr);
    int key;
    cout<<"enter the key"<<endl;
    cin>> key;
    cout<<searchbst(root,key);
}
