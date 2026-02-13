#include <stdio.h>
#include <math.h>
int main() {
    int num,i;
    printf("enter the number:");
    scanf("%d",&num);
    printf("Sqaure root of the number is: %.2f\n", sqrt(num));
    printf("Square of the number is: %.2f\n", pow(num, 2));
    printf("Cube of the number is: %.2f\n", pow(num, 3));
    
    int prime = 1;
    if (num <= 1) {
        prime = 0;
    } else {
        for (i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
        prime = 0;
        break;
            }
        }
    }
    if (prime) {
        printf("the number is prime");
    } else {
        printf("the number is not prime");
    }
    printf("Prime factors of the number are: ");
    for (i = 2; i <= num; i++) {
        while (num % i == 0) {
            printf("%d ", i);
            num /= i;
        }
    }
    return 0;
}
