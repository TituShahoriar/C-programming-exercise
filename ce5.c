#include <stdio.h>

int main() {
    float richter_scale_num;
    
    printf("Enter the Richter scale number: ");
    scanf("%f", &richter_scale_num);
    
    if (richter_scale_num < 5.0) {
        printf("Little or no damage");
    }
    else if (richter_scale_num >= 5.0 && richter_scale_num < 5.5) {
        printf("Some damage");
    }
    else if (richter_scale_num >= 5.5 && richter_scale_num < 6.5) {
        printf("Serious damage: walls may crack or fall");
    }
    else if (richter_scale_num >= 6.5 && richter_scale_num < 7.5) {
        printf("Disaster: houses and buildings may collapse");
    }
    else {
        printf("Catastrophe: most buildings destroyed");
    }
    
    return 0;
}
