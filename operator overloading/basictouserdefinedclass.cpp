// We can define conversions from basic data types to user-defined class types by
// overloading the class constructor which allows us to create an object directly
// from a basic data type.
#include<iostream>
using namespace std;
class degree{
    private:
    float temp;
    public:
    degree(){
        temp=0.0;
    }
    degree(float fahrenheit) {
        temp = (5.0 / 9.0) * (fahrenheit - 32); 
    }
    void display(){
        cout<<"temperature in celcius: "<<temp<<endl;
    }
};
int main(){
    float f;
    cout<<"enter temperature in fahrenheit: "<<endl;
    cin>>f;
    degree cl=f;
    cl.display();
}