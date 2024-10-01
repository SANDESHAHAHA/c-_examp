#include<iostream>
using namespace std;
class Complex{
    float real; float img;
    public: void getinput()
    {
        cout<<"Enter real and imaginary part:"<<endl;
        cin>>real>>img;

    }
    void show()
    {
        cout<<real<<"+i"<<img<<endl;
    }
};
class Distance{
    float feet;
    float inch;
    public: 
    void getinput()
    {
        cout<<"Enter feet and inch."<<endl;
        cin>>feet>>inch;
    }
    void display()
    {
        cout<<feet<<"feet "<<inch<<"inch"<<endl;
    }
};
int main()
{
    Distance *dptr= new Distance;
    Complex *cptr=new Complex;
    dptr->getinput();
    cptr=reinterpret_cast<Complex *>(dptr);
    cptr->show();
    return 0;


}