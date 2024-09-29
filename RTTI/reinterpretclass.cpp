//reinterpret class using classes
#include<iostream>
using namespace std;
class complex{
   float real, img;
   public:
   void getdata()
   {
    cout<<"Enter the real and img part: "<<endl;
    cin>>real>>img;
   }
   void show()
   {
    cout<<"The complex number is "<<real<<"+i"<<img<<endl;

   }
};
class Distance {
    float feet ,inch;
    public:
    void getdata()
    {
        cout<<"Enter the feet and inch:"<<endl;
        cin>>feet>>inch;

    }
    void show(){
        cout<<"THE DISTANCE IS "<<feet<<" feet "<<inch<<"inch"<<endl;

    }
};


int main()
{
complex *cptr=new complex;
Distance *dptr=new Distance;
dptr ->getdata();
cptr=reinterpret_cast<complex *>(dptr);
cptr->show();
return 0;

}