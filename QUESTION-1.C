//CODE:

#include <stdio.h>
int main() {
    float distance, fare = 100;
    char member[10];

    printf("Distance: ");
    scanf("%f", &distance);

    printf("Member: ");
    scanf("%9s", member);

    if (distance > 10) {
        fare += (distance - 10) * 20;
    }

    if (member[0] == 't' || member[0] == 'T') {
        fare = fare - (fare * 0.10);
    }

    printf("Final Fare: ₹%.0f\n", fare);

    return 0;
}
/*
INPUT:
Distance: 15
Member: TRUE
OUTPUT:
Final Fare: ₹180
*/
