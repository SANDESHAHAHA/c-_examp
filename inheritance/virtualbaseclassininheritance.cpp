#include<iostream>
using namespace std;
class Student{
protected: 
// char name[80];
int rollno;
public: 
void setroll(int r)
{
    rollno =r;
}
void printroll()
{
    cout<<"roll no = "<<rollno<<endl;  
}
};
class Test:virtual public Student{
protected: 
float maths,physics;
public: 
void gettestmarks(float m, float p)
{
   maths=m;
   physics =p;
} 
void printmarks()
{
    cout<<"MATH MARKS = "<<maths<<"PHYSICS MARKS = "<<physics<<endl;
}
};
class sports: virtual public Student{
protected: 
float score;
public: 
void getsportmark(float s)
{
   score =s;
}
void printscore()
{
    cout<<"Score is :"<<score<<endl;  
}
};
class Result: public Test, public sports{
float total;
public:
void display()
{
    total=maths+score+physics;
    printscore();
    printmarks();
}
   
};
int main()
{
Result r;
r.gettestmarks(4,5);
r.setroll(23);
r.getsportmark(54);
r.display();
return 0;

}