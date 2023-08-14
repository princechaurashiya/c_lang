#include<stdio.h>
void main(){
    int num1,num2,*p,*i;
    printf("Enter two number:");
    scanf("%d%d",&num1 ,&num2);
    p = &num1;
    i= &num2;
    int sum =*p+*i;
    

    printf("Sum of two number is:%d",sum);

}