#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int> &st,int e){

if(st.empty()){
    st.push(e);
    return;
} 
    int tope=st.top();
    st.pop();
    insertAtBottom(st,e);
    st.push(tope);
}



void reverse(stack<int> &st){

if(st.empty()){
    return;
}

    int e = st.top();
    st.pop();
    reverse(st);
    insertAtBottom(st,e);
}




int main(){
stack<int>st;
st.push(1);
st.push(2);
st.push(3);
st.push(4);
reverse(st);

while(!st.empty()){
    cout<<st.top()<<" ";
    st.pop();
}cout<<endl;



    return 0;
}