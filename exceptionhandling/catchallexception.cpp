#include<iostream>
using namespace std; 
int main()
{
    float x,y;
    cout<<"Enter the value of x and y"<<endl;
    cin>>x>>y;
    char name[]="POKHARA";
    try{
        if(y==0)
        {
            throw y;
        }
        else {
            cout<<"Result of x/y is "<<(x/y)<<endl;
        }
        for(int i=0;i<20;i++)
        {
            if(i>6)
            {
                throw name[i];
            }
            cout<<name[i];
        }
    }
    catch(...)
    {
        cout<<"An error has occured."<<endl;
    }
}