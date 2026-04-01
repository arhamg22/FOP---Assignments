#include <stdio.h>

int main() {
    int a, b, i, gcd;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    for (i = 2; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0) {
            printf("Smallest Common Divisor: %d\n", i);
            break;
        }
    }
    if (i > a || i > b)
        printf("No common divisor other than 1\n");
        
    for (i = 1; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }

    printf("Greatest Common Divisor (GCD): %d\n", gcd);

    return 0;
}
