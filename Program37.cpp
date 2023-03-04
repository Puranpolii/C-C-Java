#include<iostream>
using namespace std;

template <class T>
struct node
{
    T data;
    struct node *next;
};

/*typedef struct node NODE;    typedef nasto generic madhe 
typedef struct node * PNODE;*/

template <class T>
class SinglyLL
{
    public:
        struct node <T> * First;

        SinglyLL();
        void InsertFirst(T no);
        void Display();
        int Count();
};

template <class T>
SinglyLL<T> :: SinglyLL() //class generic hota mhnun <T> lihila
{
    First = NULL;
}

template <class T>
void SinglyLL <T>:: InsertFirst(T no)
{
    struct node <T> * newn = new struct node <T>;  

    newn -> data = no;
    newn->next = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        newn->next = First;
        First = newn;
    }
}

template <class T>
void SinglyLL <T>:: Display()
{
    struct node <T> * temp = First;

    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
    cout<<"\n";
}

template <class T>
int SinglyLL <T> :: Count() //count kuthlya hi ll sathi integral asel
{
    struct node <T> * temp = First;
    int iCnt = 0;

    while(temp != NULL)
    {
        iCnt++;
        temp = temp -> next;
    }
    return iCnt;
}

int main()
{   
   

    SinglyLL <int>iobj;
    
    iobj.InsertFirst(101);
    iobj.InsertFirst(51);
    iobj.InsertFirst(21);
    iobj.InsertFirst(11);
    iobj.Display();
    int iRet = iobj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";

    SinglyLL <char>cobj;
    
    cobj.InsertFirst('a');
    cobj.InsertFirst('b');
    cobj.InsertFirst('c');
    cobj.InsertFirst('d');
    cobj.Display();
    int iRet = cobj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";

    SinglyLL <float>fobj;
    
    fobj.InsertFirst(22.10f);
    fobj.InsertFirst(32.51f);
    fobj.InsertFirst(44.62f);
    fobj.Display();
    int iRet = fobj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";

    return 0;
}