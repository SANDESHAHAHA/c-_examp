//wap to illustrat the example of non template type arguments 
#include<iostream>
using namespace std;
template < class T , int size>
class  myArray{
 T a[size];
 public: 
     
 void setarray()
 {
    cout<<"Enter the array elements: "<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }
 }
 void addarray(){
   T sum =0;
   T avg=0;
    for(int i=0;i<size;i++)
    {
       sum=sum+ a[i];
    }
    avg=sum/size;
    cout<<"The sum of the array elements is : "<<sum<<endl;
    cout<<"The average of the array is : "<<avg<<endl;
 }
 void multiplyArray()
 {
    T product=1;
    for(int i=0;i<size;i++)
    {
        product=product*a[i];
    }
    cout<<"The product of the array is "<<product<<endl;
 }

};
int main()
{
myArray<int,5>a1;
a1.setarray();
a1.addarray();
a1.multiplyArray();
return 0;
}