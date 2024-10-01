#include<iostream>
using namespace std;
int main()
{
    int a ,b, x;
    cout<<"Enter the value  of a and b : "<<endl;
    cin>>a>>b;
     x=a-b;
     char name[]="Pokhara";
     try{
        if(x==0)
        {
            throw x;
        }
        else {
            cout<<"Resulf of a/x is: "<<(a/x)<<endl;
        }
        for(int i=0;i<30;i++)
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
        cout<<"Error caught in above program."<<endl;
     }
     
}