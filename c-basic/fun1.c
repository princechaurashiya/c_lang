#include<stdio.h>
void f(){
    printf("1 ");
}
void g()
{
    printf("2 ");
}
void h()
{
    printf("3 ");
}
void main (){
    f();
    g();
    h();
    f();
    g();
    h();
}