//wap in cpp to illustrate the concept o f array of pointers to the derived class
#include<iostream>
using namespace std;
class base{
    public:
    virtual void show()=0;
};
class derv1:public base{
public : 
void show()
{
    cout<<"inside derived 1 class."<<endl;

}

};
class derv2: public base{
    public:
    void show()
    {
        cout<<"Inside second derived class."<<endl;
    }
};
int main()
{
    base *bptr[2];
    derv1 dv1;
    derv2 dv2;
    bptr[0]=&dv1;
    bptr[0]->show();
    bptr[1]=&dv2;
    bptr[1]->show();
    return 0;

}