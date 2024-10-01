#include<iostream>
#include<fstream>
using namespace std;
class student{
    int roll;
    char name[47];
    public: void getdata()
    {
        cout<<"Enter the name and roll of the student : "<<endl;
        cin>>name>>roll;
    }
};

int main()
{
student s;
fstream inout;
inout.open("std.txt",ios::out);
int n;
cout<<"Enter how many reocrds you want to enter: "<<endl;
cin>>n;
for(int i=0;i<n;i++)
{
    s.getdata();
    inout.write((char *)&s,sizeof(s));
}
inout.close();

}