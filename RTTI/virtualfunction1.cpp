#include<iostream>
using namespace std;
class base{
    public: 
    virtual void show()
    {
        cout<<"inside base class"<<endl;
    }
};
class derived: public base{    
    public:
    void show()
    {
          cout<<"Inside derived 1 class "<<endl;

    }
};
class derived2: public base{
    public: 
    void show()
    {
        cout<<"Inside derived 2 class "<<endl;

    } 
};
int main()
{
    base *bptr;
     derived dv1;
     derived2 dv2;
     bptr=&dv1; //base class poiner and derived class poiner are type compatible to each other

     bptr->show();
     bptr=&dv2;
     bptr->show();
     return 0;
         
    
}