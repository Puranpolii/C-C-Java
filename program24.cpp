//generic code

#include<iostream>
using namespace std;
template <class T>  //T can be t also

T Addition(T i, T j)
{
     T ans ;   // no initializing with 0
     ans = i + j;

     return ans;
}
int main()
{
    double a = 11.9, b = 10.1, ret = 0;
    ret = Addition(a,b);
    cout<< "Addition is:" <<ret<<"\n";

    double x = 11, y = 10, iret = 0;
    iret = Addition(x,y);
    cout<< "Addition is:" <<iret<<"\n";

    return 0;
}