#include<iostream>
using namespace std;
void test(int x )
{
    try{
        if(x==0)
        {
            throw x;
        }
        else if(x==1)
        {
            throw 2.33;
        }
        else if(x==2)
        {
            throw 'x';
        }
    
    }
    catch(int m)
    {
        cout<<"Integer type exception  caught."<<endl;

    }
    catch(double k)
    {
        cout<<"Floating value type exception caught."<<endl;

    }
    catch(char l)
    {
        cout<<"character type exceptoin caught."<<endl;
    }
}
int main()
{
    cout<<"Trying multiple catch block."<<endl;
 test(0);
 test(1);
 test(2);
}