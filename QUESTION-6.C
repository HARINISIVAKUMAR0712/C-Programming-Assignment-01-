CODE:

#include <stdio.h>

int main() {
    int A, B, C, car;

    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    scanf("%d", &car);
    if (car % 3 == 0) {
        printf("Car %d goes into road A\n", car);
    } else if (car % 3 == 1) {
        printf("Car %d goes into road B\n", car);
    } else if (car % 3 == 2) {
        printf("Car %d goes into road C\n", car);
    } else {
        printf("No path exists\n");
    }

    return 0;
}
INPUT:
243
136
567
17
OUTPUT:
Car 17 goes into road C
