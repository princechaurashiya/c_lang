#include<stdio.h>
#include <stdlib.h>
#define max 50

void insert();
void deletion();
void display();



int stack [max];
 int top = -1;

  void insert()
{
       int item ;
             for (int i =1; i <5; i++)
    {
            if( top == max -1)
            printf("stack is full \n");
        else{
            top++;
              printf("enter item");
              scanf("%d",&item);
                stack[top] = item;
        }
    }
}



void deletion()
{
      if (top == -1)
         printf(" stack is empty :\n");
  else {
             printf("Deleted element is %d \n ",stack[top]);
             top = top -1;
        }
}


void display(){
    int i;
    if (top == -1)
    printf("\n  Stack is empty \n");
 else {
        printf("   Stack is --\n");
          for (i=top; i>=0; i--)
        {
           printf("  %d \n", stack[i]);
        }
    }
}



void main (){
    printf("now lets start \n");
     int s;
     while(1){
        printf("\n SELECT ANYONE :  \n");
         printf("    1 = insert : \n");
          printf("    2 = delete  :\n");
           printf("    3 = display :\n ");
            printf("   4 = exit : \n");

    scanf("%d",&s);

    switch(s){
    case 1 : insert();
    break;
    case 2 : deletion();
    break;
    case 3 : display();
    break;
    case 4 : exit(0);
    default: printf("\n Select a valid number !!");
    }
     }


}

