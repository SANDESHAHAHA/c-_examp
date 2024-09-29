//checking stream  buffers;
#include<iostream>
using namespace std;
int main()
{
    int x;
    while(true){
        cout<<"Enter a number: "<<endl;
        cin>>x;
        cin.ignore(10,'\n');
        if(cin.good())
        {
            break;
        }
        cin.clear();
        cout<<"Incorrect output"<<endl;
        cin.ignore(10,'\n');
    }
    cout<<"Integer is : "<<x<<endl; 
    return 0;
}