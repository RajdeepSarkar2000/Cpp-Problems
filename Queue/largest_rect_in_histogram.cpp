#include<iostream>
#include<deque>
#include<vector>
#include<climits>
#include<queue>
#include<stack>
using namespace std;

int main(){
//Bruteforce approach time complexity o(n^2)
// int n,k;
//     cin>>n>>k;
//     vector<int>a(n);
//     for(auto &i : a){
//         cin>>i;
//     }
// int ans=0;n=a.size();
// for(int i=0;i<n;i++){
//     int minh=INT_MAX;
//     for(int j=i;j<n;j++){
//         minh=min(a[j],minh);
//         int len=j-i+1;
//         ans=max(ans,len*minh);
//     }
// }
// cout<<ans<<endl;

//Stack approach

int n,i=0,ans=0;
stack<int>st;
    cin>>n;
    vector<int>a(n);
    for(auto &i : a){
        cin>>i;
    }
    a.push_back(0);
    while(i<n){
        while(!st.empty() and a[st.top()]>a[i]){
            int t=st.top();
            int h=a[t];
            st.pop();
            if(st.empty()){
                ans=max(ans,h*i);
            }
            else{
                int len=i-st.top()-1;
                ans=max(ans,h*len);
            }
        }
        st.push(i);
        i++;
    }
    cout<<ans<<endl;

    return 0;
}