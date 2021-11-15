#include<bits/stdc++.h>
using namespace std;
//compute the horizontal distance 
//using hashing - start from root node
//recursively call left and right with (hd-1) and (hd+1)arguments
//push the value into vetcor corresponding to the horizontal distance hd.

struct node{
    int data;
    struct node*left;
    struct node*right;
    
    node(int val){
        data = val;
        left=NULL;
        right=NULL;
    }
};


void getVerticalOrder(node*root,int hd,map<int,vector<int>>&m){
    if(root==NULL){
        return ;
    }
    m[hd].push_back(root->data);
    getVerticalOrder(root->left,hd-1,m);
    getVerticalOrder(root->right,hd+1,m);
}



int main(){
    node*root=new node(10);
    root->left=new node(7);
    root->left->left=new node(3);
    root->left->right=new node(11);
    root->right=new node(4);
    root->right->left=new node(14);
    root->right->right=new node(6);

    map<int,vector<int>>m;
    int hd=0;

    getVerticalOrder(root,hd,m);

    map<int,vector<int>>:: iterator it;
    for(it=m.begin();it!=m.end();it++){
        for(int i=0;i<it->second.size();i++){
            cout<<(it->second)[i]<<" ";       
            }cout<<endl;
    }
    return 0;
}