CODE:

#include <stdio.h>

int main() {
    int coins, x, y;
    int longBen, blackbeard, remaining, eachPirate;

    scanf("%d", &coins);
    scanf("%d", &x);
    scanf("%d", &y);

    longBen = coins * x / 100;
    remaining = coins - longBen;

    blackbeard = remaining * y / 100;
    remaining = remaining - blackbeard;

    eachPirate = remaining / 3;

    printf("%d\n", longBen);
    printf("%d\n", blackbeard);
    printf("%d\n", eachPirate);

    return 0;
}
INPUT:
729
65
87
OUTPUT:
473
222
11
