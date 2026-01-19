#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node*left;
    Node*right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
static int idx=-1;
Node* buildtree(vector<int>  preorder){
    idx++;
    if(preorder[idx]==-1){
        return NULL;
    }
    Node* root=new Node(preorder[idx]);
    root->left=buildtree(preorder);//LEFT
    root->right=buildtree(preorder);//RIGHT

    return root;
}
//preorder traversal
void preorder1(Node* root){
    if (root==NULL){
        return;
    }
    cout<<root->data<<endl;
    preorder1(root->left);
    preorder1(root->right);
    //                  1
    //                /    \
    //               2      3
    //                     / \
    //                    4   5
}
//in order traversasl
void in_order_traversal(Node*root){
    if(root==NULL){
        return;
    }
    in_order_traversal(root->left);
    cout<<root->data;
    in_order_traversal(root->right);
}
void post_order_traversal(Node*root){
    if(root==NULL){
        return;
    }
    post_order_traversal(root->left);
    post_order_traversal(root->right);
    cout<<root->data;

}
//level order traversal
//     BFS breadth first search
void levelorder(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(q.size()>0){
        Node* curr=q.front();
        q.pop();
        if(curr==NULL){
            if(!q.empty()){
                cout<<endl;
                q.push(NULL);
                continue;
            }
            else{
                break;
            }
        }
        cout<<curr->data;
        if(curr->left!=NULL){
            q.push(curr->left);
        }
        if(curr->right!=NULL){
            q.push(curr->right);
        }

    }
    return;
}



int main(){
    vector<int> preorder={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root=buildtree(preorder);
    cout<<root->data<<endl;
    // preorder traversal printing 
    preorder1(root);
    cout<<endl;
    in_order_traversal(root);
    cout<<endl;
    post_order_traversal(root);
    cout<<endl;
    levelorder(root);
    cout<<endl;

}
