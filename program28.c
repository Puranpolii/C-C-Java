#include<stdio.h>
#include<stdbool.h>

//check 7th 8th 9th  bit on or off

typedef unsigned int UINT;


//12th bit
//0000  0000   0000  0000  0000  0001  1100  0000 
// 0     0      0     0     0     1     C    0
// 0X000001C0 - hexadecimal
// 4 bits chya group la nibble mhntat


bool Checkbit(UINT No)
{
   // UINT iMask = 512;   // 512 - karan 10th (2^9) bit check karaychi ahe
    UINT iMask = 0X000001C0;
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
        printf("7th,8th,9th bit is on \n");
    }
    else
    {
        printf("7th,8th,9th bit is off\n");
    }
    return 0;
}
