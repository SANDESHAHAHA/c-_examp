#include<iostream>
using namespace std;
class student{
    protected:
    char name[45];
    int roll;
    public:
    void getdata()
    {
        cout<<"Enter the name and roll : "<<endl;
        cin.getline(name,10);
        
        cin>>roll;
    }
    void show ()
    {
        cout<<"NAME = "<<name<<" Roll = "<<roll<<endl;
    }
};
class employee{
    protected: 
    int id;
    char orgname[45];
    public: 
    void getdata()
    {
        
        cout<<"Enter the organization name and id of the emp."<<endl;
        cin>>orgname;
         cin>>id;
    }
    void show()
    {
        cout<<"Organization name= "<<orgname<<" Id = "<<id<<endl;
    }
};
class officer: public student, public employee{
int working_hr;
public: 
void getdata()
{
    student::getdata();
        employee::getdata();
    cout<<"Enter the working hour of the officer. "<<endl;
    cin>>working_hr;
}
void show()
{
    student::show();
    employee::show();
    cout<<"WORKING HOUR = "<<working_hr<<endl;
}
};
int main()
{
    officer o;
    o.getdata();
    
    
    o.show();
    return 0;
}