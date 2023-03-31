#include <stdio.h>

int main() {
   int num, originalNum, remainder, result = 0;

   printf("Armstrong numbers between 1 and 500 are: ");
   for(num = 1; num <= 500; num++) {
      originalNum = num;

      while(originalNum != 0) {
         remainder = originalNum % 10;
         result += remainder * remainder * remainder;
         originalNum /= 10;
      }

      if(result == num) {
         printf("%d ", num);
      }

      result = 0;
   }

   return 0;
}
