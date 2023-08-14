#include <stdio.h>
#include <string.h>
int main() {
   char str1[100], str2[100];
   int len1, len2, cmp;
   printf("Enter string 1: ");
   fgets(str1, sizeof(str1), stdin);
   printf("Enter string 2: ");
   fgets(str2, sizeof(str2), stdin);
   cmp = strcmp(str1, str2);
   if (cmp == 0) {
      printf("The strings are equal.\n");
   } else if (cmp < 0) {
      printf("String 1 is less than string 2.\n");
   } else {
      printf("String 1 is greater than string 2.\n");
   }
   len1 = strlen(str1);
   len2 = strlen(str2);
   printf("Length of string 1 is %d\n", len1);
   printf("Length of string 2 is %d\n", len2);
   return 0;
}