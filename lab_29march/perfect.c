#include<stdio.h>
 int perfect (int);
void main(){
    int a,c;
    printf("Enter number:");
    scanf("%d",&a);
      c = perfect(a);
    if (c == a)
    {
        printf("Given number %d is perfect number\n",a);
    }
    else {
    printf("given number %d is not perfect number\n",a);
}
}
 int perfect(int x){ 
    int sum=0;
 for (int i=1; i<x; i++)
{
    if (x %i==0)
     sum=sum+i;
}
 return sum;
}