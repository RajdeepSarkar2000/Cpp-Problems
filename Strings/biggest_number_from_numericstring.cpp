#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
string s="276483757365";
sort(s.begin(),s.end(),greater<int>());
cout<<s<<endl;

 return 0; }
