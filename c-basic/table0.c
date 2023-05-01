#include<stdio.h>
void main(){
    int a,i;
    printf("Enter any number which you want to print table :");
    scanf("%d",&a);
    for(i=1; i<=10; i++) {
    printf("%d",a*i);
    printf("\n");
    }
} 
