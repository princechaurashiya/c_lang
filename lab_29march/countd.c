#include<stdio.h>
void main (){
    int i, n;
printf("Enter length ofc arry:");
scanf("%d",&n);
int a[n];
for (int i=0;i<n;i++)
{
    printf("Enter value of element of arry:");
scanf("%d",& a[i]);    
}
    int count1=0,count2=0,count3=0;
    for ( i=0;i<n;i++)
    { 
        if (a[i]/10<1)
        count1 ++;
        else if (a[i]/100<1)
        count2 ++;
        else if (a[i]/1000<1)
        count3 ++;
    }
     printf("%d,",1);
    printf("%d ",count1);
    printf("%d,",2);
    printf("%d ",count2);
    printf("%d,",3);
    printf("%d ",count3);
    }