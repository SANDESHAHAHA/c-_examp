//--------Convert gram into tola where 1 tola =11 gram
#include<iostream>
using namespace std;
class Tola
{
    float tola;
    public:
    Tola(){
        tola=0;
    }
    Tola(float t)
    {
        tola =t;
    }
    void show()
    {
        cout<<tola<<" tolas."<<endl;
    }
};
class Gram{
float gram;
public: 
Gram(){
    gram=0;
}
    Gram(float g)
    {
        gram=g;
    }
    void display()
    {
cout<<gram<<" grams."<<endl;
    }
    operator Tola()
    {
        return Tola(gram/11);
    }
};
int main()
{
    float k;
    cout<<"Enter the value in  gram."<<endl;
    cin>>k;
    Gram gm(k);
    gm.display();
    Tola to=gm;
    to.show();
}