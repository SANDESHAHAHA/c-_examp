//constructor and destructor in single inheritance;
#include<iostream>
using namespace std;
class A{
    public: 
    A()
    {
        cout<<"Inside base class constructor."<<endl;

    }
    ~A()
    {
        cout<<"Inside base class destructor."<<endl;

    }
};
class B : public A {
    public: 
    B()
    {
        cout<<"Inside derived class destructor."<<endl;

    }
    ~B()
    {
        cout<<"Inside derived class destructor."<<endl;
    }

}     ;
int main()
{
    
    B b;
    return 0;
}                        