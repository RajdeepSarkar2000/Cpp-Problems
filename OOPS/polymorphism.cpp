// #include<iostream>
// using namespace std;
// //function overloading 
// class overload {
//     public :
// void fun(){
//     cout<<"No arguments"<<endl;
// }
// void fun(int x){
//     cout<<"Int argument"<<endl;
// }
// void fun(double x){
//     cout<<"Double argument"<<endl;
// }
// };



// int main(){
//     overload obj;
//     obj.fun();
//     obj.fun(4);
//     obj.fun(6.2);
//     return 0;
// }


// #include<iostream>
// using namespace std;
// //operator overloading
// class Complex {
//     private :
//     int real,imag;
//     public :
//     Complex(int r=0,int i=0){
//         real = r;
//         imag = i;
//     }
//     Complex operator + (Complex const &obj){
//         Complex res;
//         res.imag = imag + obj.imag;
//         res.real= real + obj.real;
//         return res;
//     }
//     void display(){
//         cout<<real<<" + i"<<imag<<endl;
//     }
// };

// int main(){
//     Complex c1(12,7),c2(6,7);
//     Complex c3 = c1 + c2;
//     c3.display();
//     return 0;
// }


#include<iostream>
using namespace std;

class base {
    public :
    virtual void print(){  //dynamic bind
        cout<<"print"<<endl;
    }
    void display(){
        cout<<"display"<<endl;
    }
};

class derived : public base {
public :
void print(){
    cout<<"derived print"<<endl;
}
void display(){
    cout<<"derived display"<<endl;
}
};




int main(){
    base *baseptr;
    derived d;
    baseptr = &d;
    baseptr -> print();
    baseptr ->display();
    return 0;
}