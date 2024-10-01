#include<iostream>
#include<typeinfo>
using namespace std;

class Base{
    public: 
    virtual void fun(){}
};
class Derived: public Base{
    float real ;float img;
    public: 
    void getcomplex()
    {
        cout<<"Enter the commplex number:"<<endl;
        cin>>real>>img;
    }
    void display()
    {
        cout<<real<<"+i"<<img<<endl;    }
};
int main()
{
    int a,*iptr;
    float f, *fptr;
    char c,*cptr;
    Derived d, *dptr;
    cout<<"The type id of a is : "<<typeid(a).name()<<endl;
    cout<<"The type id of iptr is : "<<typeid(iptr).name()<<endl;
    cout<<"The type id of a is : "<<typeid(a).name()<<endl;
}