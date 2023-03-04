#include<iostream>
using namespace std;


void Swap(int x, int y)
{
    int temp;

    temp = x;
    x=y;
    y= temp;
}

int main()
{
    int a = 11, b= 10;

    cout<<"Value of a "<<a<<"\n";
    cout<<"Value of b "<<b<<"\n";

    Swap(a,b);  //call by value which is wrong

    cout<<"Value of a "<<a<<"\n";
    cout<<"Value of b "<<b<<"\n";

    return 0;
}