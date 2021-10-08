 #include<bits/stdc++.h>
 using namespace std;
struct node {
int data;
struct node* left;
struct node*right;
node(int val){
    data=val;
    left=NULL;
    right=NULL;
}
};
//case1 
void printSubtreeNodes(node*root,int k){
    if(root==NULL || k<0){
        return;
    }
    if(k==0){
        cout<<root->data<<" ";
        return;
    }
    printSubtreeNodes(root->left,k-1);
    printSubtreeNodes(root->right,k-1);
}

//case 2
int printNodesAtk(node* root,node* target,int k){
    if(root==NULL){
        return -1;
    }
    if(root==target){
        printSubtreeNodes(root,k);
        return 0;
    }
    int dl=printNodesAtk(root->left,target,k);
    if(dl!=-1){
        if(dl+1==k){
            cout<<root->data<<" ";
        } else {
            printSubtreeNodes(root->right,k-dl-2);
        }
        return 1+dl;
    }

     int dr=printNodesAtk(root->right,target,k);
    if(dr!=-1){
        if(dr+1==k){
            cout<<root->data<<" ";
        } else {
            printSubtreeNodes(root->right,k-dr-2);
        }
        return 1+dr;
    }
return -1;
}

 int main(){
     struct node* root=new node(1);
     root->left=new node(2);
     root->left->left=new node(4);
     root->right=new node(3);
    printNodesAtk(root,root->left,1);
     return 0;
 }