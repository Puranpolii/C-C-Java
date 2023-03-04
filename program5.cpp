#include<iostream>
using namespace std;


//problem on numbers
class Numbers
{
    public:
        int iNo = 0;
         
        Numbers(int i)
        {
            iNo = i;
        }
        int Factorial()
        {
            int ifact =1;
            int iCnt = 0;

            for(iCnt = 1; iCnt <= iNo; iCnt++)
            {
                ifact = ifact * iCnt;
            }
             
             return ifact;
        }
};

int main()
{
    int iValue = 0, iRet =0;

    cout<<"Enter number:\n";
    cin>>iValue;

     Numbers obj(iValue);
    
   iRet = obj.Factorial();
    cout<<"factorial is:"<<iRet;
    return 0;
}