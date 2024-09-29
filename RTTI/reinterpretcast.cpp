#include<iostream>
using namespace std;
int main()
{
    int a=65;
    int *iptr;
    iptr =&a;
    char ch='C';
    char *cptr;
    cptr=&ch;
    cptr=reinterpret_cast<char *>(iptr);
    cout<<"value of cptr is  "<<*cptr<<endl;

    return 0;
}

