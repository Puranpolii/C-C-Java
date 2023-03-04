#include<stdio.h>
#include<stdbool.h>

//diagram
typedef unsigned int UINT;


bool Checkbit(UINT No, UINT Pos)
{    
     // UINT iMask = 1; in decimal
     UINT iMask = 0X00000001;  //always set to 1 (if you initialize with 0,there will be no shifting)
     UINT Result = 0;


    if(Pos < 1 || Pos >32)
    {
          printf("Invalid position , it should be between 1 to 32\n");
          return false;
    }
    
    iMask = iMask << (Pos -1);  // Dynamic mask formation

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
    UINT Position = 0;
    bool bRet = false;


    printf("Enter number: \n");
    scanf("%d", &Value);
    
    printf("Enter the position of bit\n");
    scanf("%d", &Position);
    

    bRet = Checkbit(Value,Position);

    if(bRet == true)
    {
         printf("Bit at the position %d is ON\n", Position);
    }
    else
    {
    printf("Bit at the position %d is Off\n", Position);
    }
    return 0;
}