// #include<stdio.h>
// void main(){
//   int n,i,j,k;
//   printf("Enter lengrh");
//   scanf("%d",&n);
//   for (i=0;i<n;i++)
//   {
//       for (j=n;j>i;j--)
//     {
//        printf(" ");
//     }
//        for (k=0;k<=j;k++)
//      {
//         printf("* ");
//      }
//         printf("\n");
//    }



//pattern type 2;


// #include <stdio.h>

// int main() {
//     // Write C code here
//     int i,j,k,n;
    
//     printf("Enter length");
//     scanf("%d",&n);
//     int a=n-1;
//     int b=n-1;
//     for (i=0;i<n;i++)
//     {
//         for (j=0;j<=(2*(n-1));j++)
//     { 
//         if (j>=a && j<=b)
//         {
//         printf("*");
//         }
//         else
//         {
//         printf(" ");
//         }
//     }
//   a--;
//   b++;
//   printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//  int j,i,k,r;
//  for (i=0;i<5;i++)
//  {
//      for (j=0;j<5;j++)
//      {
//    if (i==0 || i==4||j==0||j==4)
//    {
//    printf("2 ");
//    }
//    if else(j=2 && i==2) 
//    {
//    printf("0");
//    }
//    else 
//    printf("1 ");
//  }
//  printf("\n");
// }
//     return 0;
// }




#include <stdio.h>

int main()
{
int min ,max,age;
printf(" Enter lower limit :");
scanf("%d",&min);
printf("enter maximum limit:");
scanf("%d",&max);
printf ("Enter your age:");
scanf("%d",&age);
if (age<=max&&age>=min)
{
    printf("You are qualifed ha ha ");
}
else \
printf("Disqualifi ");

    return 0;
}

