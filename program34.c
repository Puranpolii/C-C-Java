// accept number from user and toggle alternate number
#include<stdio.h>
#include<stdbool.h>


typedef unsigned int UINT;



//0000  0000   0000  0000  0000  0000  0000  0000 
//0000  1111   0000  1111  0000  1111  0000  1111 
// 0X0F0F0F0F - hexadecimal (MASK)


UINT Togglebit(UINT No)
{
    UINT iMask = 0X0F0F0F0F;
    UINT iAns = 0;

    iAns = No ^ iMask;

    return iAns;
}

int main()
{
    UINT Value = 0;
    UINT iRet = 0;

    printf("Enter number: \n");
    scanf("%d", &Value);

    iRet = Togglebit(Value);

    printf("Updated number is: %d\n", iRet);
    
    return 0;
}
