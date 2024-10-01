
//fomatted output to a file 
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
char name[89],address [89];
int roll;
ofstream out;
out.open("student.txt",ios::out);
int n;
cout<<"Enter how many records you want to enter: "<<endl;
cin>>n;
for(int i=0;i<n;i++)
{
    cout<<"Enter name: ";cin>>name;
    cout<<"Enter roll: ";cin>>roll;
    cout<<"<Enter address: "; cin>>address;
    out<<name<<'\t'<<roll<<'\t'<<address<<endl;

}
cout<<"Record added succesfully."<<endl;
return 0;
}