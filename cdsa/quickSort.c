#include<stdio.h>
void swap( int *a ,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

 int partition(int array[], int lb ,int ub){
    int pivot =array[lb];
   int start =lb;
   int end = ub;
   while (start<end)
   {
    while (array[start]<=pivot)
    {
        start++;
    }
        while (array[end]> pivot)
        {
            end--;
        }
        
        if (start<end){
            swap(&array[start], &array[end]);

        }   
     }
        swap(&array[lb],&array[end]);
        return end;   

      
}
 void Quicksort(int array[] ,int lb , int ub){
    if (lb<ub){
       int loc = partition( array , lb ,ub);
       Quicksort( array ,  lb , loc -1);
       Quicksort(array, loc +1, ub);
    }
  }

  int main() {
    int array[] = {64, 25, 12, 22, 11};
    int n = sizeof(array) / sizeof(array[0]);
    
    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    
    Quicksort(array, 0, n - 1);
    
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    
    return 0;
}