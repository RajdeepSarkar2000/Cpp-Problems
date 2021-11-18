#include<bits/stdc++.h>
using namespace std;
//given an array of n elements, we nee dto remove exactly n/2 elements from array
//and add it to another array(initially empty)
//find the maximum and minimum values of difference between these 2 arrays

//to maximise abs(a[i]-a[j])- a[i] should be as large as possible and a[j] should be as small as possible
//to minimize abs(a[i]-a[j])- the difference between the 2 arrays should be similar 
//--for a sorted array min diff= sum of odd elements - sum of even elements
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(auto &i : a)
        cin>>i;
    sort(a.begin(),a.end());
    long long mn=0,mx=0;
    for(int i=0;i<n/2;i++){
        mx+=(a[i+n/2]-a[i]);
        mn+=(a[2*i+1]-a[2*i]);
    }
    cout<<mn<<" "<<mx<<endl;
    return 0;
}