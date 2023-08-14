#include <stdio.h> 
void diff (int *,int,int *);
void main (){
    int n ,i,max;
    printf("Enter length");
    scanf("%d",&n);
    int a[n];
    for (i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
    diff(a,n-1,&max);
printf("\nThe maximum difference is :%d",max);
}

void  diff(int *x,int y,int *max)
{
    int dif,k;
    *max=0;
     printf("Differnce b/w consecutive element is :\n");
    for (int j=0;j<y;j++)
    {
        dif=*(x+j)-*(x+j+1);
        printf("%d ",dif);
        if (*max < dif)
        *max=dif;
    }
    //return max;
}
