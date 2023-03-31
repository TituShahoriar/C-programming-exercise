#include <stdio.h>

int main() {
    int n, i = 1, sum = 0;
    printf("Enter value of n: ");
    scanf("%d", &n);
    while (i <= n) {
        sum += (2*i+1)*(2*i+1);
        i++;
    }
    printf("Sum of the series: %d", sum);
    return 0;
}
