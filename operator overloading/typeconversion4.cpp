#include<iostream>
using namespace std;
class Celcius{
    float tempc;
    public: 
    Celcius(){
        tempc=0;
    }
    Celcius(float c)
    {
        tempc =c;
    }
    void display()
    {
        cout<<"Temperature in celcius is : "<<tempc<<endl;

    }
    };
class Fahrenheit{
    float tempf;
    public: 
    Fahrenheit(){
        tempf=0;
    }
    Fahrenheit(float f)
    {
        tempf=f;
    }
    void display()
    {
        cout<<"Temperature in Fahrenheit is : "<<tempf<<endl;

    }
    operator Celcius()
    {
          return Celcius((tempf-32)/1.8);
           
    }
};


int main()
{
 float f;
 cout<<"Enter the temperature in fahrenheit scale."<<endl;
 cin>>f;
 Fahrenheit temp(f);
 temp.display();
 Celcius  c=temp;
 c.display();
 return 0;
}