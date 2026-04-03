#include <stdio.h>
#include <stdlib.h>
#define BUFFER_SIZE 100

int main() {
    float *buffer;
    int i;

    buffer = (float*)calloc(BUFFER_SIZE, sizeof(float));
    if (buffer == NULL) {
        printf("OUT OF MEMORY\n");
        exit(1);
    }

    for (i = 0; i < BUFFER_SIZE; i++) {
        printf("buffer[%d] = %f\n", i, buffer[i]);
    }

    free(buffer); 

    return 0;
}