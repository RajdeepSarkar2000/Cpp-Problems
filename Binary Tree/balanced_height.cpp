#include<bits/stdc++.h>
using namespace std;
//For each node , the difference between the heights of the left subtree and right subtree <=1
struct node{
    int data;
    struct node* left;
    struct node* right;

    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

int height(node* root){
    if(root==NULL){
        return 0 ;
    }
    int lh=height(root->left);
    int rh=height(root->right);
    return max(lh,rh)+1;
}



bool balance(node* root){
    if(root==NULL){
        return true ;
    }
    if(balance(root->left)==false){
        return false;
    }
    if(balance(root->right)==false){
        return false;
    }
    int lh=height(root->left);
    int rh=height(root->right);
    if(abs(lh-rh)<=1){
        return true;
    }else {
        return false;
    }
}

int main(){
    node* root1=new node(1);
    root1->left=new node(2);
    root1->right=new node(3);
    root1->left->left=new node(4);
    root1->left->right=new node(5);
    root1->right->left=new node(6);
    root1->right->right=new node(7);
    if(balance(root1)){
        cout<<"Balanced Tree"<<endl;
    }
    else{
        cout<<"Not balanced"<<endl;
    }

    node* root2=new node(1);
    root2->left=new node(2);
    root2->left->left=new node(3);
    root2->left->left->left=new node(4);
    if(balance(root2)){
        cout<<"Balanced Tree"<<endl;
    }
    else{
        cout<<"Not balanced"<<endl;
    }
    return 0;
}