// //overloading of the funtion template with normal function 

// #include<iostream>
// using namespace std;
// template<class T>
// T max(T a,T b)
// {
//     if(a>b)
//     {
//     return a;
//     }
//     else{
// return b;
//     }
// }
// int max(int x,int y,int z)
// {
//     if(x>y && x>z)
//     {
// return x;
//     }
//     else if( y>z)
//     {
// return y;

//     }
//     else {
// return z;
//     }
// }
// int main()
// {
//     float maxi;
//     int great;
//     float m,n;
//     cout<<"Enter the values of m and n: "<<endl;
//     cin>>m>>n;
//    maxi= max(m,n);
//    great= max(3,45,64);
//    cout<<"larger number is:"<<maxi;
//    cout<<"Larger number is :"<<great;
//     return 0;
//  }