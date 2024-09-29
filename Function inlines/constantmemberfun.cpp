  //constant member function restrics the modification of data member inside functions
  #include<iostream>
  using namespace std;
  class Base{
    mutable int x;
    public:
    Base(int num){
        x=num;
    }
    int getinfo() const {
       x=34;
        return x;
    }
  };
  int main()
  {
    Base b(10);
   cout<< b.getinfo();

    return 0;
  }