#include<iostream>
using namespace std;

//input : 78747444
//output : 4 occurs 4 times , 7->2 times, 8-> 1 times
class DigitX
{ 
    public:
           int iNo;

           DigitX()
           {

           }
           DigitX(int i)
           {
              iNo = i;
           }
           void DisplayFrequency()
           {
               int iTemp = iNo;
               int iDigit = 0;
               int Frequency[10] = {0};

               while(iTemp != 0)
               {
                 iDigit = iTemp % 10;
                 Frequency[iDigit]++;
                 iTemp = iTemp / 10;
               }

               for(int i = 0; i < 10; i++)
               {
                  if(Frequency[i]>0)
                  {
                    cout<<i <<"ocuurs at"<<Frequency[i] <<"times"<<"\n";
                  }
               }
           }          
};

int main()
{
    int iValue = 0;
    int iRet = 0;
    cout<<"enter the number:"<<"\n";
    cin>>iValue;

    DigitX obj(iValue);

    obj.DisplayFrequency();
    
    return 0;
}