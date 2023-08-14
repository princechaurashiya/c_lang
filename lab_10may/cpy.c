#include<stdio.h>
#include<string.h>
void main(){
    char a[]="kumar ";
    char b[]="prince";
    //printf("name b %s\n",b);
    strcpy(a,b);
    printf("name b %s \n",b);
    printf("name a %s\n",a);
    printf("%ld \n",sizeof(b));

}