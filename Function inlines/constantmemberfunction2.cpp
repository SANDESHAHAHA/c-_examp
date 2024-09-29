#include<iostream>
using namespace std;
class Test{
int num;
public: 
Test(int n=0){
    num=n;
}
void setData(int n)
{
    num=n;
}
int getData() const
{
    return num;
}
};
int main(){
    Test t1;
    const Test t2(2); 
    t1.setData(4);
 cout<<   t1.getData();
  cout<<  t2.getData();


}