#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};


int search1(int inorder[],int start,int end,int curr){
    for(int i=start;i<=end;i++){
        if(inorder[i]==curr){
            return i;
        }
    }
    return -1;
}

Node* buildTree1(int preorder[],int inorder[],int start,int end){
    static int idx=0;
    if(start>end){
        return NULL;
    }
    int curr=preorder[idx];
    idx++;
    Node* node=new Node(curr);
    if(start==end){
        return node;
    }
    int pos=search1(inorder,start,end,curr);
    node->left=buildTree1(preorder,inorder,start,pos-1);
    node->right=buildTree1(preorder,inorder,pos+1,end);
    return node;
}

int search2(int inorder[],int start,int end,int val){
    for(int i=start;i<=end;i++){
        if(inorder[i]==val){
            return 1;
        }
    }
    return -1;
}




Node* buildTree2(int postorder[],int inorder[],int start,int end){
    static int idx=4;
    if(start>end){
        return NULL;
    }
    int val=postorder[idx];
    idx--;
    Node* curr=new Node(val);
    if(start==end){
        return curr;
            }
int pos=search2(inorder,start,end,val);
curr->right=buildTree2(postorder,inorder,pos+1,end);
curr->left=buildTree2(postorder,inorder,start,pos-1);
return curr;
}

void inorderPrint(Node* root){
    if(root==NULL){
        return;
    }
    inorderPrint(root->left);
    cout<<root->data<<" ";
    inorderPrint(root->right);

}

int main(){
    int preorder[]={1,2,4,3,5};
    int inorder[]={4,2,1,5,3};
    int postorder[]={4,2,5,3,1};
    //build tree
    Node* root1=buildTree1(preorder,inorder,0,4);
    inorderPrint(root1);
    Node* root2=buildTree2(postorder,inorder,0,4);
    inorderPrint(root2);
    return 0;
}