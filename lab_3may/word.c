#include <stdio.h>


int main(void){
    char a[100];
    int count=0;
    printf("enter ch");
    fgets(a,30,stdin);

    //actual logic
    for(int i=0; a[i] != '\0'; i++){
        if(a[i] == ' ' && a[i+1]  ){
            count++;
        }
    }
}