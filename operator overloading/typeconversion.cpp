//simple program of basic to classs data type conversion
#include<iostream>
using namespace std;
class Number {
int num;
public: 
void show()
{
    cout<<num;
}
Number(int n)
{
this->num=n;
}


};
int main()
{
    Number n =100;
    n.show();
    
}