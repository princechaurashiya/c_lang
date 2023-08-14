#include<stdio.h>
#define MAX 5
int stack[MAX];
int top = -1;
void push (int item){
    if(top==MAX - 1)
    { 
        printf("full");
        
    }
    top++;
    stack[top]=item;
 printf("Top most value now in stack is %d \n",stack[top]);
     }


void main(){
int key;
//printf("hello shubham\n");
for(int i=1;i<=(MAX+1);i++){
printf("enter an element to push in stack : ");
scanf("%d",&key);
push(key);
//printf("the value is %d \n",stack[top]);
}
//free(stack);
}












// #include<stdio.h>
// //#include<limits.h>
// //#include<stdlib.h>
// #define max 5
// int top = (-1);
// int stack[max];
// void push(int item){
//     if(top == max-1){
//     printf("stack is full.\n");
//     }
//     else{
//     top++;
//     stack[top] =item;
//     printf("Top most value now in stack is %d \n",stack[top]);
//     }

// }  
// void main(){
// int key;
// //printf("hello shubham\n");
// for(int i=1;i<=(max+1);i++){
// printf("enter an element to push in stack : ");
// scanf("%d",&key);
// push(key);
// //printf("the value is %d \n",stack[top]);
// }
// //free(stack);
// }