#include<iostream>
#include<typeinfo>
using namespace std;
class Base{
    public:
    virtual void func(){}
};
class D:public Base{};
int main()
{
    Base *bptr=new D;
    D *dptr=dynamic_cast<D *>(bptr);
    if(dptr!=NULL)
    {
        cout<<"works"<<endl;
    }
    else{
        cout<<"Failed to connvert bptr to dptr."<<endl;
    }
}
