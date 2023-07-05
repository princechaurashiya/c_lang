#include <stdio.h>
#include <string.h>
void main (){
    char a[200];
    int i,count=0;
    printf("Enter the string:\n");
 //  scanf("%[^\n]s", a);,
    fgets(a,30,stdin);
 //gets (a);
 //scanf("%s",a);
    for(i=0; a[i] != '\0' ; i++)
    {
        if(a[i] == ' ' && a[i+1] != ' ')
        count ++;
    }
    printf(" Total no. of words in given string are:%d\n",count);
    
}