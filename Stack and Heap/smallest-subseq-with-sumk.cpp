#include<bits/stdc++.h>
using namespace std;
//keep a maxheap and insert all the elements
//keep popping the elements and keep adding them to a variable sum and maintain count
//when sum>=k then quote the answer(count)
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    priority_queue<int,vector<int>>pq;
    for(int i=0;i<n;i++){
        pq.push(a[i]);
    }
    int sum=0;
    int count=0;
    while(!pq.empty()){
        sum+=pq.top();
        pq.pop();

        count++;
        if(sum>=k)
            break;
        
    }
        if(sum<k){
            cout<<"-1"<<endl;
        }
        else{
            cout<<count<<endl;
        }
    
    return 0;
}