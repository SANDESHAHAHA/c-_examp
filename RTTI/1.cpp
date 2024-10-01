#include<iostream>
using namespace std;
int main()
{
    int a=75,*iptr;
    char c ='c',*cptr;
    cptr=&c;
    iptr=&a;
    cptr=reinterpret_cast<char *>(iptr);
    cout<<cptr<<endl;
}