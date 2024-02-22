# include<stdio.h>
  int main(){
    int n,j ;
    printf("Enter the length of array:\n");
    scanf("%d",&n);
     int array[n];
    printf("Entere the elements of array:\n");
    for(int k = 0;k<n;k++){
     
      scanf("%d",&array[k]);
    }
    int pass =0 ;
      for(int i = 0; i < n-1; i++)
      {
        int flag = 0;

        for(int j = 0; j < (n-1-i); j++)
        {
          if (array[j] > array[j+1])
          {
            int temp = array[j];
            array[j] = array[j+1];
            array[j+1] =temp;
            flag =1;
          }
        }
        pass=i+1;
        if(flag == 0)  {   
          
          break;
        }
      }
      printf("Pass= %d\n",pass);
      printf("Shorted array is:\n");
      for (int i = 0; i < n; i++)
      {
        printf("%d\n",array[i]);
      }
     return 0; 
 }
