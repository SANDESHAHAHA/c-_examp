#include<iostream>
using namespace std;
class Base{
    protected: 
    float real; float img;
    public: 
    void getcomplex()
    {
        cout<<"Enter the real and imaginary part of base class: "<<endl;
        cin>>real>>img;
    }
    void show(){
        cout<<"The complex number is : "<<real<<"+i"<<img<<endl;
    }
    
};
class Derived: public Base{
    protected: 
    float real2 ,img2;
    public:
    void getcomp()
    {
        cout<<"Enter the complex numbers of derived class."<<endl;
        cin>>real2>>img2;
    }
    void sum()
    {
float r=real+real2;
float i=img+img2;
cout<<"The sum of the complex number is : "<<r<<"+i"<<i<<endl;
    }
    void display()
    {
        cout<<"The complex number is : "<<real<<"+i "<<img<<endl;
    
}
friend class Third;


};
class Third {
    public:
void sub(Derived d){
Derived x;
float r =d.real-d.real2;
float i=d.img-d.img2;
cout<<"The difference is:"<<r<<"+i"<<i<<endl;
}
};
int main(){

Derived d;
d.getcomplex();
d.getcomp();
d.sum();
Third t;
t.sub(d);
return 0;
}