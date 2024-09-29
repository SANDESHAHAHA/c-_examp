#include<iostream>
using namespace std;
class complex{
    float real;
    float img;
    static int count;
    public: 
    void getdata()
    {
        cout<<"Enter the complex number: "<<endl;
        cin>>real>>img;
        increasecount();
    }
    static void  increasecount()
    {
        count++;
    }
    static void showcount()
    {
        cout<<"Count = "<<count<<endl;
    }
    void showdata()
    {
        cout<<real<<"+i"<<img<<endl;
    }
};
int complex ::count;
int main()
{
        complex c1,c2,c3;
        c1.getdata();
        c2.getdata();
        c3.getdata();
        c1.showdata();
        complex::showcount();
        c2.showdata();
        c2.showcount();
        c3.showdata();
        c3.showcount();
        return 0;
}