#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str="ahjbfhusvfgusvvdb";
    //convert into upper case
    for(int i=0;i<str.size();i++){
        if(str[i]>='a' && str[i]<='z')
        str[i]-=32;
    }
    cout<<str<<endl;
    //convert to lower case
    for(int i=0;i<str.size();i++){
        if(str[i]>='A' && str[i]<='Z')
        str[i]+=32;
    }
    cout<<str<<endl;
    //Built in function for uppercase
transform(str.begin(),str.end(),str.begin(),::toupper);
    //Built in function for lowercase
transform(str.begin(),str.end(),str.begin(),::tolower);
    return 0;


}