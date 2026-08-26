#include<stdio.h>
#include<stdlib.h>

// BST node definition
struct Node{
    int data;
    struct Node *left;
    struct Node *right;
};

// new node creation
struct Node *createNode(int value){
    struct Node *newNode=(struct Node *)malloc(sizeof(struct Node));
    newNode->data=value;
    newNode->left=NULL;
    newNode->right=NULL;
    return newNode;
}


// inorder traversal-->left-root-right
void inorderTraversal(struct Node *root){
    if(root==NULL){
        return;
    }
    inorderTraversal(root->left);
    printf("%d",root->data);
    inorderTraversal(root->right);
}

// pre-order traversal-->root-left-right
void preorderTraversal(struct Node *root){
    if(root==NULL){
        return;
    }
    printf("%d",root->data);
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

int main(){
    struct Node *root=createNode(1);
    root->left=createNode(2);
    root->right=createNode(3);

    root->left->left=createNode(4);
    root->left->right=createNode(5);

    printf("Inorder Traversal:");
    inorderTraversal(root);

    printf("\nPreoder Traversal:");
    preorderTraversal(root);

    return 0;
}