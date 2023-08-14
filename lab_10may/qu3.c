#include <stdio.h>
#include <string.h>
int main() {
   char sentence1[100], sentence2[100];
   char *ptr1, *ptr2;
   printf("Enter sentence 1: ");
   fgets(sentence1, sizeof(sentence1), stdin);
   printf("Enter sentence 2: ");
   fgets(sentence2, sizeof(sentence2), stdin);
   ptr1 = sentence1;
   ptr2 = sentence2;
   while (*ptr1 == *ptr2) {
      if (*ptr1 == '\0' || *ptr2 == '\0') {
         break;
      }
      ptr1++;
      ptr2++;
   }
   if (*ptr1 == '\0' && *ptr2 == '\0') {
      printf("The sentences are equal.\n");
   } else {
      printf("The sentences are not equal.\n");
   }
 return 0;
}