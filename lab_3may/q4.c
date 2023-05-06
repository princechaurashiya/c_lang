#include<stdio.h>
void main (){
    int i,j;
int a[5]={1,2,3,4,5};
int b[5]={3,4,5,6,7};
  
    printf("[ ");
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(a[i]==b[j])
            {
                printf("%d ",a[i]);
            }
        }
    }
    printf("]");
}