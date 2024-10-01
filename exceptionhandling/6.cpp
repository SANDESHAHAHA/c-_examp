#include<iostream>
#include<cstdlib>
using namespace std;
void endprogram()
{
    cout<<"uncaught exceptoin.";
    cout<<"Termination....";
    exit(0);
}
int main()
{
    int a,b,x;
cout<<"Enter the value of x and y: "<< endl;
cin>>a>>b;
x=a-b;
try{
    if(x==0)
    {
        set_terminate(endprogram);
        throw x;
        
    }
    else {
        cout<<"Resulf of a/x is : "<<(a/x )<<endl;
    }
}
catch( char c)
{
    cout<<"Character type exception caught.";
}
}