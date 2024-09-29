#include<iostream>
using namespace std;
template <class T1, class T2, class T3>
void calculatesize(T1 a, T2 b, T3 c)
{
    cout<<"size of a is "<<sizeof(a)<<endl;
    cout<<"size of b is "<<sizeof(b)<<endl;
    cout<<"size of c is "<<sizeof(c)<<endl;
}
int main()
{
cout<<"Template with mulitple arguments: "<<endl;
calculatesize(2,3.3,'x');
}