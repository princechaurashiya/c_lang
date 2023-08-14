// #include<stdio.h>
// #define max 6
// int stack [max];
// int top =  (-1);
// void push (int item)
// {
// if (top == max-1){
//     printf ("stack is full");
// }
// else
// {
// top++;
// stack[top] = item;
// printf("top stack is %d\n",top);
// }
// }

// void main(){
//     int key;
//     for(int i=1; i<max+1; i++){
//     printf("Enter element to push in stack : \n");
// scanf("%d",&key);
// push(key);
// }
// }



#include <stdio.h>
//#include <stdlib.h>
int main(){
    int i, n, j, k;
    printf("Enter the size of the first array: ");
    scanf("%d", &n);
    int arr1[n];
    printf("Enter the elements of the first array: \n");
    for (i = 0; i < n; i++){
        scanf("%d", &arr1[i]);
    }
    printf("Enter the size of the second array: ");
    scanf("%d", &k);
    int arr2[k];
    printf("Enter the elements of the second array: \n");
    for (j = 0; j < k; j++){
        scanf("%d", &arr2[j]);
    }
    int arr3[n + k];
    i = j = 0;
    int in;
    for (in = 0; in < n + k; in ++){
        if (i < n && j < k){
            if (arr1[i] < arr2[j]){
                arr3[in] = arr1[i];
                i++;
            }
            else{
                arr3[in] = arr2[j];
                j++;
            }
        }
        else if (i < n){
            arr3[in] = arr1[i];
            i++;
        }
        else{
            arr3[in] = arr2[j];
            j++;
        }
    }
    printf("The merged array is: \n");
    for (in = 0; in < n + k; in++){
        printf("%d ", arr3[in]);
    }
    printf("\n");
    return 0;
}