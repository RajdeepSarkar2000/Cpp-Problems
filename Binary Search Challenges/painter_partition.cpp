#include<bits/stdc++.h>
using namespace std;
//n length of n different boards and m painters available
//1 painter can paint 1 unit of board in 1 unit of time and each painter will paint consecutive boards
//find min time that will be required to paint all the boards


int findFeasible(int boards[],int n,int limit){
    int sum=0,painters=1;
    for(int i=0;i<n;i++){
        sum+=boards[i];
        if(sum>limit){
            sum=boards[i];
            painters++;
        }
    }
    return painters;
}


int painterPartition(int boards[],int n,int m){
    int totalLength=0,k=0;
    for(int i=0;i<n;i++){
        k=max(k,boards[i]);
        totalLength += boards[i];
    }
    int low=k,high=totalLength;
    while(low<high){
        int mid=(low + high)/2;
        int painters=findFeasible(boards,n,mid);
        if(painters<=m){
            high=mid;
        }else{
            low=mid + 1;
        }
    }
    return low;
}

int main(){
    int arr[]={10,20,30,40};
    int n=4;
    int m=2;
    cout<<"Minimum time to paint boards: "<<painterPartition(arr,n,m)<<endl;
    return 0;
}