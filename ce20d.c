#include <stdio.h>

int main() {
    int n = 6;  

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (i % 2 != 0) {  
                printf("%d ", 2 * j - 1);
            } else {  
                printf("%d ", 2 * j);
            }
        }
        printf("\n");
    }

    return 0;
}
