#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node*left,*right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
bool isBST(node*root,node*min,node*max){
    if(root==NULL){
        return true;
    }
    if(min!=NULL && root->data<=min->data){
        return false;
    }
    if(max!=NULL && root->data>=max->data){
        return false;
    }
    bool leftValid=isBST(root->left,min,root);
    bool rightValid=isBST(root->right,root,max);
    return leftValid and rightValid;
}
int main(){
    node*root1=new node(2);
    root1->left=new node(1);
    root1->right=new node(3);

    if(isBST(root1,NULL,NULL)){
        cout<<"Valid BST"<<endl;
    }
    else{
        cout<<"Invalid BST"<<endl;
    }

    return 0;
}