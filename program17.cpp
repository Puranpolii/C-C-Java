#include<iostream>
using namespace std;
  
//input 789567  597768
//output Numbers are anagram (no of digits and frequency should be same)

bool CheckAnagram(int iNo1, int iNo2)
{
    int Frequency1[10] = {0};
    int Frequency2[10] = {0};
    bool Flag = true;

    while(iNo1 != 0)
    {
        Frequency1[(iNo1 % 10)]++;
        iNo1 = iNo1 / 10;

    }

    while(iNo2 != 0)
    {
        Frequency2[(iNo2 % 10)]++;
        iNo2 = iNo2 / 10;
        
    }

    for(int i = 0; i < 10; i++)
    {
        if(Frequency1[i] != Frequency2[i])
        {
            Flag = false;
            break;
        }
    }
    return Flag;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    bool bRet = false;

    cout<<"Enter first number :"<<"\n";
    cin>>iValue1;

    cout<<"Enter second number :"<<"\n";
    cin>>iValue2;

    bRet = CheckAnagram(iValue1,iValue2);

    if(bRet == true)
    {
        cout<<"Numbers are anagram"<<"\n";
    }
    else
    {
        cout<<"Numbers are not anagram"<<"\n";
    }
    return 0;
}

