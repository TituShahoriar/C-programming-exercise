#include <stdio.h>

int main() {
   int i, j, n;

   printf("Enter number of rows: ");
   scanf("%d", &n);

   for(i = 1; i <= n; i++) {
      for(j = i; j < n; j++) {
         printf(" ");
      }

      printf("*");

      for(j = 1; j < 2 * (i - 1); j++) {
         printf(" ");
      }

      if(i == 1) {
         printf("\n");
      } else {
         printf("*\n");
      }
   }

   for(i = n - 1; i >= 1; i--) {
      for(j = n; j > i; j--) {
         printf(" ");
      }

      printf("*");

      for(j = 1; j < 2 * (i - 1); j++) {
         printf(" ");
      }

      if(i == 1) {
         printf("\n");
      } else {
         printf("*\n");
      }
   }

   return 0;
}
