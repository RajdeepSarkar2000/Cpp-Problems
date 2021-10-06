#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(1);//will add 1 to the vector
    v.push_back(2);//will add 2 to the vector and so on
    v.push_back(3);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }// 1 2 3
    vector<int>::iterator it; // iterator method
    for(it=v.begin();it!=v.end();it++){
        cout<<*it<<endl;
    }//1 2 3
    for(auto element:v){//auto method
        cout<<element<<endl;
    }// 1 2 3
    v.pop_back(); // will delete the last enetered element
   
    vector<int>v2 (3,50); // 50 50 50 
    swap(v,v2);// will swap both the vectors 
    //sort(v.begin(),v.end());//will sort the vector
    pair<int,int>p;//will store a pair of values 
    p.first=3;
    p.second=4;
    bool compare(pair<int,int>p1,pair<int,int>p2){
        return p1.first<p2.first;
    }
    int arr[]={10,16,7,14,5,3,2,9};
    vector<pair<int,int>>v;
    for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++){
        v.push_back(make_pair(arr[i],i));//will make a pair between arr[i] and i and then push them in the vector
    }

    sort(v.begin(),v.end(),compare);
    for(int i=0;i<v.size();i++){
        arr[v[i].second]=i;
    }
    for(int i=0;i<v.size();i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}