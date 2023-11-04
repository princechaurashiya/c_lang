#include<stdio.h>
void sum(void);  // function declaration

void sum()   //called fun
{
    int a,b,sum=0;
printf("Enter two number");
scanf("%d%d",&a,&b);
sum = a+b;
printf("Sum is : %d\n",sum);
}

 void main (){
    sum();  // function call
     sum();
    printf("\n hello The End. \n");
 }