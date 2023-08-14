#include<stdio.h>
void swap(int  , int );
void main(){
    int a=10 ,b;
    printf("Enter first number:"\n);
    scanf("%d",&a);
    printf("Enter second mumber:");
    scanf("%d",&b);
    printf("Befor swaping %d %d  \n",a,b);
    swap (a,b);
    
}
    
        void swap(int x , int y)
        {
            int temp =x;
            x=y;
            y=temp;
            printf("After swaping %d %d",a,b);
        
        }
    
