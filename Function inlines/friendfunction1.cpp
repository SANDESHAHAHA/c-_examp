#include<iostream>
using namespace std;
class complex{
    float real;
    float img;
    public: 
    complex()
    {
        real=0;
        img=0;
    }
    complex(float r,float i)
    {
        real =r;
        img=i;
    }
    void showdata ()
    {
        cout<<"The complex number is : "<<real<<"+i"<<img<<endl;
        
    }
    friend complex addition(complex,complex);
};
complex addition(complex c1,complex c2){
    complex temp;
temp.real =c1.real+c2.real;
temp.img=c1.img+c2.img;
return temp;
}
int main()
{
    complex c1(2,3);
    complex c2(4,3);
    complex c3;
    c3=addition(c1,c2); //addition function is a non member function so we cannot call it by using a dot operator i.e by object.
    c3.showdata();
    return 0;
}