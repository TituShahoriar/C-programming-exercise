#include <stdio.h>

int main() {
    int sum = 0;
    
    for (int num = 1; num <= 126; num += 2) {
        sum += num * num;
    }
    
    printf("Sum of squares of all odd numbers between 1 and 126: %d", sum);
    
    return 0;
}
