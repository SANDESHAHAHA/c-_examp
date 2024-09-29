 #include<iostream>
 using namespace std;
 class Complex{
    float real;
    float img;
    public: 
    Complex(){
        real=img=0;
    }
    friend istream& operator >>(istream &,Complex &);
    friend ostream& operator <<(ostream &,Complex &);
 };
 istream& operator >>(istream &in, Complex &c)
 
{
    cout<<"Enter a complex number: "<<endl;
in>>c.real;
in>>c.img;
return in;
}
ostream& operator <<(ostream &out,Complex &c)
{
    cout<<"The complex number is : "<<endl;
    out<<c.real<<"+i"<<c.img<<endl;
    return out;
}
 int main()
 {
Complex c1,c2,c3;
cin>>c1>>c2>>c3;
cout<<c1<<c2<<c3;


return 0;
    
 }