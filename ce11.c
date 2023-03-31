#include <stdio.h>

int main() {
    int amount, total_amount = 0;
    float price, total_price = 0.0, average_price;

    while (1) {
        printf("Enter amount (in kg): ");
        scanf("%d", &amount);

        if (amount == 0) {
            break; 
        }

        if (amount < 0) {
            printf("Invalid input, enter a positive number.\n");
            continue; 
        }

        printf("Enter price: ");
        scanf("%f", &price);

        if (price < 0) {
            printf("Invalid input, enter a positive number.\n");
            continue; 
        }

        total_amount += amount;
        total_price += amount * price;
    }

    average_price = total_price / total_amount;

    printf("Total amount (in kg): %d\n", total_amount);
    printf("Total price: %.2f\n", total_price);
    printf("Average price per kg: %.2f\n", average_price);

    return 0;
}
