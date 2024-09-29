#include<iostream>
using namespace std;
class number{
    int a;
    public:
    void get()
    {
        cin>>a;
    }
    void show()
    {
        cout<<a;
    }
};

int main()
{
number x,y;
cout<<"Enter the numbers:"<<endl;
y.get();  
x=y;
cout<<"The value of x is :"<<endl;
x.show();

}