#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data=val;
        left= NULL;
        right=NULL;
    }
};
int idx=-1;
Node* buildtree(vector<int> preorder){
    idx++;
    if(preorder[idx]==-1){
        return NULL;
    }
    Node* root=new Node(preorder[idx]);
    root->left=buildtree(preorder);
    root->right=buildtree(preorder);
    return root;
}
void kth_level(Node* root,int k){
    if(root==NULL){
        return;
    }
    if(k==1){
        cout<<root->data<<"---";
        return;
    }
    kth_level(root->left,k-1);
    kth_level(root->right,k-1);

}
int main(){
    vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root = buildtree(preorder);
    kth_level(root,3);
    return 0;
}
