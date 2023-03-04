#include<stdio.h>

//accept no from user and return number of bits which are on or 1

int CountonBits(unsigned int No)
{
    int iCnt = 0;
    int Digit = 0;

    while(No != 0)
    {
        Digit = No %2;
        if(Digit == 1)
        {
            iCnt ++;
        }
        No = No/2;
    }
    return iCnt;
}

int main()
{
    unsigned int Value = 11;
    int Ret = 0;

    printf("Enter number : \n");
    scanf("%d", &Value);

    Ret = CountonBits(Value);

    printf("Number of bits which are ON are : %d\n", Ret);
   
    return 0;
}