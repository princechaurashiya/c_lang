#include<stdio.h>
void main (){
    int n,i,j;
    printf("Enter length:");
    scanf("%d",&n);
   int  arry[n];
    for (i=0;i<n;i++)
    {
        scanf("%d",&arry[i]);
    }
    int *p,max,diff;
    p=&arry[0];
    max=arry[  0];
    int comp=arry[0];
     printf("Difference between consecutive element is:\n");
    for (j=1;j<n;j++)
    {
        diff= comp - *(arry+j);
        if (max<*(arry+j))
        max=*(arry+j);
        printf("%d\n",diff);
        comp=*(arry+j);
        }
           printf("Max element is :%d\n",max);
}