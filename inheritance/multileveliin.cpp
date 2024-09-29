//======multilevel inheritance-------//
#include<iostream>
using namespace std;
class person
{
    protected: 
    char name[80];
    int age;
    public: 
    void getperson(){
        cout<<"Enter the name and age: "<<endl;
        cin>>name>>age;
    }
};
class student: public person{
    protected: 
    int roll;
    public: 
    void getroll()
    {
        cout<<"Enter the roll: "<<endl;
        cin>>roll;
    }

};
class result: public student{
    int marks;
    public: void getmarks()
    {

    
        cout<<"Enter the marks obtained."<<endl;
        cin>>marks;
    }
    void display()
    {
        cout<<"Name= "<<name<<"ROLL ="<<roll<<" AgE = "<<age <<"Marks = "<<marks<<endl;

    }
    
};
int main()
{
    result r;
    r.getperson();
    r.getmarks();
    r.getroll();
    r.display();
    return 0;
}