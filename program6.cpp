#include<iostream>
using namespace std;

//probems on N numbers
class ArrayX
{
    public:
       int * Arr;
       int iSize;

       ArrayX(int i)
       {
          iSize = i;
          Arr = new int[iSize];

       }

       void Accept()
       {
           cout<<"Please enter numbers: "<<"\n";
           int iCnt = 0;

           for(iCnt = 0; iCnt<iSize; iCnt++)
           {
               cin>>Arr[iCnt];
           }
       }
        void Display()
       {
           cout<<"Elememts of Array: "<<"\n";
           int iCnt = 0;

           for(iCnt = 0; iCnt<iSize; iCnt++)
           {
               cout<<Arr[iCnt]<<"\t";
           }
           cout<<"\n";
       }
       void Function()
       {

        //logic
       }
};

int main()
{
    int iLength = 0;

    cout<<"Enter number of elements:"<<"\n";
    cin>>iLength;

    ArrayX obj(iLength);

    obj.Accept();
    obj.Display();
    return 0;
}