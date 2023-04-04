#include<stdio.h>
void main (){
int n,i;
printf("Enter size of arry:");
scanf("%d",&n);
int a[n] ,b[n-1];
for (i=0;i<n;i++)
{
    printf("Enter the value of element of arry:");
    scanf("%d",&a[i]);
}
for (i=0; i<n-1; i++)
{
    b[i] =a[i] - a[1+i] ;
}
printf("The difference between consecutive elemetn are:\n");
for(i=0;i < n-1; i++)
{
    printf("%u\n",b[i]);
}
int max_diff =b[0];
for (i=0;i<n-1;i++)
{
    if (max_diff < b[i])
    max_diff = b[i];
}
printf("Largest difference between consecutive element is:%d\n",max_diff);
}