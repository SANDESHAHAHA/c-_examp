#include<iostream>
using namespace std;
class Complex{
    float real;
    float img;
    static int count;
    public:
    void getdata()
    {
        cout<<"Enter the complex number: "<<endl;
        cin>>real>>img;
        count++;
    }
    void showdata()
    {
        cout<<real<<"+i"<<img<<endl;
        cout<<"COUNT ="<<count<<endl;
    }
};
int Complex:: count=0;
int main()
{
    Complex c1,c2,c3;
    c1.getdata();
    
    c2.getdata();
    c3.getdata();

    c2.showdata();
    c1.showdata();
    c3.showdata();
    return 0;
}