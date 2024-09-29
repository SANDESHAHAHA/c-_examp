#include<iostream>
using namespace std;
class Complex{
    float real,img;
    public: 
    void getinfo()
    {
        cin>>real>>img;
    }
    void display()
    {
        cout<<real<<"+i"<<img<<endl;

    }
    Complex operator +(Complex x)
    {
        Complex y;
        y.real=real+x.real;
        y.img =img+x.img;
        return y;
         
    }
};
int main()
{
    Complex c1,c2,c3;
    cout<<"Enter the first complex number: "<<endl;
    c1.getinfo();
    c1.display();
        cout<<"Enter the second complex number: "<<endl;
        c2.getinfo();
        c2.display();
        c3=c1+c2;
        cout<<"The sum of the two complex numbers is :"<<endl;
        c3.display();
        return 0;

}