#include <stdio.h>

int main() {
    int x, y, units;
    char direction;

    printf("Enter current coordinate (x and y positions): ");
    scanf("%d %d", &x, &y);
    printf("Enter No. units towards direction: ");
    scanf("%d", &units);
    printf("Enter Direction (N, S, E, W): ");
    scanf(" %c", &direction); 

    switch (direction) {
        case 'N':
            y += units;
            break;
        case 'S':
            y -= units;
            break;
        case 'E':
            x += units;
            break;
        case 'W':
            x -= units;
            break;
        default:
            printf("Invalid direction!");
            return 1;
    }

    printf("New coordinate: (%d,%d)\n", x, y);

    return 0;
}
