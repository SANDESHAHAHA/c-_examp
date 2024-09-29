//wap to illustrate the concept of class template with mulitple parameters
#include<iostream>
using namespace std;
template<class T1,class T2>
class Distance{
    T1 feet;
    T2 inch;
    public:
    Distance()
    {
        feet=0;
        inch=0;
    }
    Distance(int ft, float in)
    {
        feet=ft;
        inch=in;
    }
   void showdata()
   {
    cout<<"The distance is : "<<feet<<"feet"<<inch<<"inch"<<endl;

   }
};
int main()
{
    Distance<int,float>d1(3,4.5);
    Distance<int,int>d2(5,3);
    d1.showdata();
    cout<<endl;

    d2.showdata();

}