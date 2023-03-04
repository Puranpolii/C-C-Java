#include<iostream>
using namespace std;
//stack implementation using linked list


struct node
{
    int data;
    struct node *next;
};


class Stack
{
    public:
       struct node *First;     //pointer
       int iCount;            //element cha count

       Stack();

       bool IsStackEmpty();       
       void Push(int no);        //insert
       int Pop();               //delete
       void Display();

};

Stack :: Stack()     
{
     First = NULL;
     iCount = 0;
}

bool Stack:: IsStackEmpty()
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
void Stack :: Push(int no)       //InsertFirst
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
           newn->next = First;
           First = newn;
      }

      iCount++;

      cout<<no<<"gets pushed into stack"<<"\n";
}

int Stack :: Pop()               //DeleteFirst
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

void Stack :: Display()
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
    Stack obj;

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