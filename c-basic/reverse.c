#include<stdio.h>
void main (){
    int a,b;
    printf("Enter number");
    scanf("%d",&a);
    while(a>0){
    b=a%10;
    printf("%d",b);
    a=a/10;}
}