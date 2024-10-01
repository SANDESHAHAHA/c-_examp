#include<iostream>
#include<cstdlib>
using namespace std;
void endprogram()
{
    cout<<"unexpecte exceptoin caught."<<endl;
    cout<<"Termination...";
    exit(1);
}
int main()  throw(int,float)
{
    cout<<"Inside main block."<<endl;
    try{
      set_unexpected(endprogram);
      throw 'x';
    }
    catch(int x)
    {
        cout<<"Integer type excetoin l";
    }
    catch(double m)
    {
        cout<<"floatignn type exceptinn caughtl."<<endl;

    }
}