#include<iostream>
using namespace std;

class ArrayX
{
    public:
         int * Arr;
         int iSize;

         ArrayX(int i)              //method 1
         {
            iSize = i;
            Arr = new int[iSize]; //memory allocated
         }

         ~ArrayX()                  //method 2
         {
            delete []Arr;           //deallocation
         }

         void Accept() //user kadlya values store karel  method 3
         {
            cout<<"enter the elements of array:"<<"\n";

            for(int i=0; i< iSize; i++)
            {
                cin>>Arr[i];
            }
         }

         void Display() //user kadlya values display karel   method 4
         {
            cout<<"enter the elements of array:"<<"\n";

            for(int i=0; i< iSize; i++)
            {
                cout<<Arr[i]<<"\t"
            }
            cout<<"\n";
         }
         
};

int main()
{
    ArrayX obj(5);     //static and hardcoded

    obj.Accept();
    obj.Display();

    return 0;
}