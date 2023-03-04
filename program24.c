#include<stdio.h>

//accept no from user and return number of bits which are on or 1

typedef unsigned int UINT;
int CountonBits(UINT No)
{
    int iCnt = 0;
    int Digit = 0;

    while(No != 0)
    {
        Digit = No %2;
        iCnt = iCnt + Digit;
        No = No/2;
    }
    return iCnt;
}

int main()
{
    UINT Value = 11;
    int Ret = 0;

    printf("Enter number : \n");
    scanf("%d", &Value);

    Ret = CountonBits(Value);

    printf("Number of bits which are ON are : %d\n", Ret);
   
    return 0;
}