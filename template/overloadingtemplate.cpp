#include<iostream>
using namespace std;
template<class T>
void checkmax(T a,T b)
{
    if(a>b)
    cout<<"The greatest number is : "<<a;
    else {
        cout<<"The greatest number is :"<< b;
    }
}
template <class T>
void checkmax(T a ,T b,T c)
{
    if(a>b && a>c)
    {
        cout<<"The largest number is "<<a<<endl;
    }
    else if(b>c)
    {
        cout<<"The largest number is :"<<b;
    }
    else {
        cout<<"The largest number is "<<c;
    }
}
int main()
{
    int a,b,c;
    cout<<"Enter the value  of a  b and c:"<<endl;
    cin>>a>>b>>c;
    checkmax(a,b);
    cout<<endl;
    checkmax(a,b,c);
}