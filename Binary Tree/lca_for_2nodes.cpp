#include<bits/stdc++.h>
using namespace std;
struct node{
int data;
struct node*left;
struct node*right;
node(int val){
    data=val;
    left=NULL;
    right=NULL;
}
};
bool getPath(node*root,int key,vector<int>&path){
    if(root==NULL){
        return false;
    }
    path.push_back(root->data);
    if(root->data==key){
        return true;
    }
    if(getPath(root->left,key,path)||getPath(root->right,key,path)){
        return true;
    }
    path.pop_back();
    return false;
}



int lca(node* root,int n1,int n2){
    vector<int>path1,path2;
    if(!getPath(root,n1,path1)|| !getPath(root,n2,path2)){
        return -1;
    }
    int pc;
    for(pc=0;pc<path1.size()&&path2.size();pc++){
        if(path1[pc]!=path2[pc]){
            break;
        }
    }
    return path1[pc-1];
}
node* lca2(node*root,int n1,int n2){
    if(root->data==n1 || root->data==n2){
        return root;
    }
    node*leftlca=lca2(root->left,n2,n1);
    node*rightlca=lca2(root->right,n2,n1);

    if(leftlca && rightlca){
        return root;
    }
    if(leftlca!=NULL){
        return leftlca;
    }
    return rightlca;
}

int main(){
    node*root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->right->left=new node(5);
    root->right->right=new node(6);
    root->right->left->left=new node(7);

    int n1=7;
    int n2=6;
    int LCA=lca(root,n1,n2);
    if(LCA==-1){
        cout<<"LCA doesnt exit"<<endl;
    }
    else{
        cout<<"LCA: "<<LCA<<endl;
    }
    return 0;
}