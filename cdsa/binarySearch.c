//For binary search: Array should be sorted.
#include<stdio.h>

int BinarySearch(int A[], int size ,int data){
    int l = 0; int r = size - 1;
    while (l<=r)
    {
        int mid = (l + r)/2;
        if (data == A[mid])
        {
            return mid;
        }
         else if (data < A[mid])
        {
            r = mid -1;
        }
        else 
        l = mid + 1;      
        
    }
    return -1;
}

int main(){
    int A[] = {5,9,17,23,25,45,59,63,71,89,};
    int a = sizeof(A) / sizeof(A[0]);
    printf("Given array is :\n");
    for (int  i = 0; i < a-1; i++)
    {
        printf("%d ",A[i]);
    }
     int result = BinarySearch(A , a , 60);
     if (result == -1)
     {
        printf("\nNot found\n");
     }
     else printf("\nData is on %dth Inex\n",result);
     
    
}