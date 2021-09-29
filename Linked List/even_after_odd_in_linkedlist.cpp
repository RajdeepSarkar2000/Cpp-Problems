#include<iostream>
using namespace std;
class node{
public :
int data;
node* next;
node(int val){
    data=val;
    next=NULL;
}
};

void insertAtHead(node* &head,int val ){
    node* n=new node(val);
    n->next=head;
    head=n;
}




void insertAtTail(node* &head,int val){
    node* n=new node(val);
    if(head==NULL){
        head=n;
        return ;
    }
    node* temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
void display(node* head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"-> ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
void deleteAtHead(node* &head){
    node* todelete=head;
    head=head->next;
    delete todelete;
}
 void deletion(node* &head,int val)
{

    if(head==NULL){
        return ;
    }
    if(head->next==NULL){
        deleteAtHead(head);
        return ;
    }
    node* temp=head;
    while(temp->next->data!=val){
        temp=temp->next;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
}



void evenAfterOdd(node* &head){
    node* odd=head;
    node* even=head->next;
    node* evenStart=even;
    while(odd->next!=NULL && even->next!=NULL){
        odd->next=even->next;
        odd=odd->next;
        even->next=odd->next;
        even=even->next;
    }
    odd->next=evenStart;
    if(odd->next!=NULL){
        even->next=NULL;
    }
}

int main(){
node* head=NULL;
int arr[]={1,2,3,4,5,6};
for(int i=0;i<6;i++){
    insertAtTail(head,arr[i]);
}
display(head);
evenAfterOdd(head);
display(head);

    return 0;
}