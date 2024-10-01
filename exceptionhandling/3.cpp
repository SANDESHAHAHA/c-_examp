#include<iostream>
using namespace std;
int main()
{
char name[]="POKHARA";
int a ,b ,x;
cout<<"Enter the value of a an b: ";
cin>>a>>b;
x=a-b;
try{
    if(x==0)
    {
        throw x;
    }
    else {
        cout<<"Result of a/x is : "<<(a/x)<<endl;
    }
    for(int i=0;i<10 ;i++)
    {
        if(i>6)
        {
            throw name[i];
        }
        cout<<name[i];
    }
}
catch(int m)
{
    cout<<"Integer type exceptoin caought";
}
catch(char x)
{
    cout<<"Array out of bound."<<endl;
}
}
