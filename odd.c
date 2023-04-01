#include <stdio.h>
int main(void){
    int a,b;
    printf("enter range \n");
    scanf("%d %d",&a,&b);
    if(a>b){
        int c = a;
        a = b;
        b = c;
    }
    for(int i=a; i<=b; i++){
        if(i%2==0){
            continue;
        }
        printf("%d  ",i);
    }
    printf("\n");
    return 0;
}