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
void zigzagTraversal(node*root){
    if(root==NULL){
        return;
    }
    stack<node*>currLevel;
    stack<node*>nextLevel;

    currLevel.push(root);
    bool leftToRight=true;
   

    while(!currLevel.empty()){
        node*temp=currLevel.top();
        currLevel.pop();

        if(temp){
            cout<<temp->data<<" ";
        //Left to Right
        if(leftToRight){
            if(temp->left)
                nextLevel.push(temp->left);
            
            if(temp->right)
                nextLevel.push(temp->right);
            
        }//Right to Left
        else {
            if(temp->right)
                nextLevel.push(temp->right);
            
            if(temp->left)
                nextLevel.push(temp->left);
            
        }
    }
    if(currLevel.empty()){
        leftToRight=false;
        swap(currLevel,nextLevel);
    }
}
}

int main(){
    node*root=new node(12);
    root->left=new node(9);
    root->right=new node(15);
    root->left->left=new node(5);
    root->left->right=new node(10);

    zigzagTraversal(root);
    cout<<endl;
    return 0;
}