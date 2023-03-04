#include<stdio.h>

//recursive

void DisplayI()
{
    int iCnt = 1;

    while(iCnt <= 4)
    {
        printf("*\t");
        iCnt++;
    }
}

void DisplayR()
{
    int iCnt = 1;

    if (iCnt <= 4)
    {
        printf("*\t");
        iCnt++;
        DisplayR(); //Recursive call
    }
}

int main()
{
    DisplayR();

    return 0;
}