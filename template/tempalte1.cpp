//===========ADD TWO NUMBERS USING TEMPLAT FUNCTION====
#include<iostream>
using namespace std;
template<class T>
T addition(T x, T y)
{
    T sum;
    sum=x+y;
    return sum;
}
int main()
{
int a,b,sum;
float c,d,sumf;
cout<<"Enter the value of a and b"<<endl;
cin>>a>>b;
cout<<"Enter the value of c and d"<<endl;
cin>>c>>d;
cout<<"Calculating sum: "<<endl;
sum=addition(a,b);
sumf=addition(c,d);
cout<<"The sum of the two numbers is : "<<sum<<endl;
cout<<"The sum of the two numbers is : "<<sumf;

return 0;
}