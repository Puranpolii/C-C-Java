//toggle 4th bit (all others should be unchanhged)

/*
     0 0 0 0 1 0 1 0
     0 0 0 0 1 0 0 0
  -----------------------
     0 0 0 0 0 0 1 0

     0 0 0 0 0 0 1 0
     0 0 0 0 1 0 0 0
    ---------------------
     0 0 0 0 1 0 1 0

*/

#include<stdio.h>
#include<stdbool.h>


typedef unsigned int UINT;


//12th bit
//0000  0000   0000  0000  0000  0000  0000  0000 
//0000  0000   0000  0000  0000  0000  0000  1000 
// 0X00000008 - hexadecimal (MASK)


UINT Togglebit(UINT No)
{
  /*  UINT iMask = 0X00000008;
    return (No ^ iMask);*/

    UINT iMask = 0X00000008;
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
