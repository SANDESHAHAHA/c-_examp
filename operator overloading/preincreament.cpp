#include<iostream>
using namespace std;
class Number{
    int a ;
    public:
    void get()
    {
        cin>>a;
    }
    void show()
    {
        cout<<a;
    }
    void operator ++(){
        ++a;
    }
};
int main()
{
   Number x;
   cout<<"Enter the number for preincrement."<<endl;
   x.get();
   cout<<"The number before pre increment is : "<<endl;
   x.show();
   ++x;
   cout<<"The number after operation is: "<<endl;
   x.show();
   return 0;

}