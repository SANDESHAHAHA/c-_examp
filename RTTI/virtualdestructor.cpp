///virtual destructor
#include<iostream>
using namespace std;
class base{
public: 
 virtual ~base(){
    cout<<"Destroying the object of the base class."<<endl;

}
};
class Derv1: public base{
    public: 
    ~Derv1(){
        cout<<"Destroying the objects in derived1 class."<<endl;

    }
};

int main()
{
    base *bptr =new Derv1;
    delete bptr;

}