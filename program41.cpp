#include<iostream>
using namespace std;
//Queue implementation using linked list

template <class T>
struct node
{
    T data;
    struct node *next;
};

template <class T>
class Queue
{
    public:
       struct node <T> *First;     //pointer
       int iCount;            //element cha count

       Queue();

       bool IsQueueEmpty();       
       void EnQueue(T no);        //insert
       T DeQueue();               //delete
       void Display();

};

template <class T>
Queue<T> :: Queue()     
{
     First = NULL;
     iCount = 0;
}

template <class T>
bool Queue <T>:: IsQueueEmpty()
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

template <class T>
void Queue <T> :: EnQueue(T no)       //InsertLast
{
      struct node<T> *newn = new node<T>;  //memory allocate
      
      newn->data = no;
      newn->next = NULL;

      if(First == NULL)
      {
          First = newn;
      }
      else
      {    
           struct node<T> *temp = First;
           while(temp->next != NULL)
           {
              temp = temp -> next;
           }
           temp->next = First;
      }

      iCount++;

      cout<<no<<"gets inserted into stack"<<"\n";
}

template <class T>
T Queue <T>:: DeQueue()               //DeleteFirst
{
     if(First == NULL)
     {
        cout<<"Unable to remove as stack is empty"<<"\n";
        return -1;
     }
     else
     {
        T value = First -> data;   // node delete karnyaadhi ya madhe data preserve karto
        struct node *temp = First;  //temporary pointer
        
        First = First -> next;
        delete temp;

        iCount--;

        return value;
        
     }
}

template <class T>
void Queue<T> :: Display()
{   
    if(First == NULL)
    {
        cout<< "Stack is empty"<<"\n";
    }
    else
    {
        cout<<"Elements of stack are :"<<"\n";

        struct node <T> *temp = First;
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
    Queue <int> obj;

    obj.EnQueue(11);
    obj.EnQueue(21);
    obj.EnQueue(51);
    obj.EnQueue(101);

    obj.Display();

    int iRet = obj.DeQueue();
    cout<<"poped element is :"<<iRet<<"\n";

    iRet = obj.DeQueue();
    cout<<"poped element is : "<<iRet<<"\n";

    obj.Display();
    return 0;
}