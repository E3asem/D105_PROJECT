#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
#define MAX 5

static int stack[MAX];
static int top=-1;

 int stack_isFull(void)
{
    if(top == MAX-1)
        return 1; //full
    else
        return 0; // not full
}
static int stack_isEmpty(void)
{
    if(top == -1)
        return 1; //empty
    else
        return 0; // not empty
}
static void stack_push(int element)
{
//int r=stack_isFull();  // r=0 not full  r=1 full

    if(!stack_isFull())
        //top++;
        //scan element
        stack[++top]=element;
    else
        printf("stack is overFlow\n");


}
static void stack_pop(void)
{
    if(!stack_isEmpty())
        top--;
    else
        printf("stack is under flow\n");
}
static void stack_display(void)
{
    int i=0;
    if(!stack_isEmpty())//if(stack_isEmpty() == 0)
    {
        printf("stack = \n");
        for(i=top; i>=0; i--)
        {
            printf("%d\t",stack[i]);
        }
        printf("\n");
    }
    else
    {
        printf("stack is under flow\n");
    }


}

void stack_app(void)
{

int choice=0,element;

    while(1){
    printf("1-isFull ? \n2-isEmpty ?\n3-push\n4-pop\n5-display\n0-exit\n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        if(stack_isFull())
            printf("YES\n");
        else
            printf("Not Full\n");
        break;
    case 2:
        if(stack_isEmpty())
            printf("YES\n");
        else
            printf("Not Empty\n");
        break;
    case 3:

    if(!stack_isFull())
        {
        printf("please enter your element: ");
        scanf("%d",&element);
        stack_push(element);
    }else
    {
    printf("not valid\n");
    }

        break;
    case 4:
       stack_pop();
        break;
    case 5:
        stack_display();
        break;
    case 0:
        printf("Good bye\n");
        // return 0;   //break;
        exit(0);
    default :
        printf("Please enter a valid choice\n");
        break;
    }
    }

}
