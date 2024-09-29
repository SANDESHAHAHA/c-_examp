#include<iostream>
#include<typeinfo>
using namespace std;
class Base{
    virtual void func(){}
};
class Complex: public Base{
    
    float real;
    float imag;
    public:
    void getdata()
    {
        cout<<"Enter the real and imaginary part:" <<endl;
        cin>>real>>imag;
    }
    void showdata()
    {
       cout<<real<<"+ i"<<imag<<endl;
    } 
};
int main()
{
    int a , *iptr;
    float b, *fptr;
    Complex c,*cptr;
    cout<<"The tpye of a is: "<<typeid(a).name()<<endl;
    cout<<"The tpye of a is: "<<typeid(iptr).name()<<endl;
    cout<<"The tpye of a is: "<<typeid(b).name()<<endl;
    cout<<"The tpye of a is: "<<typeid(fptr).name()<<endl;
    cout<<"The tpye of a is: "<<typeid(c).name()<<endl;
    cout<<"The tpye of a is: "<<typeid(cptr).name()<<endl;
}