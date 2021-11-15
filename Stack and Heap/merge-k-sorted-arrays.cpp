#include<bits/stdc++.h>
#define pii pair<int,int>
using namespace std;
//create a mini heap of pairs
//insert {first element,array number} of all the sorted array into mini heap
//pop elements from the minheap and store into the answer array 
//insert the next element of the sorted array into the minheap
//we also need to keep track of the indices of the elements

int main(){
    int k;
    cin>>k;

    vector<vector<int>>a(k);
    for(int i=0;i<k;i++){
        int size;
        cin>>size;
        a[i]=vector<int>(size);
        for(int j=0;j<size;j++){
            cin>>a[i][j];
        }
    }
    vector<int>idx(k,0);
    priority_queue<pii,vector<pii>,greater<pii>>pq;
    for(int i=0;i<k;i++){
        pii p;
        p.first=a[i][0];
        p.second=i;
        pq.push(p);
    }
    vector<int> ans;
    while(!pq.empty()){
        pii x = pq.top();
        pq.pop();
        ans.push_back(x.first);

        if(idx[x.second]+1<a[x.second].size()){
            pii p;
            p.first=a[x.second][idx[x.second]+1];
            p.second=x.second;
            pq.push(p);
        }
        idx[x.second]+=1;
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
    cout<<endl;
    return 0;
}