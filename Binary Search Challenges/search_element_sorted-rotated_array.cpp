#include<bits/stdc++.h>
using namespace std;
//we are given an ascending sorted array that has been rotated from a pivot point 
//search for the element x

int serachInRotatedArray(int arr[],int key,int left,int right){
    if(left>right){
        return -1;
    }
    int mid=(left+right)/2;
    if(arr[mid]==key){
        return mid;
    }
    if(arr[left]<=arr[mid]){
        if(key>=arr[left] && key<=arr[mid]){
            return serachInRotatedArray(arr,key,left,mid-1);
        }
        return serachInRotatedArray(arr,key,mid+1,right);
    }
    if(key>=arr[mid] && key<=arr[right]){
        return serachInRotatedArray(arr,key,mid+1,right);
    }
    return serachInRotatedArray(arr,key,left,mid-1);
}

int main(){
    int arr[]={6,7,8,9,10,1,2,5};
    int n=8;
    int key=8;
    int idx=serachInRotatedArray(arr,key,0,n-1);
    if(idx==-1){
        cout<<"key doesnt exist"<<endl;
    }else{
        cout<<"key is present at idx: "<<idx<<endl;
    }
    return 0 ;
}