#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;
class Student{
    char name[78];
    int age;
    int crn;
    public: 
    void getinfo()
    {
        cout<<"Enter name: "<<endl;
        cin.getline(name,78);
        cout<<"Enter the age: "<<endl;
        cin>>age;
        cin.ignore(10,'\n');
        cout<<"Enter the crn number: "<<endl;
        cin>>crn;
        cin.ignore(10,'\n');

    }
    void displayinfo()
    {
        cout<<"Name = "<<name<<"Age = "<<age<<"CRN  = "<<crn<<endl;
    }
    void inputsearch();
    void modifysearch();
    void deletesearch();
    void showsearch();
    int search(int m)
    {
        if(crn==m)
        {
            return true;
        }
        else return false;
    }
};
void Student::inputsearch()
{
    char ch;
    Student s;
    fstream inout;
    inout.open("student.txt",ios::in|ios::out|ios::app);
    if(inout.fail())
    {
        cout<<"ERROR opening file."<<endl;
        cout<<"Exiting."<<endl;
        exit(1);
    }
    do{
        cout<<"Enter the details of the student."<<endl;
        s.getinfo();
        inout.write((char* )&s,sizeof(s));
        cout<<"Do you want to add more."<<endl;
        cin>>ch;
        cin.ignore(10,'\n');
    }while(ch=='y'||ch=='Y');
    inout.close();
}
void Student::modifysearch()
{
    int r; int flag=0;
    cout<<"Enter the crn number you want to search: "<<endl;
    cin>>r;cin.ignore(10,'\n');
    Student s;
    fstream inout;
    inout.open("student.txt",ios::in|ios::out|ios::app);
    if(inout.fail())
    {
        cout<<"coudlnot open file."<<endl;
        cout<<"Exiting...";
        exit(1);
    }
    while(inout.read((char*)&s,sizeof(s))){
        if(s.search(r))
        {
            flag=1;
            cout<<"Records have been found in the file."<<endl;
            
        }
        else if(flag==0)
        {
            cout<<"Records are not discovered in the file."<<endl;
        }
    }
    cout<<"Enter the details to modify the rocord: "<<endl;
    s.getinfo();
    inout.close();
}
void Student:: showsearch()
{
    int r;int flag=0;
    cout<<"Enter the crn number you want to search: ";cin>>r;
    cin.ignore(10,'\n');
    Student s;
    fstream inout;
    inout.open("student.txt",ios::in|ios::binary);
    if(inout.fail())
    {
        cout<<"Couldnot open file."<<endl;
        
    }
    while (inout.read((char*)&s,sizeof(s)))
    {
        if(s.search(r))
        {
            flag=1;
            cout<<"-----RECORDS FOUND-------"<<endl;
            s.displayinfo();
            break;
        }
        else if(flag==0)
        {
            cout<<"SORRY! Records werenot found in database."<<endl;

        }


    }
    inout.close();
}
void Student::deletesearch()
{
int r; int flag=0;
Student s;
cout<<"Enter the crn for deleting the data; "<<endl;
cin>>r;
fstream inout;
fstream out;
out.open("temp.txt",ios::out);
inout.open("student.txt",ios::in);
if(inout.fail())
{
    cout<<"Error openig file."<<endl;
    cout<<"exitingn..";
    exit(1);
}
if(out.fail())
{
    cout<<"Error openig file."<<endl;
    cout<<"exitingn..";
    exit(1);
}
while(inout.read((char *)&s,sizeof(s)))
{
    if(s.search(r))
    {
        flag=1;
        cout<<"RECORD FOUND READY FOR DELETE;";
    }
    else if (flag==0)
    {
        cout<<"Records are not found for deltionn."<<endl;
    }
}
while(inout.read((char *)&s,sizeof(s)))
{
    if(s.search(r))
    {
        flag=1;
        cout<<"Book has been deleted."<<endl;
            }
            else{
                out.write((char*)&s,sizeof(s));
            }
}
if(flag==0)
{
    cout<<"book is not found."<<endl;
}
else if(flag==1)
{
    remove("student.txt");
    rename("temp.txt","student.txt");
}
inout.close();
out.close();
}
int main()
{
    Student s;
    int n;
    while(1)
    {
        cout<<"1. enter the record"<<endl<<
        "2.search recored."<<endl<<
         "3.modify record"<<endl<<
         "4.delete record"<<endl<<
         "5.exit."<<endl;
          cout<<"Enter the choice."<<endl;
    cin>>n;
    cin.ignore(10,'\n');
    switch (n)
    {
    case 1:s.inputsearch();
    break;
    case 2: s.showsearch();

        break;
        case 3: s.modifysearch();

        break;
        case 4: s.deletesearch(); break;
        case 5: exit(0);
        break;    
    default: cout<<"Enter the valid choices."<<endl;
        break;
    }
    }
   
    return 0;
}