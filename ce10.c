#include <stdio.h>

int main() {
    int num, sum = 0;

    while (1) { 
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num == 0) {
            break; 
        }

        if (num < 0) {
            printf("Negative numbers are not allowed.\n");
            continue; 
        }

        sum += num;
    }

    printf("The sum is %d.\n", sum);

    return 0;
}
