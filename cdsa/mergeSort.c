#include<stdio.h>


void merge( int A[],int lb,int mid, int ub ,int size){
    int i = lb;
    int j = mid+1;
    int k = lb;
    int temp [size];
    while (i<=mid && j<=ub)
    {
        if(A[i]<=A[j]){
           temp[k] = A[i];
           i++;        
        }
        else{
            temp[k] = A[j];
            j++;  
        }   
        k++; 
    }
    if (i > mid)
    {
        while (j <= ub)
        {
            temp[k] =A[j];
            j++; k++;
        }     
    }else
    {
        while (i <= mid )
        {
            temp[k] =A[i];
            i++; k++;
        }
        
    }
    for (int x = lb;  x < size; x++)
    {
        A[x] =temp[x];
       
    }
    
}

void mergeSort(int A[],int lb ,int ub){
    
    if (lb < ub){
        int mid = (lb+ub)/2;
    
         mergeSort( A , lb , mid);
         mergeSort(A , mid+1, ub);
        merge( A ,lb , mid, ub,ub+1);
    }
}




int main(){
    
    int A[]={15,5,24,8,1,3,16,10,20};
    int A_size = sizeof(A) / sizeof(A[0]);
    printf("size fo array ia %d \n",A_size);

    printf("Given array is:\n");
    for (int i = 0; i < A_size; i++)
    {
        printf("%d  ",A[i]);
    }

    mergeSort(A , 0 , A_size-1);

    printf("\nSorted array is:\n");
     for (int x = 0; x < A_size; x++)
    {
        printf("%d  ",A[x]);
    }

return 0;

}




