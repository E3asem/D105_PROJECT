#include <stdio.h>
#include <stdlib.h>
#include "queue.h"
#define MAX 5

static int queue[MAX];
static int front=-1,rear=-1;

static enum check queue_isFull(void)
{
    if(rear == MAX-1)
        return FULL;
    else
        return NOT_FULL;


}
static enum check queue_isEmpty(void)
{

    if(front == -1 || front>rear)
        return EMPTY;
    else
        return NOT_EMPTY;

}
static void queue_enqueue(void)
{
    int element;
    if(queue_isFull() == NOT_FULL)
    {
        printf("please enter your element: ");
        scanf("%d",&element);

        if(front == -1)//1st element
        {
            front++;
        }
        rear++;
        queue[rear]=element;

    }
    else
    {

        printf("queue is full\n");
    }

}
static void queue_dequeue(void)
{

if(queue_isEmpty() == NOT_EMPTY)
    {
    front++;
    }
else
    {
        printf("queue is empty\n");
    }



}
static void queue_display(void)
{
int i=0;
if(queue_isEmpty() == NOT_EMPTY)
    {
        printf("Queue: \n");
   for(i=front ; i <= rear ; i++)
    {
    printf("%d \n",queue[i]);
    }
   printf("\n");
    }
else
    {
        printf("queue is empty\n");
    }

}
void queue_app(void)
{

int choice=0,element;

    while(1){
    printf("1-isFull ? \n2-isEmpty ?\n3-enqueue\n4-dequeue\n5-display\n0-exit\n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        if(queue_isFull()== FULL)
            printf("YES\n");
        else
            printf("Not Full\n");
        break;
    case 2:
        if(queue_isEmpty()== EMPTY)
            printf("YES\n");
        else
            printf("Not Empty\n");
        break;
    case 3:
        queue_enqueue();
        break;
    case 4:
       queue_dequeue();
        break;
    case 5:
       queue_display();
        break;
    case 0:
        printf("Good bye\n");
        exit(0);
    default :
        printf("Please enter a valid choice\n");
        break;
    }
    }

}
