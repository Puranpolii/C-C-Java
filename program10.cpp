#include<iostream>
using namespace std;

class ArrayX
{
    public:
         int * Arr;
         int iSize;

         ArrayX(int i)              //method 1
         {  
            cout<<"allocating the memory of resources"<<"\n";
            iSize = i;
            Arr = new int[iSize]; //memory allocated
         }

         ~ArrayX()                  //method 2
         {  
            cout<<"deallocating the memory of resources.."<<"\n";
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
    int ilength = 0;
    cout<<"enter the length of array"<<"\n";
    cin>>ilength;

    ArrayX * obj = new ArrayX(ilength);   //dynamic

    obj->Accept();
    obj->Display();

    delete obj;
    
    return 0;
}