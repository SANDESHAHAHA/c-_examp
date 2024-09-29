#include<iostream>
using namespace std;
int main()
{
    cout.width(90);
    cout.setf(ios::left);
    cout<<"This text is left justified."<<endl;
    cout.unsetf(ios::left);
    cout.width(90);
    cout<<"This text is right justified."<<endl;
    return 0;
    //by default right justified hunxa
    
}