#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *left,*right;
};

Node* insert(Node* root,int x){
    if(root==NULL){
        root=new Node();
        root->data=x;
        root->left=root->right=NULL;
        return root;
    }

    if(x < root->data)
        root->left=insert(root->left,x);
    else
        root->right=insert(root->right,x);

    return root;
}

void inorder(Node* root){
    if(root){
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}

int main(){
    Node* root=NULL;
    int n,x;

    cout<<"Enter number of nodes: ";
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>x;
        root=insert(root,x);
    }

    cout<<"AVL Tree: ";
    inorder(root);
}
