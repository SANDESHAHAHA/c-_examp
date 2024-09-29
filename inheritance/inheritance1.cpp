//------SINGLE INHERITANCE---------//
#include<iostream>
using namespace std;
class student{
    protected:
      char name[89];
      int roll;
      public: void getdata()
      {
        cout<<"Enter the name and roll no: "<<endl;
        cin.getline(name,89); cin>>roll;
      }
      void display()
      {
        cout<<"Name = "<<name<<" Roll = "<<roll<<endl;
      }
};
class leader: public student{
    char party[90];
    public: 
    void getparty()
    {
        cout<<"Enter the party of the student."<<endl;
        cin>>party;
    }
    void show()
    {
        cout<<"PARTY = "<<party<<endl;
    }
};
int main()
{
    leader l;
    l.getdata();
    l.getparty();
    l.display();
    l.show();
}