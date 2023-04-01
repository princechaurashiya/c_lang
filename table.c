# include <stdio.h>
void main(){
    int i,j,a,b;
    printf("kaha se kaha tak ka table print karwana hai");
    scanf("%d %d",&a,&b);
    for (j=a;j<=b;j++)
{
    for (i=1;i<=10; i++)
    {
    printf("%d ",i*j);
    }
    printf("\n");

}
}