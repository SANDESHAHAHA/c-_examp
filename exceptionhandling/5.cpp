#include<iostream>
using namespace std;
void divide(double x, double y)
{
    try{
        if(y==0)
        {
            throw y;
        }
        else {
            cout<<"Resulf of x/y is : "<<(x/y)<<endl;
        }
    }
    catch(double m)
    {
     cout<<"Exception caught of int data and throwing again."<<endl;
     throw m;
    }
}
int main()
{
    cout<<"Trying rethrowing without processing;"<<endl;
    try{
        divide(4,2);
        divide(5,0);
    }
    catch(double k )
    {
        cout<<"in main caught the value."<<endl;
    }
}