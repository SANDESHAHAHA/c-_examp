//wap in cpp too find the sum of two complex numbers entered byt he user using the conncept of freind class.
#include<iostream>
using namespace std;

 class complex2;
 class complex1{
    float real;
    float img;

    public: 
    complex1()
    { 
        real =0;
        img=0;
    }
    complex1(float r, float i)
    {
        real =r;
        img =i;
    }
    void show()
    {
        cout<<"The complex number is: "<<real<<"+i"<<img<<endl;

    }
    friend class complex2;
 };
 class complex2{
public:
complex1 addition(complex1 c1, complex1 c2)
{
complex1 temp;
temp.real=c1.real+c2.real;
temp.img=c1.img+c2.img;
return temp;
}
 };
 int main()
 {
    complex1 c1(2,3),c2(3,4),c3;
    complex2 x;
    c3=x.addition(c1,c2);
    c3.show();
    return 0;
 }