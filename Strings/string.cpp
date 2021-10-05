#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
string str;
getline(cin,str);//input the whole line 
cin>>str;//this would only input the first element of the line 
string s1; 
string s2;
s1.append(s2);//adds the first string to the second string   
s1[1];//will output the 1st index of string   
string abc="xyabjfbsjhf";
abc.clear();//empties the string and will return no output
string a;
string b;
s2.compare(s1);//compares s2 with s1
string xyz;
xyz.empty();//checks whether string is empty or not
string s3="valorant";    
s3.erase(4,4);//first argument-initial erasing index , second argument-elements to be erased 
s3.find("valo") ;//returns the index of the first element found in the string
s3.insert(2,"lol");//first argument-index from where insertion must begin,second argument-string to be inserted
s3.size();//s3.length() also works,returns the length of the string
//
for(int i=0;i<s3.length();i++)
cout<<s3[i]<<endl; // will print all the elements of the string in each line
string z=s3.substr(6,4);//first argument-index of the substring starting,second argument-number of elements in the substring
string s4="786" ;
int x=stoi(s4); //string to integer 
int y=786;
to_string(y);//integer to string   
string s0="xhagfuhsfjhsbch";
sort(s0.begin(),s0.end());//sorts the string from beginning to end in ascending order
    
    
    
    
    return 0; 

}


