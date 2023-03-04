#include<iostream>
using namespace std;

//input : 78747444
//output : 4 occurs the max time i.e 4 times
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

           void MaxFrequency()
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
               
               int iMaxFrequency = 0;
               int iMaxDigit = 0;

               for(int i = 0; i < 10; i++)
               {
                  if(Frequency[i] > iMaxFrequency)
                  {
                    iMaxFrequency = Frequency[i];
                    iMaxDigit = i;
                  }
               }
               cout<<"Maximum times occured digit is:"<< iMaxDigit << "and its frequency is"<< iMaxFrequency <<"\n";
           }          
};

int main()
{
    int iValue = 0;
    int iRet = 0;
    cout<<"enter the number:"<<"\n";
    cin>>iValue;

    DigitX obj(iValue);

    obj.MaxFrequency();
    
    return 0;
}