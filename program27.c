#include<stdio.h>
#include<stdbool.h>

//check 12th bit on or off

typedef unsigned int UINT;


//12th bit
//0000  0000   0000  0000  0000  1000  0000  0000 
// 0     0      0     0     0     8     0    0
// 0X00000800 - hexadecimal

bool Checkbit(UINT No)
{
   // UINT iMask = 512;   // 512 - karan 10th (2^9) bit check karaychi ahe
    UINT iMask = 0X00000800;
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
        printf("12th bit is on \n");
    }
    else
    {
        printf("12th bit is off\n");
    }
    return 0;
}
