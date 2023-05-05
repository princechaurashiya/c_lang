#include <stdio.h>
#include<string.h>
int main(){
    char ch;
    char a[100], b[100];
    printf("Enter charactur:");
    fgets(a,100,stdin);
    int length = strlen(a); 
         for(int i=0; i<length/2; i++)
         {
           ch= a[i];
           a[i]=a[length-1-i];
           a[length-1-i]=ch;
         }
          printf("%s",a);
    return 0;
}

