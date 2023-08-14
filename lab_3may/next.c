#include <stdio.h>
#include <math.h>
void main (){
int i,j,n,k;
printf("enter length:");
scanf("%d",&n);
for (i=n+1;i>n;i++)
{
    int count=0; 
    int q = sqrt(2);
   for(j=2,k=sqrt(i); j<= k; j++)
  //for(j=2;j < n; j++)
    if (i%j==0)
    {
       count=1;
    }
    if (count==0)
    {
        printf("next prime number is :%d\n",i);
        break;
    }
}
}