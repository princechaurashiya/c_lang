#include<stdio.h>
  int prime(int );

   void main (){
    int a ;
    printf("Enter number");
    scanf("%d",&a);
  int  b = prime(a);
  if (b==0){
    printf("%d is a prime number .\n",a);
  }
    else 
     printf("%d is not a prime number.\n",a);
  
   }

   int prime(int x)
   {
    int result =0,i;
for (i = 2; i*i < x; i++){
    if (x%i==0)
    result = 1;
}
    return result;
}

