#include<iostream>
using namespace std;
void test(int x)
{
    try{
        if(x==0)
        throw x;
        else if(x==-1)
        throw x;
         else if(x==1)
         throw ("x");
    }
    catch(int x)
    {
        cout<<"Exception caught with x="<<x<<endl;
    }
    catch(float x){
        cout<<"Exception caught with x="<<x<<endl;
    }
    catch(char c){
        cout<<"Exception caught char x="<<c<<endl;
    }
}
int main()
{
    cout<<"Testing multiple catches"<<endl;
    cout<<" x=0"<<endl;
    test(0);
    cout<<"x=1"<<endl;
    test(1);
    cout<<"x=-1"<<endl;
    test(-1);
    // cout<<"x=a"<<endl;
    // test("a");
}