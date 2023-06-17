#include <stdio.h>

int main(void) {
	int T,N;
    printf("Enter number of taste case : \n");
	scanf("%d",&T);
    printf("Enter number of candies : \n");
	for(int i=0;i<T;i++)
	{
        scanf("%d",&N);
	    if (N%3==0)
	    printf("Divide equally\n");
	    else
	    printf("can't divide equally\n");
	}
	return 0;
}

