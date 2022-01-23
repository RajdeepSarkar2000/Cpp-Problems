#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int,int>
#define vii vector<pii>
const int N=1e5+2,MOD=1e9+7;

vi adj[N]; //adjacency list
int main(){
    int n,m;
    cin>>n>>m;
    vvi adjm(n+1,vi(n+1,0));// adjacency matrix with size (n+1) with columns of size (n+1) initialized by 0
    
    for(int i=0;i<m;i++){
        int x,y;//edges
        cin>>x>>y;

        adjm[x][y]=1;
        adjm[y][m]=1;

    }
    for(int i=1;i<n+1;i++){
        for(int j=1;j<n+1;j++){
            cout<<adjm[i][j]<<" ";
        }cout<<endl;
    }

    if(adjm[3][7]==1)
        cout<<"There is a edge between 3 and 7"<<endl;
    else{
        cout<<"No edge"<<endl;
    }
    cout<<endl<<endl;
    
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;

        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for(int i=1;i<n+1;i++){
        cout<<i<<"->";
        for(int x: adj[i])
            cout<<x<<" ";
        cout<<endl;
    }
    return 0;
}