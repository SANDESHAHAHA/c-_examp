#include<iostream>
using namespace std;
int main()
{
    int a ,b ,x; 
    cout<<"Enter the value of a and b: "<<endl;
    cin>>a>>b;
    x=a-b;
    try{
        if(x==0)
        {
            throw x;
        }
         else if(x>0){
     cout<<"Result of a/x is :"<<(a/x)<<endl;
    }
   
    }
    catch(int x)
    {
                   cout<<"Exception of integer data taype caught."<<endl;

    }
    return 0;
}