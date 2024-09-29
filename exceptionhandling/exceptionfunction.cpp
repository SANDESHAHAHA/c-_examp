#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter the value of x and y"<<endl;
    cin>>x>>y;
    try{
        if(y==0)
        {
            throw y;
        }
    }catch(int y){

    }
}