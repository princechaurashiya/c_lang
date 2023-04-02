#include<stdio.h>
void main (){
    int arr [5],i;
    for (i=0;i<5;i++){
printf("Enter the value of arr [%d]:",i);
scanf("%d",& arr [i]);
    }
printf("the element of arry are :\n");
for(i=0; i<5; i++)
{
    printf("%d",arr[i]);
    printf("\n");
}

}
