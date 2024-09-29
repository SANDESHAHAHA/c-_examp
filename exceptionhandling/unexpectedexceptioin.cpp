#include<iostream>
#include<cstdlib>
using namespace std;
void progTerm()
{
cout<<"Unexpected exception handling."<<endl;
cout<<"Terminating...";
exit(0);
}
int main() throw(int ,float)
{
    cout<<"Inside main block."<<endl;
    try{
        set_unexpected(progTerm);
        cout<<"Inside try block."<<endl;
        throw 'x';
    }
    catch(int m)
    {
        cout<<"Integer exception caught.";
    }
    catch(float n)
    {
        cout<<"Floating value exception caught .";
        
    }
}