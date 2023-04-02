#include<stdio.h>
void main(){
    int i,n=1,a,b;
    printf("Enter your starting range:");
    scanf("%d",&a);
    printf("Enter your upper range:");
    scanf("%d",&b);
for (i=a;i<=b;i++)
{
    if (n==i)
    {
        n=n+2;
        continue;
    }

    printf("Here is your even output :%d\n",i);
}
}