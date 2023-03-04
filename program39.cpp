#include<iostream>
using namespace std;
//stack implementation using linked list

template < class T>
struct node
{
    T data;
    struct node *next;      //declration ahe tyamule t nako
};

template < class T>
class Stack
{
    public:
       struct node<T> *First;     //pointer
       int iCount;            //element cha count

       Stack();

       bool IsStackEmpty();       
       void Push(T no);        //insert
       T Pop();               //delete
       void Display();

};

template < class T>
Stack <T> :: Stack()     
{
     First = NULL;
     iCount = 0;
}

template < class T>
bool Stack <T> :: IsStackEmpty()
{
      if(iCount == 0)
      {
          return true;
      }
      else
      {
          return false;
      }
}

template < class T>
void Stack <T> :: Push(T no)       //InsertFirst
{
      struct node<T> *newn = new node<T> ;  //memory allocate
      
      newn->data = no;
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

      iCount++;

      cout<<no<<"gets pushed into stack"<<"\n";
}

template < class T>
T Stack <T> :: Pop()               //DeleteFirst
{
     if(First == NULL)
     {
        cout<<"Unable to pop as stack is empty"<<"\n";
        return -1;  //return (T) -1 typecasting
     }
     else
     {
        T value = First -> data;   // node delete karnyaadhi ya madhe data preserve karto
        struct node <T> *temp = First;  //temporary pointer
        
        First = First -> next;
        delete temp;

        iCount--;

        return value;
        
     }
}

template < class T>
void Stack <T>  :: Display()
{   
    if(First == NULL)
    {
        cout<< "Stack is empty"<<"\n";
    }
    else
    {
        cout<<"Elements of stack are :"<<"\n";

        struct node<T>  *temp = First;
        while(temp != NULL)
        {
            cout<<"|"<<temp->data<<"|->";
            temp = temp -> next;
        }
        cout<<"NULL"<<"\n";
    }
    }
     

int main()
{
    Stack <int> obj;

    obj.Push(11);
    obj.Push(21);
    obj.Push(51);
    obj.Push(101);

    obj.Display();

    int iRet = obj.Pop();
    cout<<"poped element is :"<<iRet<<"\n";

    iRet = obj.Pop();
    cout<<"poped element is : "<<iRet<<"\n";

    obj.Display();
    return 0;
}