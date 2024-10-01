///------reading from a file-------//
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char name[89],address [89];
int roll;
ifstream in;
in.open("student.txt",ios::in);
in>>name>>roll>>address;
while(in)
{
    cout<<name<<'\t'<<roll<<'\t'<<address<<endl;
    in>>name>>roll>>address;
}
in.close();
return 0;
}