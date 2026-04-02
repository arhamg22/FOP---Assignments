#include <stdio.h>
#include <stdlib.h>  
#include <time.h>     

int main() {
    int n, i;

    // Input: how many random numbers
    printf("Enter how many random numbers you want: ");
    scanf("%d", &n);
    srand(time(0));

    printf("Pseudo Random Numbers:\n");
    for(i = 0; i < n; i++) {
        printf("%d\n", rand());
    }

    return 0;
}
