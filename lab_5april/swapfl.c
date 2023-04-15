#include<stdio.h>
void main(){
    int n,l,temp,first,place=1;
    printf("Enter any integer :");
    scanf("%d",&n);
    l=n%10;
    temp=n;
    while(temp>9){
        temp=temp/10;
     place = place*10;
    }
    first=temp;
    n=l*place + n % place;
n=n/10*10+first;
printf("The number after swapping first and last digit :%d\n",n);
}
