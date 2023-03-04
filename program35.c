#include<stdio.h>
#include<stdbool.h>

//off the bit from particular position and position should be taken from user
typedef unsigned int UINT;


UINT Offbit(UINT No , UINT Pos)
{

    UINT iMask = 0X00000000;
    iMask = iMask << (Pos-1);

    iMask = ~iMask;

    return (No & iMask);    
}

int main()
{
    UINT Value = 0, Position = 0;
    UINT iRet = 0;

    printf("Enter number: \n");
    scanf("%d", &Value);

    printf("Enter position: \n");
    scanf("%d", &Position);

    iRet = Offbit(Value,Position);

    printf("Updated number is: %d\n", iRet);
    
    return 0;
}





/*
No = 1 0 1 0 1 1 1 0

pos = 6

iMask = 0 0 0 0 0 0 0 1 

iMask = iMask <<(5)

iMask = 0 0 1 0 0 0 0 0

iMask = ~iMask;

iMask = 1 1 0 1 1 1 1 1


       No = 1 0 1 0 1 1 1 0
    iMask = 1 1 0 1 1 1 1 1   &
   ------------------------------
            1 0 0 0 1 1 1 0
*/