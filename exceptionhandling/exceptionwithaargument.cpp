#include<iostream>
using namespace std;
class Exception{
    int i;
    float f;
    char c;
    friend int main();
};
int main()
{
    Exception e;
    try{
        e.f=1.1;
        e.i=1;
        e.c='y';
        throw e;
    }
    catch (Exception e)
    {
        if(e.i==1)
        {
            cout<<"Integer exception caught."<<endl;

        }
        if(e.f==1.1)
        {
            cout<<"Float exception caught."<<endl;

        }
        if(e.c=='y')
        {
            cout<<"Character exception caught."<<endl;
        }
        return 0;
    }
}