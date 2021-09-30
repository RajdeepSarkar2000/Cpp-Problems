#include<iostream>
#include<string>
using namespace std;

void reverse(string s){
    if(s.length()==0){
        return ;
    }
    string rest=s.substr(1);
    reverse(rest);
    cout<<s[0];
}

int main(){
    string s;
    getline(cin,s);
    reverse(s);
    return 0;
}