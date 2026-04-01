#include <stdio.h>
int main() { 
    int n,i;
    long long factorial = 1;
    printf("Enter the positive number:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        factorial = factorial * i;

    }
    printf("Factorial of %d = %lld", n, factorial);
    return 0;
}

RECURSIVE METHOD.
#include <stdio.h>
long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;   
    } else {
        return n * factorial(n - 1); 
    }
}

int main() {
    int n;
    long long result;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.");
    } else {
        result = factorial(n);
        printf("Factorial of %d = %lld", n, result);
    }

    return 0;
}
