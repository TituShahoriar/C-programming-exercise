#include <stdio.h>

int main() {
    float salary, tax;
    
    printf("Enter your salary: ");
    scanf("%f", &salary);
    
    if (salary >= 0 && salary <= 14999.99) {
        tax = 0.15 * salary;
    }
    else if (salary >= 15000 && salary <= 29999.99) {
        tax = 2250 + 0.18 * (salary - 15000);
    }
    else if (salary >= 30000 && salary <= 49999.99) {
        tax = 5400 + 0.22 * (salary - 30000);
    }
    else if (salary >= 50000 && salary <= 79999.99) {
        tax = 11000 + 0.27 * (salary - 50000);
    }
    else if (salary >= 80000 && salary <= 150000.00) {
        tax = 21600 + 0.33 * (salary - 80000);
    }
    else {
        printf("Invalid salary range");
        return 0;
    }
    
    printf("Tax on salary of $%.2f is $%.2f", salary, tax);
    
    return 0;
}
