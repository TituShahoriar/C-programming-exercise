#include <stdio.h>

int main() {
   int m, n, num, reverse, remainder, sum = 0;

   printf("Enter two integers (m and n): ");
   scanf("%d %d", &m, &n);

   printf("Palindrome numbers between %d and %d are: ", m, n);

   for(num = m; num <= n; num++) {
      int temp = num;
      reverse = 0;

      while (temp != 0) {
         remainder = temp % 10;
         reverse = reverse * 10 + remainder;
         temp /= 10;
      }

      if (num == reverse) {
         printf("%d ", num);
         sum += num;
      }
   }

   printf("\nSum of palindrome numbers between %d and %d is: %d",
