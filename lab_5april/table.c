#include<stdio.h>
void main(){
    int i,n,j;
    printf("Enter number of table:");
    scanf("%d",&n);
    for (i=1;i<=10;i++)
    {
        printf("%d",i*n);
        printf("\n");
    }
}