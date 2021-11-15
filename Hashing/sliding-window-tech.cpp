#include<bits/stdc++.h>
using namespace std;
//given an array with n elements, calculate the minimum sum of k consecutive elements 
//brute force - 
//iterate from i=0 to i=n-k-1 in outer loop
//starting from every j=i computer sum of k elements and the maintain the minimum

//optimized 
//compute sum of the first k elements
//while increasing i , subtract a[i-1] and add a[i+k-1] in the previous sum which will become current sum


int main(){
    int n,k;
    cin>>n>>k;

    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int s=0,ans=INT_MAX;
    for(int i=0;i<k;i++){
        s+=a[i];
    }
    cout<<s<<" ";
    ans=min(ans,s);

    //sliding window
    for(int i=1;i<n-k+1;i++){
        s-=a[i-1];
        s+=a[i+k-1];
        ans=min(ans,s);
        cout<<s<<" ";
    }cout<<endl;
    cout<<ans<<endl;
    return 0;
}
