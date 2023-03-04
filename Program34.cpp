#include<iostream>
using namespace std;

//class template aslela function template asto

template <class T>  //class template
class ArrayX
{
    public:
        T *Arr;
        int iSize;

        ArrayX(int i); //size ahe T nako
        void Accept(); 
        void Display();
        
};

/* returnValue ClassName :: FunctionName()
   {

   }
*/

template <class T>
ArrayX <T> :: ArrayX(int i)
{
    iSize = i;
    Arr = new int[iSize];
}

template <class T>
void ArrayX <T> :: Accept()
{
    cout<<"Enter the elements : "<<"\n";
    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        cin>>Arr[iCnt];
    }
}

template <class T>
void ArrayX <T> :: Display()
{
    cout<<"Elements of the array are : "<<"\n";
    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<Arr[iCnt]<<"\n";
    }
}

int main()
{
    ArrayX <int>obj1(5);
    obj1.Accept();
    obj1.Display();
    
    ArrayX <double>obj2(5);
    obj2.Accept();
    obj2.Display();

    return 0;
}