// //using class template find the area of the rectangle
// #include<iostream>
// using namespace std;
// template <class T>
// class rectangle{
//     T length;
//     T breadth;
//     public:
//     rectangle(){
//         length =0;
//         breadth=0;
//     }
//     rectangle(T x,T y)
//     {
//         length=x;
//         breadth=y;
//     }
//     T area(){
//         return length*breadth;
//     }
// };
// int main()
// {

// rectangle<int>ri(4,5);
// rectangle<float>rf(4.5,5.4);
// cout<<"Area of int dimension: "<<ri.area()<<endl;
// cout<<"Area of int dimension: "<<rf.area()<<endl;
// return 0;
// }
#include<iostream>
using namespace std;
template <class T>
class rectangle{
    T length;
    T breadth;
    public:
    rectangle()
    {
        length=0;
        breadth=0;

    }
    rectangle(int l , int b)
    {
        length=l;
        breadth=b;
    }
    T area(){
        return length* breadth;
    }
};
int main()
{
    rectangle<int>ra(3,4);
    cout<<"The area is :"<<ra.area();
    return 0;
}