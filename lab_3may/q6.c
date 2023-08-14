#include<stdio.h>
void main(){
    int i,j,n,max;
    printf("Enter length:");
    scanf("%d",&n);
    int arr[n];
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int *ptr;
    ptr = &arr[0];
    max = arr[0];
    for (j=1;j<n;j++)
    {
        if(max < *(arr+j))
        {max= *(arr+j);
        }
    }
    printf("Max  element is:%d",max);
}