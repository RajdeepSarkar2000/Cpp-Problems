#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node*right,*left;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
node*searchinBST(node*root,int key){
    if(root==NULL){
        return NULL;
    }
    
    if(root->data==key){
        return root;
    }
    //data>key
    if(root->data>key){
        return searchinBST(root->left,key);
    }
    //data<key
    return searchinBST(root->right,key);
}

node*inorderSucc(node*root){
    node*curr=root;
    while(curr && curr->left!=NULL){
        curr=curr->left;
    }
    return curr;

}

node*deleteinBST(node*root,int key){
    //case1-node is a leaf
    //case2-node has one child 
    //case3-node has 2 children
    if(key < root->data){
        root->left=deleteinBST(root->left,key);
    }
    else if(key > root->data){
        root->right=deleteinBST(root->right,key);
    }
    else{
        if(root->left==NULL){
            node*temp=root->right;
            free(root);
            return temp;
        }
        else if(root->right==NULL){
            node*temp=root->left;
            free(root);
            return temp;
        }
        //case 3
        node*temp=inorderSucc(root->right);
        root->data=temp->data;
        root->right=deleteinBST(root->right,temp->data);
    }
    return root;
}
void inorder(node*root){
    if(root==NULL){
        return ;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main(){
    node*root=new node(4);
    root->left=new node(2);
    root->right=new node(5);
    root->left->left=new node(1);
    root->left->right=new node(3);
    root->right->right=new node(6);
    // if(searchinBST(root,5)==NULL){
    //     cout<<"Key doesnt exist"<<endl;
    // }
    // else{
    //     cout<<"Key exists"<<endl;
    // }
    inorder(root);
    cout<<endl;
    root=deleteinBST(root,5);
    inorder(root);
    cout<<endl;
    return 0;
}