#include<iostream>
using namespace std;
  inline float  calculate(float p, float t ,float r){
    return (p*t*r)/100;

}
int main()
{
    float t=2,r=12;
    for(float p=100;p<=500;p+=100)
    {
        cout<<"The si is : "<<calculate(p,t,r)<<endl;
    }
    return 0;
}