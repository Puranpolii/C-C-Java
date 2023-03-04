//accept number from user and off the 4th bit of the number 
// no      1 0 1 1 1 0 0 1 
   // &
// mask    1 1 1 1 0 1 1 1      (all other bits should be unchanged) 
//        ------------------------
//result   1 0 1 1 0 0 0 1

#include<stdio.h>
#include<stdbool.h>


typedef unsigned int UINT;



//0000  0000   0000  0000  0000  0000  0000  0000 
//1111  1111   1111  1111  1111  1111  1111  0111
// 0XFFFFFFF7 - hexadecimal (MASK)


UINT Offbit(UINT No)
{
  /*  UINT iMask = 0XFFFFFFF7;
    return (No & iMask);*/

    UINT iMask = 0XFFFFFFF7;
    UINT iAns = 0;

    iAns = No & iMask;

    return iAns;
}

int main()
{
    UINT Value = 0;
    UINT iRet = 0;

    printf("Enter number: \n");
    scanf("%d", &Value);

    iRet = Offbit(Value);

    printf("Updated number is: %d\n", iRet);
    
    return 0;
}
