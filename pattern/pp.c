# include<stdio.h>
void main (){
    int i,n,j,k;
    printf("Enter row:");
    scanf("%d",&n);
    printf("Enter column:");
      scanf("%d",&k);
    for (i=1; i<=n;i++)
    {
        for (j=0;j<k; j++)
        {
        printf("*");
        printf(" ");
        }
        printf("\n");

    }
}
