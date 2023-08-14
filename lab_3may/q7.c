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
    int larg,diff=0;
    int comp=arry[0];
     printf("Difference between consecutive element is:\n{");
    for (j=1;j<n;j++)
    {
        diff= comp - *(arry+j);
        if (larg<diff)
        larg=diff;
        printf("%d,",diff);
        comp=*(arry+j);
        }
        printf("}\n");
           printf("Largest difference is :%d\n\n",larg);
}