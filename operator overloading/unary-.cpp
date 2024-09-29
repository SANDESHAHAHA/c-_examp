#include<iostream>
using namespace std;
class number{
    int a;
    public: 
    void geta()
    {
        cin>>a;
    }
    void show()
    {
        cout<<a;
    }
    void operator --(int)
    {
        a=a-1;
    }
};
int main()
{
number x;
cout<<"Enter a number: "<<endl;
x.geta();
cout<<"Number before decrement is : "<<endl;
x.show();
x--;
cout<<endl<<"The number after decrement is :"<<endl;
x.show();
return 0;
}