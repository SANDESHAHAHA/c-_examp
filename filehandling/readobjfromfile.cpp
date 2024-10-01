#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;
class student{
      int roll;
    char name[47];
    public:
     void displaydata(){
        cout<<"Name = "<<name<<" Roll = "<<roll<<endl;
    }
    
};
int main()
{
    student s;
    fstream inout;
    inout.open("std.txt",ios::in);
    if(inout.fail())
    {
        cout<<"Error opening file."<<endl;
        exit(1);
    }
    while(inout.read((char*)&s,sizeof(s)))
    {
     s.displaydata();
    }
    inout.close();
    return 0;
}