#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0, fact = 1.0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        fact *= i;              
        sum += 1.0 / fact;      
    }

    printf("Sum of the series up to %d terms: %.2f\n", n, sum);

    return 0;
}
