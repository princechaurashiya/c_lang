// #include<stdio.h>
// void main (){
//     int a;
//     printf("Enter number:");
//     scanf("%d",&a);
//     if (a%2==0)
//     printf("Given number is even:%d",a);
//     else
//     printf("Given number is odd:%d\n",a);
// }


// 

// 


// 
// #include<stdio.h>
// void main(){
//     float a;
//     printf("Enter number:");
//     scanf("%f",&a);
//  if (0<=a && a<=30)
//     printf("range is:[0,30]");
//  if (31<=a && a<=50)
//     printf("range is: [31,50]");
// if (51<=a && a<=80)
//    printf("range is:[51,80]");
// if (81<=a && a<=100)
//    printf("range is:[81,100]");

// }

// SECOND LAB

// #include<stdio.h>
// void main(){
//     int a ,b,c,n,t;
//     scanf("%d",&t);
//     while(t--){
//     printf("Enter number\n");
//     scanf("%d",&a);
//     n=a;
//     while(a>0)
//     {
//      b=a%10;
//      a = a/10;
//     c=(c*10)+b;
    
//     }
//      printf("%d\n",c);
//      if(c==n)
//      printf("palindrom number\n");
//      else
//      printf("Not a palindrom number\n");
//      c=0;
// }
// }
    
    // #include<stdio.h>
    // void main(){
    //     int a;
    //     printf("Enter number:");
    //     scanf("%d",&a);
    //     while (a!=0){
    //         printf("Enter number:");
    //         scanf("%d",&a);
    //         if (a<0)
    //         break ;
    //     }
    //     printf("Enter number is not a natural number\n");

    // }

// #include<stdio.h>
// void main(){
//     int a,b,c=3;
//     printf("define your lower and upper limit:");
//     scanf("%d%d",&a,&b);
//     printf("Here is your even output:\n");
//     for (int i=1;i<=b;i++)
//     {
//         if (i%2==0)
//         {
//     //  printf("%d\n",i);
//         }else
//         printf("%d\n",i);
//         }
// }


// # include <stdio.h>
// void main(){
//     int n;
// printf ("Enter length of array:");
// scanf("%d",&n);
// int a[n];
// for (int i=0;i<n;i++)
// {
//     printf("Enter element:");
//     scanf("%d",&a[i]);
// }
// for(int j=0;j<n;j++)
// {
//     printf("%d ",a[j]);
// }
// }



// #include<stdio.h>
// void main(){
//     int n;
// printf ("Enter length of array:");
// scanf("%d",&n);
// int a[n];
// for (int i=0;i<n;i++)
// {
//     printf("Enter element:");
//     scanf("%d",&a[i]);
// }
// for(int j=0;j<n;j++)
// {
//     printf("%d ",a[j]);
// }
// }

// #include<stdio.h>
// void main(){
//     int a,i,j;
//     printf("Enter length of pattern:");
//     scanf("%d",&a);
//     for (i=1;i<=a;i++)
//     {
//         for (j=0;j<i;j++)
//         {
//         printf("* ");
//         }
//         printf("\n");
//     }
// }

// #include<stdio.h>
// void main(){
//     int n,i,j,a,b;
    
//     printf("Enter length:");
//     scanf("%d",&n);
//     a=n;
//     b=n;
//     for (i=0;i<n;i++)
//     {
//         for(j=n;j>i;j--)
//         {
//         printf(" ");
//         }
//             for (int k=0;k<=j;k++)
//             {
//             printf("*");
//           //  printf(" ");
//             }
//              printf("\n");
        
//     }

// }

# include<stdio.h>
void main (){
    int n;
    printf("Enter length");
    scanf("%d",&n);
    int a=n-1, b=n-1;
    for (int i=1; i<=n; i++)
    {
        for (int j=0; j <= (2 * (n-1)); j++)
        {
            if (j >= a && j <= b)
            {
                printf("*");  
            }
            else
            {
                printf(" ");
            }
        }
            a--;
            b++;
            printf("\n");
        
    }
}

// #include<stdio.h>
// void main(){
//     int n,i,j;
//     printf("Enter length of pattern");
//     scanf("%d",&n);
//     for (i=0;i<n;i++)
//     {
//         for (j=n;j>i;j--)
//         {
//             printf(" ");
//         }
//         for (int k=0;k<=j;k++)
//         {
            
//             printf("* ");
//         }
//         printf("\n");
//     }

// }


#include <stdio.h>
#include <math.h>
void main (){
int i,j,n;
printf("enter length:");
scanf("%d",&n);
for (i=n+1;i>n;i++)
{
    int count=0; 
   for(j=2;j <= sqrt(i); j++)
  //for(j=2;j < n; j++)
    if (i%j==0)
    {
       count=1;
    }
    if (count==0)
    {
        printf("next prime number is :%d",i);
        break;
    }
}
}