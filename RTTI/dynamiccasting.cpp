// it is used to change the pointer type from one type to another
//either base to derive or derive to base. It takes more type static type casting and it is more safe than reinterpret cast cause it doesnot forcefully cast and cast safely
#include<iostream>
#include<typeinfo>
using namespace std;
class Base{
    public:
    virtual void fun(){}
};
class Derived: public Base {};
int main()
{
 Base *bptr= new Derived;
 Derived *dptr=dynamic_cast<Derived *> (bptr);
 if(dptr!=NULL)
 {
    cout<<"works"<<endl;
 }
 else {
    cout<<"cannot case bptr to dptr";
 }
}