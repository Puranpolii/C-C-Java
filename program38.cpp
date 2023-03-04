#include<iostream>
using namespace std;
//Queue implementation using linked list


struct node
{
    int data;
    struct node *next;
};


class Queue
{
    public:
       struct node *First;     //pointer
       int iCount;            //element cha count

       Queue();

       bool IsQueueEmpty();       
       void EnQueue(int no);        //insert
       int DeQueue();               //delete
       void Display();

};

Queue :: Queue()     
{
     First = NULL;
     iCount = 0;
}

bool Queue:: IsQueueEmpty()
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
void Queue :: EnQueue(int no)       //InsertLast
{
      struct node *newn = new node;  //memory allocate
      
      newn->data = no;
      newn->next = NULL;

      if(First == NULL)
      {
          First = newn;
      }
      else
      {    
           struct node *temp = First;
           while(temp->next != NULL)
           {
              temp = temp -> next;
           }
           temp->next = First;
      }

      iCount++;

      cout<<no<<"gets pushed into stack"<<"\n";
}

int Queue :: DeQueue()               //DeleteFirst
{
     if(First == NULL)
     {
        cout<<"Unable to pop as stack is empty"<<"\n";
        return -1;
     }
     else
     {
        int value = First -> data;   // node delete karnyaadhi ya madhe data preserve karto
        struct node *temp = First;  //temporary pointer
        
        First = First -> next;
        delete temp;

        iCount--;

        return value;
        
     }
}

void Queue :: Display()
{   
    if(First == NULL)
    {
        cout<< "Stack is empty"<<"\n";
    }
    else
    {
        cout<<"Elements of stack are :"<<"\n";

        struct node *temp = First;
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
    Queue obj;

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