#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the values of a and b "<<endl;
    cin>>a;
    cin>>b;
    int x;
    x=a-b;
    try{
        if(x<0){
            throw x;
        }
    }
    catch(int n ){
        cout<<"Exception caught n= "<<n<<endl;
    }
    try{
        if(x!=0)
        {
           
            cout<<"Result (a/x) = "<<(a/x);
        }
        else {
            throw x;
        }
    }
    catch(int m ){
        cout<<"Exception caught : x ="<<m<<endl;
    }
    

    
}