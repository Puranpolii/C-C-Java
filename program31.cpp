#include<iostram>
using namespace std;

template < class T>
T Addition(T Arr[], int iSize)  
{
    int iCnt ;
    T Sum;


    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        Sum = Sum + Arr[iCnt];
    }
    return Sum;
}


int main()
{
    int Data[] = {10,20,30,40};
    int iRet = Addition(Data,4);
    
    cout<<"Addition of integers :"<<iRet<<"\n"

    float Dataf[] = {10.1f, 20.2f, 30.3f , 40.4f};
    float fRet = Addition(Dataf , 4);
    
    cout<<"Addition of floats :"<<fRet<<"\n"
    return 0;
}