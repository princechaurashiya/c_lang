#include<stdio.h>
void main(){
    int i,r,a;
   printf ("Enter starting range ");
   scanf("%d",&a);
   printf ("Enter end range ");
   scanf("%d",&r);
   for (i=a;i<=r;i++){
    if (i%2!=0)
    printf("%d\n",i);
   }
}