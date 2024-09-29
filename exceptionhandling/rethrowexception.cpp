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
            cout<<"Result of division is ="<<(x/y)<<endl;

        }
    }
    catch(double  m){
        cout<<"Caught exception of double data type"<<endl;
        throw m;
        //rethrwoing the exception.
    }
}
int main()
{
    cout<<"Checking rethrowing without processing."<<endl;
    try{
        divide(30.5,3.0);
        divide(10.5,0.0);
    }
    catch(double){
    cout<<"Caught double inside main"<<endl;

    }
    return 0;
}