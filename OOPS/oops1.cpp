//Class Declaration
class myClass{
    //classData
    string name;
    int age;
    bool gender; // data members
};

//Constructors
class student {
    public: 
    string name;
    int age;
    bool gender;

    student(){
        cout<<"Default constructor"<<endl;
    }//default const
    student(string s,int a,bool g){
        cout<<"Parameterized Constructor"<<endl;
        name =s;
        age=a;
        gender=g;
    }
}
student c(a); // copy constructor

string getName(){   // getter
    return name;
}
void setName(string s){
    name=s;
}
//operator overloading 
bool operator == (student &a){ // we can overload any operator +,-,=
    if(name==a.name && a.age && gender=a.gender){
        return true;
    }
    return false ;

}
if(b==a){ // this part wouldnt work without operatr overloading 
    cout<<"same"<<endl;
}
else{
    cout<<"not same"<<endl;
}
