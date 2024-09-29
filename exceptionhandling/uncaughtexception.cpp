#include<iostream>
#include<cstdlib>
using namespace std;
void progrTerm()
{
    cout<<"Exception uncaught";
    cout<<"Exiting....";

    exit(0);
}
int main()
{
    cout<<"Inside main function."<<endl;
    try{
                        set_terminate(progrTerm);

        cout<<"Inside try block."<<endl;
        throw 5;

        
    }
    catch (float y)
    {
        cout<<"Floating exception caught."<<endl;
    }
}