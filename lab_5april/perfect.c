#include<stdio.h>
void main(){
    int n,j,add=0;
    int i;
   printf("Enter range upto:");
    scanf("%d",&n);
     for (i=1;i<=n;i++)
     {
        for(j=1;j<= i/2;j++)
        {
            if (i%j==0)
            add=add+j;
        }
        if(add==i)
        printf("%d is perfect number. \n",add);
        add=0;
     }
}