#include <stdio.h>
void main(){
	int len,max;
    printf("Enter length:");
	scanf("%d",&len);
	int arr[len];
    printf("Enter array element:");
	for(int i = 0; i <len; i++){
		scanf("%d",&arr[i]);
	}
	int *ptr;
	ptr = &arr[0];
	max = arr[0];
	for(int i = 1; i <len; i++){
		if(max< *(arr + i)){
		 	max= *(arr+i);
		}
	}
	printf("Max element is: %d\n", max);
	   }