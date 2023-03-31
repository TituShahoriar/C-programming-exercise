#include <stdio.h>

int main() {
    int n, i = 1, sign = 1;
    float sum = 0;
    printf("Enter value of n: ");
    scanf("%d", &n);
    while (i <= n) {
        sum += sign*(float)i/(i+1);
        sign = -sign;
        i++;
    }
    printf("Sum of the series: %.2f", sum);
    return 0;
}
