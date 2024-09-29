 #include<iostream>
using namespace std;
 class Number{
    int n;
    public:
    void show()
    {
        cout<<n;
    }
    Number(int n)
    {
        this->n=n;
    }
    operator int ()
    {
        return n;
    }
 };
 int main()
 {
    Number numb=100;
    int x= numb;
    cout<<"The value of x is :"<<x<<endl;
    return 0;
 }