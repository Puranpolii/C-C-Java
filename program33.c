#include<stdio.h>
#include<stdbool.h>

//diagram
typedef unsigned int UINT;


bool Checkbit(UINT No, UINT Pos1, UINT Pos2)
{    
     // UINT iMask = 1; in decimal
     UINT iMask1 = 0X00000001;  //always set to 1 (if you initialize with 0,there will be no shifting)
     UINT iMask2 = 0X00000001;
     UINT iMask = 0;
     UINT Result = 0;


    if((Pos1 < 1) || (Pos1 >32) || (Pos2 < 1) || (Pos2 >32) )
    {
          printf("Invalid position , it should be between 1 to 32\n");
          return false;
    }
    
    iMask1 = iMask1 << (Pos1 -1);  // Dynamic mask formation
    iMask2 = iMask2 << (Pos2 -1);
    
    iMask = iMask1 | iMask2;

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
    UINT Position1 = 0;
    UINT Position2 = 0;
    bool bRet = false;


    printf("Enter number: \n");
    scanf("%d", &Value);
    
    printf("Enter the position1 of bit\n");
    scanf("%d", &Position2);
     
    printf("Enter the position2 of bit\n");
    scanf("%d", &Position2);

    bRet = Checkbit(Value,Position1,Position2 );

    if(bRet == true)
    {
         printf("Bit at the position %d & %d is ON\n", Position1,Position2);
    }
    else
    {
    printf("Bit at the position %d & %d is Off\n", Position1,Position2);
    }
    return 0;
}








/*

pos1 = 3
pos2 = 6

mask1 = 0 0 0 0 0 0 0 1
mask2 = 0 0 0 0 0 0 0 1

mask1 = mask1 << (pos1 -1)
mask1 = mask1 << (2)
mask1 = 0 0 0 0 0 1 0 0

mask2 = mask2 << (pos1 -1)
mask2 = mask2 << (5)
mask1 = 0 0 1 0 0 0 0 0

mask = mask1 | mask2

0 0 0 0 0 1 0 0
0 0 1 0 0 0 0 0  |
------------------
0 0 1 0 0 1 0 0

mask = 0 0 1 0 0 1 0 0       

*/