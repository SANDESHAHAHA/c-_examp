#include<iostream>
using namespace std;
int main()
{
    char name[]="POKHARA";
    int a,b,x,n;
    cout<<"Enter the value of a and b: "<<endl;
    cin>>a>>b;
 x=a-b;

    try{
        if(x==0)
        {
            throw x;
        }
        else {
            cout<<"Result of a/x is :"<<(a/x)<<endl;
        }
        for(int i=0;i<10;i++)
        {
            if(i>6)
            {
                throw (name[i]);
            }
            cout<<name[i];
        }
    }
    catch (int x)
    {
        cout<<"Exception of int data type caught ."<<endl;
    }
    catch(char c)
    {
        cout<<"Array out of bound."<<endl;
    }
}