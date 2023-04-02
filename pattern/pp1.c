#include<stdio.h>
void main (){
    int j,i,n,k;
    printf("Enter length:");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for (j=0;j<i;j++)
        {
            printf("*");
            printf(" ");
        }
        printf("\n");
    }
}