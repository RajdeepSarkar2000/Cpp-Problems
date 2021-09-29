#include<iostream>
using namespace std;
class A {
    public :
    int a ;
    void funca(){
        cout<<"a"<<endl;
    }
    private:
    int b;
    void funcb(){
        cout<<"b"<<endl;
    }
    protected:
    int c;
    void func(){
        cout<<"c"<<endl;
    }
};
int main(){
        A obj ;
        obj.funca();
    return 0 ;
}