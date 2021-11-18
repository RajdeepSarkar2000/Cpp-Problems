#include<bits/stdc++.h>
using namespace std;
//gieven an array of denominations and a value x . Find the minimum
//number of coins required to make the value x

//start from the largest value, till we can include it 
//else move on the smaller value
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int x;
    cin>>x;
    sort(a.begin(),a.end(),greater<int>());
    int ans=0;
    for(int i=0;i<n;i++){
        ans+=x/a[i];
        x-=x/a[i]*a[i];
    }
    cout<<ans<<endl;
    return 0;
}