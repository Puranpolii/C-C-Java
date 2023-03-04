#include<iostream>
using namespace std;

template <class T>
void Display(T Arr[], int iSize)  //array kuthla hi aso size integral ch asel
{
    int iCnt ;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<Arr[iCnt]<<"\n";
    }
}

int main()
{
    int Data[] = {10,20,30,40};
    Display(Data,4);

    char Datac[] = {'a', 'c', 'j', 'd', 'r'};
    Display(Datac , 5);
    
    return 0;
}