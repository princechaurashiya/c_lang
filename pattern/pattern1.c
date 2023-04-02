#include<stdio.h>
void main(){
    int n;
    printf("Enter the length:");
    scanf("%d",&n);
    int a=n-1, b=n-1;
    for (int i=1;i<=n; i++)
    {
        for (int j=0; j <= (2 * (n-1)); j++)
        {
         if(j>=a && j<=b)
             {
                 printf("*");
             }
            else
              {
                 printf(" "); 
              }
        }
                a--;
                b++;
                printf("\n");

            
        
        
    }
}