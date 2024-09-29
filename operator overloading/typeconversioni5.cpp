// Write a program to read a height of a 
// person in Feet and Inches and convert it into Meter using class type to class type 
// conversion method. (1 meter= 3.28084 feet, 1 feet=12 inch.) 
#include<iostream>
using namespace std;
class meter{
    float mtr;

    public: 
    meter(){
        mtr=0;
    }
    meter(float m){
mtr =m;
    }
    void show()
    {
        cout<<"The height of the person is  "<<mtr<<" meteres."<<endl;
    }

};
class Height{
    float feet;
    float inch;
    public:
    Height(){
        feet=0;
        inch=0;
    }
    Height(float f ,float i){
         feet =f;
         inch=i;
    }
    void display()
    {
        cout<<endl<<"The height is : "<<feet<<"feet "<<inch<<" inch. "<<endl;
    }
    operator meter()
    {
        return meter((feet/3.28084)+((inch/12)/3.28084));
    }
};
int main()
{
   
    float x,y;
    cout<<"Enter the feet and inch of the person."<<endl;
    cin>>x>>y;
    Height ht(x,y);

    meter mt =ht;
    mt.show();
    return 0;
   
}