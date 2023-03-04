#include<stdio.h>

//bitwise

void DisplayBinary(unsigned int No)
{
    int Digit = 0;

    while(No != 0)
    {
         Digit = No % 2;
         printf("%d",Digit);
         No = No/2; //2 cause binary hava ahe digits chya program madhe 10 lihila karan tevha numbers decimal madhe hote
    }
    printf("\n");
}


int main()
{
    unsigned int Value = 11;

    DisplayBinary(Value);

    return 0;
}