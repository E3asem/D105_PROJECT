#include <stdio.h>
#include "calc.h"


 int global=10;


static const int c_glob=77;

static int sub_2_numbers(int x,int y)
{
    printf("const  = %d\n",c_glob);
    printf("global in calc file = %d\n",global);
if(x>y)
    return (x-y);
else
    return (y-x);
}



char checkTemp(void)
{
    char hot='H',cool='C';
int temp=0;
printf("please enter  temp value : ");
scanf("%d",&temp);
if(temp>10)
    {
        printf("your temp is hot \n");
    return HIGH;
}
else
    return LOW;
}



void mul(float n1,int n2,int n3)
{

printf("\nMUL=%f\n",n1*n2*n3);
}



/**implementation*/
void sum(void)
{
    global=1000;
///body
int x=10,y=20,s=0;
s=sub_2_numbers(x,y);
printf("\sub= %d\n",s);
///task
s=x+y;
printf("\nSum= %d\n",s);

}

