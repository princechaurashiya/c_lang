#include<stdio.h>
#include<string.h>

int main()
{
    char a[100], b[100];    
    printf("Enter the first string\n");    
    fgets(a,100,stdin);    

    printf("Enter the second string\n");    
    fgets(b,100,stdin);   
    int x=strlen(a);
    int z=strlen(b);
    printf("Length of first string is:%d \n and second is:%d\n",x,z);
    
    if( strcmp(a,b) == 0 )
        printf("Entered strings are equal.\n");
    else
        printf("Entered strings are not equal.\n");
        return 0;
}