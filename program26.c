#include<stdio.h>
#include<stdbool.h>

//accept no from user check whether 10th bit of no is on or off
//diagram

typedef unsigned int UINT;


//10th bit
//0000  0000   0000  0000  0000  0010  0000  0000 
// 0     0      0     0     0     2      0    0
// 0X00000200 - hexadecimal


bool Checkbit(UINT No)
{
   // UINT iMask = 512;   // 512 - karan 10th (2^9) bit check karaychi ahe
    UINT iMask = 0X00000200;
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
        printf("10th bit is on \n");
    }
    else
    {
        printf("10th bit is off\n");
    }
    return 0;
}
