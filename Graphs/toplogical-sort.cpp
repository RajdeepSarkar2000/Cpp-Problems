#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int,int>
#define vii vector<pii>
const int N=1e5+2,MOD=1e9+7;

bool vis[N];
vector<int> adj[N];
int main(){
    int n,m;
    cin>>n>>m;
    int cnt=0;
    vector<vector<int>>adj_list(n);
    vector<int>indeg(n,0);
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        indeg[v]++;
    }
    queue<int>pq;
    for(int i=0;i<n;i++){
        if(indeg[i]==0){
            pq.push(i);
        }
    }
    while(!pq.empty()){
        cnt++;
        int x=pq.front();
        pq.pop();
        cout<<x<<" ";
        for(auto it: adj[x]){
            indeg[it]--;
            if(indeg[it]==0)
                pq.push(it);
        }
    }
    return 0;
}