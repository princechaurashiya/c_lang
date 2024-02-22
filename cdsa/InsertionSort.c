#include<stdio.h>
int  main()
{   
    int n=0;
    printf("Enter lenght of array:\n");
    scanf("%d",&n);
     int array[n];
        printf("Enter element fo array:");
        for (int  k = 0; k < n; k++)
             scanf("%d",&array[k]);
             
             for (int i = 1; i < n; i++)
             {
               int temp = array[i];
               int j = i-1;
                 while (j>=0 && array[j]>temp)
                 {
                     array[j+1] = array[j];
                     j--;
                }
             array[j+1] = temp;           
          }
        
  printf("Shorted array is:\n");
     for (int i = 0; i < n; i++)
      {
        printf("%d\n",array[i]);
      }
    return 0;
}