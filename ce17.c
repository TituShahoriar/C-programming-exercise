#include <stdio.h>
#include <math.h>

int main() {
   int num, originalNum, remainder, sum = 0, i, flag = 0;

   printf("Enter any integer: ");
   scanf("%d", &num);

   originalNum = num;

   while (num != 0) {
      remainder = num % 10;
      sum += remainder;
      num /= 10;
   }

   for (i = 2; i <= sqrt(sum); i++) {
      if (sum % i == 0) {
         flag = 1;
         break;
      }
   }

   if (flag == 0) {
      printf("Sum of its digits = %d. %d is a prime number.", sum, sum);
   }
   else {
      printf("Sum of its digits = %d. %d is not a prime number.", sum, sum);
   }

   return 0;
}
