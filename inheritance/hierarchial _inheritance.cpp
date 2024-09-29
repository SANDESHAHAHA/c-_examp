#include<iostream>
using namespace std;
class employee{
    protected:
    char name[35];
    public: void getemployee()
    {
        cout<<"Enter the employee name: "<<endl;
        cin>>name;
    }
};
class teacher: public employee{
    char subject[34];
    public:  void getTeacher()
    {
        cout<<"Enter the subject. "<<endl;
        cin>>subject;
    }
    void display()
    {
        cout<<"Name="<<name<<"Subject = "<<subject<<endl;
            }
};
class manager: public employee{
    int working_hr;
    public: 
    void getHour()

{
    cout<<"Enter the working hour: "<<endl;
    cin>>working_hr;
}
void show()
{
    cout<<"Name="<<name<<"Working hour = "<<working_hr<<endl;
}
};
class secretary: public employee{
    int id;
    public: 
    void getId()
    {
        cout<<"Enter the id of the secretary: "<<endl;
        cin>>id;
    }
    void displaysec()
    {
        cout<<"Name= "<<name<<" Id = "<<id<<endl;
    }
};
int main()
{
    teacher t;
manager m;
secretary s;
t.getemployee();
t.getTeacher();

t.display();
m.getemployee();
m.getHour();
m.show();
s.getemployee();
s.getId();
s.displaysec();
return 0;
}