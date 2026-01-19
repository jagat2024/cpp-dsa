#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};
static int idx = -1;
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

int count_nodes(Node* root){
    if(root == NULL){
        return 0;
    }
    int lf = count_nodes(root->left);
    int rght = count_nodes(root->right);
    return lf + rght + 1;
}

int main(){
    vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root = buildtree(preorder);
    cout << "no. of nodes = " << count_nodes(root) << endl;
    return 0;
}
