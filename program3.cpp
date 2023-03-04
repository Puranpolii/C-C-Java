#include<iostream>
using namespace std;

int Addition(int iValue1, int iValue2 )
{
    int iAdd = 0;

    iAdd = iValue1 + iValue2;

    return iAdd; 
}




int main()
{   
    int iNo1 = 0,  iNo2 = 0 ,  iAns = 0;

    cout<<"enter two numbers";
    cin>>iNo1;
    cin>>iNo2;

    iAns = Addition(iNo1,iNo2);

    iAns = iNo1 + iNo2;
    cout<<"Addition is:"<<iAns<<"\n";

    return 0;
}
