CODE:

#include <stdio.h>

int main() {
    float mileage;
    int petrol, distance;
    float availableDistance;

    scanf("%f", &mileage);
    scanf("%d", &petrol);
    scanf("%d", &distance);

    availableDistance = mileage * petrol;

    if (availableDistance >= distance) {
        printf("Can reach\n");
    } else {
        printf("Cannot reach\n");
    }

    return 0;
}
INPUT:
11
6
67
OUTPUT:
Cannot reach

