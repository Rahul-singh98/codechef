#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
    int data;
    struct TreeNode *left , *right;

    TreeNode(int data){
        left = right = NULL;
        this->data = data;
    }
};

void InOrder(struct TreeNode *node){
    if (node == NULL)
        return ;

    InOrder(node->left);
    cout << node->data << " ";
    
    InOrder(node->right);
}

void PreOrder(struct TreeNode *node){
    if (node == NULL)
        return ;

    cout << node->data << " " ;
    PreOrder(node->left);
    PreOrder(node->right);
}

void PostOrder(struct TreeNode *node){
    if (node == NULL)
        return;

    PostOrder(node->left);
    PostOrder(node->right);
    cout << node->data << " ";
}

int main(){
    struct TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    cout << "preOrder Traversal" << "\n";
    PreOrder(root);
    cout << "\n";

    cout << "InOrder Traversal" << "\n";
    InOrder(root);
    cout << "\n";

    cout << "postOrder Traversal" << "\n";
    PostOrder(root);
    cout << "\n";
    return 0;
}