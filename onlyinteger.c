#include <stdio.h>
void main(){
    int a ;
        printf("Enter number\n");
        scanf("%d",&a);
        for( ;a !=0; )
        {
            if (a<0)
            break;
            printf("Enter number\n");
            scanf("%d",&a);
        }
        printf("your last number is not a natural numbr.\n");
    }
