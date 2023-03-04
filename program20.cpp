#include<iostream>
using namespace std;

// Doubly Circular LL

#pragma pack(1)         
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

class DoublyCL
{
   public:
       PNODE First; //characteristics
       PNODE Last;

       DoublyCL();   

       void InsertFirst(int no);          //methods
       void InsertLast(int no);
       void InsertAtPos(int no, int ipos);

       void DeleteFirst();
       void DeleteLast();
       void DeleteAtPos(int ipos);

       void Display();
       int Count();
};
 
 /*
 return_value Class_Name :: Function_Name()
 {
     code
 }
 */
void DoublyCL :: InsertFirst( int no)
{
    PNODE newn = new NODE;

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if((First == NULL) && (Last == NULL))  // empty linkedlist
    {
       First = newn;
       Last = newn;
    }
    else   //one or more nodes
    {
        newn->next = First;     
        (First)->prev = newn;
        First = newn;
    }
    (First)->prev = Last;
    (Last)->next = First;

}

 DoublyCL :: DoublyCL()   //default constructor
 {
     
 }
void  DoublyCL ::  InsertLast( int no)
{
    PNODE newn = new NODE;

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if((First == NULL) && (Last == NULL))  // empty linkedlist
    {
       First = newn;
       Last = newn;
    }
    else   //one or more nodes
    {
       (Last)->next = newn;
       newn -> prev = Last;
       Last = newn;
    }
    (First)->prev = Last;
    (Last)->next = First;

}

void  DoublyCL ::  Display()
{   
    PNODE temp = First;

    if(First == NULL && Last == NULL)
    {
        cout<<"LInked list is empty"<<"\n";
        return;
    }

    cout<<"Elements of linked list are :"<<"\n";
    do
    {
        cout<<"|"<< First->data<<"| <=>";
       temp = temp -> next;
    } while (temp != Last->next);

    cout<<"\n";   
}

int DoublyCL :: Count()
{   
    int iCnt = 0;
    PNODE temp = First;

    if(First == NULL && Last == NULL)
    {
        
        return iCnt ;
    }

    printf("Elements of linked list are :\n");
    do
    {
        iCnt++;
        temp = temp -> next;
    } while (temp != Last->next);
    
    return iCnt;   
}

void  DoublyCL :: DeleteFirst()
{
    if(First == NULL && Last == NULL)   //empty ll
    {
        return;
    }
    else if(First == Last)   //single node
    {
        delete(First);
        First = NULL;
        Last = NULL;
    }
    else   // more than one node
    {
       First = (First)-> next;
       delete(Last)-> next;  //free((*First)-> prev);
       
       (First)->prev = Last;
       (Last)->next = First;
    }
    
}

void DoublyCL ::  DeleteLast()
{
    if(First == NULL && Last == NULL)   //empty ll
    {
        return;
    }
    else if(First == Last)   //single node
    {
        delete(First);
        First = NULL;
        Last = NULL;
    }
    else   // more than one node
    {
        Last = (Last)-> prev;
        delete((First)-> prev);  //free((Last)->next);

        (First)->prev = Last;
        (Last)->next = First;
    }
}

void DoublyCL ::  InsertAtPos( int no, int ipos)
{
    int iNodeCnt = Count();
    PNODE temp = NULL;
    PNODE newn = NULL;
    int iCnt = 0;

    if ((ipos < 1) || (ipos > iNodeCnt+1))
    {
        cout<<"Invalid position"<<"\n";
        return;
    }

    if(ipos == 1)
    {
        InsertFirst(no);

    }
    else if(ipos == iNodeCnt+1)
    {
        InsertLast(no);
    }
    else
    {
        newn = new NODE;
        newn->data = no;
        newn->next = NULL;
        newn->prev = NULL;
        
        temp = First;
        for(iCnt = 1; iCnt < ipos-1; iCnt++)
        {
            temp = temp ->next;
        }
        newn -> next = temp -> next;
        temp -> next -> prev = newn;

        temp-> next = newn;
        newn-> prev = temp;
    }
}

void  DoublyCL ::  DeleteAtPos( int ipos)
{
    int iNodeCnt = Count();
    PNODE temp = NULL;
    int iCnt = 0;

    if ((ipos < 1) || (ipos > iNodeCnt))
    {
       cout<<"Invalid position"<<"\n";
        return;
    }

    if(ipos == 1)
    {
        DeleteFirst();

    }
    else if(ipos == iNodeCnt+1)
    {
        DeleteLast();
    }
    else
    {
        temp = First;
        for(iCnt = 1; iCnt < ipos-1; iCnt++)
        {
            temp = temp ->next;
        }
       
       temp->next = temp->next->next;
       delete(temp->next->prev);
       temp->next->prev = temp;
    }
}
int main()
{
    int iRet =  0;
    
    DoublyCL obj;

   obj. InsertFirst(51);
   obj. InsertFirst(21);
   obj. InsertFirst(11);

   obj. InsertLast(101);
   obj. InsertLast(111);
   obj. InsertLast(121);

   obj. Display();
   iRet = obj.Count();
   cout<<"Number of elements are:"<<"\n";
    
   obj. InsertAtPos(105,5);
   obj. Display();
   iRet = obj.Count();
   cout<<"Number of elements are:"<<"\n";

   obj. DeleteAtPos(5);
   obj. Display();
   iRet = obj.Count();
   cout<<"Number of elements are:"<<"\n";

   obj. DeleteFirst();
   obj. DeleteLast();
    
   obj. Display();
   iRet = obj.Count();
   cout<<"Number of elements are:"<<"\n";
    
    return 0;
}