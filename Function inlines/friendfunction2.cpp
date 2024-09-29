#include<iostream>
#include<iomanip>
using namespace std;
class Time{
    int hr;int min;
    int sec;
    public: Time()
    {
        hr=0;
        min=0;
        sec=0;
    }
    Time(int h ,int m ,int s)
    {
        hr=h; min=m; sec=s;
    }
    void display()
    {
        cout<<setw(2)<<setfill('0')<<hr<<":"<<setw(2)<<setfill('0')<<min<<":"<<setw(2)<<setfill('0')<<sec<<endl;

    }
    friend   Time addTime(Time,Time);
};
Time addTime(Time t1,Time t2)
{
    Time t;
    t.hr=t1.hr+t2.hr;
    t.min=t1.min+t2.min;
    t.sec=t1.sec+t2.sec;
    while(t.sec>=60)
    {
t.sec-=60;
t.min++;
    }
    while(t.min>=60){
        t.min-=60;
        t.hr++;
    }
    return t;

    
}
int main()
{
    Time x(2,50,35),y(35,343,4554),z;
    z=addTime(x,y);
    z.display();
}
