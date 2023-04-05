#include<stdio.h>
#include<inttypes.h>

#define lld long long int


void main (){
    lld i,n,j;
    lld a[10];
    printf("Enter integer");
    scanf("%lld",&n);
    while (n)
    {
      j=n%10;
      a[j]++;
      n=n/10;
    }
      for(int i=0;i<10;i++)
{
printf("Frequency of %d is %lld times.\n",i,a[i]);
}
}