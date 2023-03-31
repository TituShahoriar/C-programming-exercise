#include <stdio.h>
#include <math.h>

int main() {
    int n, i = 1;
    float sum = 1.0;
    printf("Enter value of n: ");
    scanf("%d", &n);
    while (i <= n) {
        sum += (pow(i*8+2,2)+i)/pow(2*i,2);
        i++;
    }
    printf("Sum of the series: %.2f", sum);
    return 0;
}
