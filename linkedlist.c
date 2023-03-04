#include<stdio.h>
#include<stdlib.h>

struct Node{
     int data;
     struct Node * next;  //struct node type pointer
};

void LLTraversal(struct node * ptr)
{
printf("%d", ptr->data);
}
int main()
{
    struct Node * head;
    struct Node * Second;
    struct Node * third;
    
    //memory allocation for nodes in heap
    head = (struct Node *)malloc(sizeof(struct Node));
    Second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    
    //link first and second nodes
    head->data = 7;
    head->next = Second;

    //link second and third nodes
    Second->data = 11;
    Second->next = third;

    //3rd node la thambvaych LL 
   third->data = 21;
   third->next = NULL;


    return 0;
}