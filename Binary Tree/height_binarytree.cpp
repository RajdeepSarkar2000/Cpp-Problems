#include<bits/stdc++.h>
using namespace std;
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
int calcHeight(node* root){
    if(root==NULL){
        return 0;
    }
    int lheight=calcHeight(root->left);
    int rheight=calcHeight(root->right);
    return max(lheight,rheight) +1;
}

int calcDiameter(node* root){
    if(root==NULL){
        return 0;
    }
    int lheight=calcHeight(root->left);
    int rheight=calcHeight(root->right);
    int currdia=lheight + rheight +1;
    int ldia=calcDiameter(root->left);
    int rdia=calcDiameter(root->right);

    return max(currdia,max(ldia,rdia));
}
//optimised 
int calcDiameter1(node* root,int* height){
    if(root==NULL){
        *height=0;
        return 0;
    }
    int lh=0,rh=0;
    int ldia=calcDiameter1(root->left,&lh);
    int rdia=calcDiameter1(root->right,&rh);

    int currdia=lh+rh+1;
    *height=max(lh,rh) +1;

    return max(currdia,max(ldia,rdia));
}

int main(){
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);
    cout<<calcHeight(root)<<endl;
    cout<<calcDiameter(root)<<endl;
    return 0;
}