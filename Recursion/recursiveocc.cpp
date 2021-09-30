#include<iostream>
using namespace std;

int occ(int a[],int n,int i,int key){//first occurance of an element in an array

if(i==n){
return -1;
}

    if(a[i]==key){
        return i;
    }
return occ(a,n,i+1,key);
}
int last(int a[],int n,int i,int key){//last occurance of an element in an array
     if(i==n){
        return -1;
    }
    int rest=last(a,n,i+1,key);
   
    if(rest!=-1){
        return rest;
    }
    if(a[i]==key){
        return i;
    }
    return -1;
}



int main(){
   int a[]={4,2,1,2,5,2,7}; 
   cout<<occ(a,7,0,2)<<endl;
   cout<<last(a,7,0,2)<<endl;
    return 0;
}