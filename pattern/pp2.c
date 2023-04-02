#include<stdio.h>
void main(){
    int i,n,j,k;
    printf("Enter length:");
    scanf("%d",&n);
    for (i=0; i<n; i++)
    {
        
      
        
        for(j=0; j< 2*n - (2*i + 1); j++)
        {
            printf("*");
        
        }

    
        printf("\n");
    }
}