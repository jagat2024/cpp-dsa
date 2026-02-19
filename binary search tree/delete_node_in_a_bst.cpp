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
Node* getinordersuccessor(Node* root){
    while(root!=NULL && root->left!=NULL){
        root=root->left;
    }
    return root;
}
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
Node* delete_node(Node* root,int key){
    if(root==NULL){
        return NULL;
    }
    if(key<root->data){
        root->left=delete_node(root->left,key);
    }
    else if(key>root->data){
        root->right=delete_node(root->right,key);
    }
    else{
        //root==key
        if(root->left==NULL){
            Node*temp=root->right;
            delete root;
            return temp;
        }
        else if(root->right==NULL){
            Node*temp=root->left;
            delete root;
            return temp;
        }
        else{
            Node* IS=getinordersuccessor(root->right);
            root->data=IS->data;
            root->right=delete_node(root->right,IS->data);

        }

    }
    return root;
}

Node* buildtree(vector<int> arr){
    Node* root=NULL;
    for(int val: arr){
        root=insert(root,val);
    }
    return root;
}
void inorder(Node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data;
    inorder(root->right);

}
int main(){
    vector<int> arr={3,2,1,5,4,6};
    Node* root=buildtree(arr);
    int key;
    cout<<"enter the key"<<endl;
    cin>> key;
    inorder(root);
    delete_node(root,key);
    inorder(root);
    
}
