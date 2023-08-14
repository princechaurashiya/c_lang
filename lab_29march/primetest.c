#include <stdio.h>
#include <math.h>

int main(){
  int i,n,j;
  int  count;
  printf("Enter number:");
  scanf("%d",&n);
    for (i=n+1; i>0  ;i++)
    {
        count=0;
      for (j=2; j<=sqrt(i); j++)
      {
      if (i%j==0){
        count =1;
        break;
      }
      }
      if(count == 0){
      printf("Next prime number is:%d\n",i);
      break;
      }
    }
    return 0;
}