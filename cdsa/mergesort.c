#include<stdio.h>
#define max 8

int a[] = {15,5,24,8,1,3,16,10,20};
int b[1];

void sort(int lb , int mid , int ub)
 {
        int i =lb;
        int  j = mid + 1;
        int k = lb;
  while (i<= mid && j <= ub)
    {
          if (a[i] <= a[j])
    {
        b[k] = a[i];
        i++;
        k++;
     }
    else 
    {
        b[k] = a[j];
        j++;
        k++;
    }
 }
    if (i>mid)
 {
    while(j<=ub)
    {
        b[k] = a[j];
        j++; k++;
    }
 }
  else 
 {
    while(i<=mid){
        b[k] = a[i];
        i++; k++;
    }
 }
   for(int i = lb; i <= ub; i++)
      a[i] = b[i];
}
   void mergesort( int lb, int ub )
{
    if (lb < ub)
   {
      int mid = (lb + ub )/2;
      mergesort( lb , mid);
      mergesort(mid + 1 , ub);
       sort(lb , mid , ub);
    }
    else
    {
        return;
    }
}
int main() { 
   int i;
printf("List before sorting\n");
   for(i = 0; i <= max; i++)
      printf("%d ", a[i]);
mergesort(0, max);
printf("\nList after sorting\n");
   for(i = 0; i <= max; i++)
      printf("%d ", a[i]);
}



















//     void sort(int low, int high) {
//    int mid;
   
//    if(low < high) {
//       mid = (low + high) / 2;
//       sort(low, mid);
//       sort(mid+1, high);
//       merging(low, mid, high);
//    } else { 
//       return;
//    }   
// }