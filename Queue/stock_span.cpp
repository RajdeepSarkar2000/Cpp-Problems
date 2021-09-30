#include<bits/stdc++.h>
using namespace std;

//Stack approach
vector<int>stockspan(vector<int>prices){
    vector<int>ans;
    stack<pair<int,int>>s;
    for(auto price: prices){
        int days=1;
    while(!s.empty() and s.top().first <=price){
        days+=s.top().second;
        s.pop();
    }
    s.push({price,days});
    ans.push_back(days);
    }
    return ans;
}



int main(){
    //Bruteforce approach time complexity o(n^2)
    // int n;
    // cin>>n;
    // vector<int>prices(n);
    // for(auto &i : prices){
    //     cin>>i;
    // }
    // for(int i=0;i<n;i++){
    //     int days=0;
    //     for(int j=i;j>=0;j--){
    //         if(prices[i]>prices[j]){
    //             days++;
    //         }
    //         else {
    //             break;
    //         }
    //     }
        
    // }
    int n;
    cin>>n;
    vector<int>a(n);
    for(auto &i: a){
        cin>>i;
    }
    vector<int> res=stockspan(a);
    for(auto i : res){
        cout<<i<<" ";
    }cout<<endl;
    
    return 0;
}