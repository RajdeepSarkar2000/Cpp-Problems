#include<bits/stdc++.h>
using namespace std;
//n number of pages in n different books in ascending order and m number of students
//All the books have to be divided among m students, consecutively and pages allocated in such a way
//that the max pages alloacted to a student is min


bool isPossible(int arr[],int n,int m,int min){
    int studentsRequired= 1,sum=0;

    for(int i=0;i<n;i++){
        if(arr[i]>min){
            return false;
        }
        if(sum + arr[i]>min){
            studentsRequired++;
            sum=arr[i];

            if(studentsRequired>m){
                return false;
            }
        }
        else{
            sum+=arr[i];
        }
    }
}


int allocateMin(int arr[],int n,int m){
    int sum=0;
    if(n<m){
        return -1;
    }
    for(int i=0;i<n;i++){
        sum = sum + arr[i];
    }
    int start=0, end = sum, ans=INT_MAX;
    while(start<=end){
        int mid = (start + end)/2;
        if(isPossible(arr,n,m,mid)){
            ans=min(ans,mid);
            end=mid - 1;
        }
        else {
            start = mid + 1;
        }
    }
}

int main(){
    int arr[]={12,34,67,90};
    int n=4;
    int m=2;
    cout<<"The min no of pages: "<<allocateMin(arr,n,m)<<endl;
    return 0;
}