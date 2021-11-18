#include<bits/stdc++.h>
using namespace std;
//given n files with their computation times in an array
//choose/take any 2 files, add their computation times and append it to
//the list of computation times
//do this until we are left with only one file in the array

//push all the elements to a minheap
//take 2 top 2 elements one by one and add the cost to the answer and push the merged file to the minheap
//when single element remains, output the cost
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    priority_queue<int,vector<int>,greater<int>>minheap;
    for(int i=0;i<n;i++){
        minheap.push(a[i]);
    }
    int ans=0;
    while(minheap.size()>1){
        int e1=minheap.top();
        minheap.pop();
        int e2=minheap.top();
        minheap.pop();

        ans+=e1 + e2;
        minheap.push(e1+e2);
    }
    cout<<ans<<endl;
    return 0;
}