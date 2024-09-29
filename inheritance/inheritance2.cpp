//--------Constructor invocation in mulitple inheritance-----/
#include<iostream>
using namespace std;
class A{
    public:
    A()
    {
        cout<<"Constructor of A class."<<endl;
    }
    ~A()
    {
        cout<<"Destructor of A class."<<endl;
    }
    
};
class B{
    public: 
    B()
    {
        cout<<"Inside class B constructor."<<endl;

    }
    ~B()
    {
        cout<<"Inside class B destructor."<<endl;

    }
};
class C : public A , public B{
    public: 
    C()
    {
        cout<<"Inside class C constructor.."<<endl;

    }
    ~C()
    {
        cout<<"Inside class c destructor."<<endl;
    }
};
int main()
{
    C c;
    return 0;
}