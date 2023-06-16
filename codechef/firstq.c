#include <stdio.h>

int main(void) {
	int T,i,k;
    printf("Enter upto mumber of contest tastecase : ");
	scanf("%d",&T);
	for(i=0;i<T;i++)
	{
        printf("Enter Rank obtain in contest : ");
	    scanf("%d",&k);
	    if(k>10)
	    printf("Not selected for finals.\n");
	    else
	    printf("Selected for finals.\n");
	}
	return 0;
}

