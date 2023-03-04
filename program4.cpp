#include<iostream>
using namespace std;

class Arithmetic
{   
    public:                    //access specifier
        int iValue1, iValue2; // characteristics

        Arithmetic()            //default constructor
        {
            iValue1 = 0;
            iValue2 = 0;
        }

        Arithmetic(int A, int B)  // parametrised constructor
        {
            iValue1 = A;
            iValue2 = B;
        }

        int Addition()
        {
            int iAdd = 0;
            iAdd = iValue1 + iValue2;
            return iAdd;
        }
    
};
int main()
{   
    int iRet = 0;
    
    Arithmetic obj1;
    Arithmetic obj2(10,11);
    Arithmetic obj3(20,21);

    iRet = obj1.Addition();
    cout<<"Addition is:"<<iRet<<"\n";

    iRet = obj2.Addition();
    cout<<"Addition is:"<<iRet<<"\n";

    iRet = obj3.Addition();
    cout<<"Addition is:"<<iRet<<"\n";

    return 0;


}
