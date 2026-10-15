CODE:

#include <stdio.h>

int main() {
    int dollar1, cent1, dollar2, cent2;
    int totalDollars, totalCents;

    scanf("%d", &dollar1);
    scanf("%d", &cent1);
    scanf("%d", &dollar2);
    scanf("%d", &cent2);

    totalDollars = dollar1 + dollar2;
    totalCents = cent1 + cent2;

    totalDollars += totalCents / 100;
    totalCents = totalCents % 100;

    printf("%d\n", totalDollars);
    printf("%d\n", totalCents);

    return 0;
}
INPUT:
30
10
140
99
OUTPUT:
171
9
