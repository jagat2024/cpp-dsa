#include<bits/stdc++.h>
using namespace std;
class Node{
  public:
  int data;
  Node* left;
  Node* right;
  Node(val){
    data=val;
    left=NULL;
    right=NULL;
  }
}
static int idx=-1;
Node* buildtree(vector<int> preorder){
  idx++;
  if(preorder[idx]=-1){
    return NULL;}
    Node* root=new Node(preorder[idx]);
    root->left=buildtree(preorder);//LEFT
    root->right=buildtree(preorder);//RIGHT

    return root;
}
void height_of_tree(Node* root){
  if(root==NULL){
    return 0;
  }
  leftht=height_of_tree(root->left);
  right=height_of_tree(root->right);
  return max(leftht,right)+1;
}
int main(){
    vector<int> preorder={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root=buildtree(preorder);
    cout<<"height:"<<height_of_tree(root)<<endl;
}
