# include<stdio.h>

void fun (int *, int *);
  
  int main (){
    int x =5 , y = 7;
    fun ( &x , &y );
    printf("Inside main (calling fun:)\n");
    printf("x=%d , y= %d \n",x ,y);
}

void fun (int *x , int *y)
{
    *x= 7;
    *y = 5;
    printf("Inside fun (called fun)\n");
    printf("x=%d , y =%d \n" , *x ,*y);
}