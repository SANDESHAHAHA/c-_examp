//wat to create a class LandMeasure that reads Ropani , Ana , Paisa and Dam as data memebers .Write a friend function to pass two objects of type LandMeasure and return their sum.
#include<iostream>
using namespace std;
class LandMeasure{
    float ropani;
    float paisa;
    float ana;
    float dam;
    public: 
    LandMeasure()
    {
        ropani=0;
        paisa=0;
        ana=0;
    }
    LandMeasure(float r, float p, float a,float d)
    {
        ropani=r;
        paisa=p;
        dam=d;
        ana=a;
    }
    void show()
    {

    
    cout<<"The land measure is : "<<ropani<<" Ropani "<<ana<<" Ana "<<paisa<<" Paisa "<<dam<<" Dam"<<endl;

}
friend LandMeasure addland(LandMeasure, LandMeasure);
};
LandMeasure addland(LandMeasure l1, LandMeasure l2)
{
    LandMeasure temp;
    temp .paisa=l1.paisa+l2.paisa;
    temp.dam=l1.dam+l2.dam;
    temp.ana=l1.ana+l2.ana;
    temp.ropani=l1.ropani+l2.ropani;
    while(temp.dam>=4){
        temp.dam-=4;
        temp.paisa++;
    }
    while(temp.paisa>=4)
    {
        temp.paisa-=4;
        temp.ana++;
    }
    while(temp.ana>=16)
    {
        temp.ana-=16;
        temp.ropani++;
    }
    return temp;
    

}
int main()
{
    LandMeasure l1(114,43,58,2),l2(34,4,2,4),l3;
    l3=addland(l1,l2);
    l3.show();
}
