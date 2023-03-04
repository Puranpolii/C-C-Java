#include<stdio.h>
#include<stdbool.h>

//accept no from user check whether 4th bit of no is on or off
//diagram

typedef unsigned int UINT;

bool Checkbit(UINT No)
{
    UINT iMask = 8;   // 8 - karan 4th (2^3) bit check karaychi ahe
    UINT Result = 0;

    Result = No & iMask;

    if(Result == iMask)  //or result == 0
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    UINT Value = 0;
    bool bRet = false;

    printf("Enter number: \n");
    scanf("%d", &Value);

    bRet = Checkbit(Value);

    if(bRet == true)
    {
        printf("4th bit is on \n");
    }
    else
    {
        printf("4th bit is off\n");
    }
    return 0;
}