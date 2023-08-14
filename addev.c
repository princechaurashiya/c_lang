#include<stdio.h>
void main(){
    int a,i;
    printf("Enter number");
    scanf("%d",&a);
    int sum ;
    while (a)

    {
        int reminder=a%10;
    
        if (reminder%2==0)
        {
            sum = sum+reminder;
        }
        a=a/10;
    }
    printf("%d\n",sum);
}