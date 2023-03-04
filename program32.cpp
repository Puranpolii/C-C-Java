#include<iostram>
using namespace std;

template < class T>
T Maximum(T Arr[], int iSize)  
{
    int iCnt ;
    T Max = Arr[0];


    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
       if(Arr[iCnt] > Max)
       {
          Max = Arr[iCnt];
       }
    }
    return Max;
}


int main()
{
    int Data[] = {110,240,380,140};
    int iRet = Maximum(Data,4);
    
    cout<<"Maximum of integers :"<<iRet<<"\n"

    float Dataf[] = {10.1f, 20.2f, 30.3f , 40.4f};
    float fRet = Maximum(Dataf , 4);
    
    cout<<"Maximum of floats :"<<fRet<<"\n"
    return 0;
}