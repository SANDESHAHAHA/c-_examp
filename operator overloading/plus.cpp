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
    // overloadin ++ operator 
void operator++(int ) //post fix ma int pathaunu parxa
{
a=a+1;

}
};
int main()
{
    number x;
  cout<<"Enter the number:"<<endl;
  x.geta();
  cout<<"Before increment the number is : "<<endl;
x.show();
x++;
cout<<"The number after increment is :"<<endl;
x.show();


return 0;

    
}