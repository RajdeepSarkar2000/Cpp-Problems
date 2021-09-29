#include<iostream>
using namespace std;

void bubbleSort(int arr[],int n){
    int count =0;
    while(count<n-1){
        for(int i=0;i<n-count-1;i++){
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        count ++;
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
      bubbleSort(arr,n);
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
  
    
    return 0;
}