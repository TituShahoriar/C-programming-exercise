#include <stdio.h>

int main() {
    int num, first_digit, last_digit, sum;
    
    printf("Enter a four-digit number: ");
    scanf("%d", &num);
    
    last_digit = num % 10;
    first_digit = num / 1000;

    sum = first_digit + last_digit;
    
    printf("Sum of first and last digits = %d", sum);
    
    return 0;
}
