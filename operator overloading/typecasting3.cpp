//-------CLASS TO CLASS TYPE CONVERSION------
#include<iostream>
using namespace std;

class triangle{
    int base,height;
    float area;
    public:
    triangle(int b, int h)
    {
        base =b;
        height=h;
        area=0.5*base*height;
    }
    void print()
    {
        cout<<"Base= "<<base<<" Height= "<<height<<" AREA ="<<area<<endl;

    }
    int getBase()
    {
        return base;
    }
    int getHeight()
    {
        return height;
    }
    // operator rectangle()
    // {
    //     rectangle temp(base,height);
    //     return temp;
    // }
};
class rectangle{
    int width,length ,area;
    public: 
    rectangle(int w, int l)
    {
        width =w; length=l; area =width*length;

    }
    void output()
    {
        cout<<"Length ="<<length<<"width = "<<width<<"Area = "<<area<<endl;

    }
    rectangle(triangle t){
        width=t.getBase();
        length=t.getHeight();
        area=width*length;
        

    }
};

int main()
{
    triangle t(10,20);
     rectangle r=t;//triangle to rectangle 
     r.output();
     t.print();
     return 0;
}