#include <stdio.h>

void main () {
int matrix_add () {
     int rows, cols, i, j;
        printf("Enter number of rows: ");
        scanf("%d", &rows);
        printf("Enter number of columns: ");
        scanf("%d", &cols);

        int matrix1[rows][cols], matrix2[rows][cols], sum[rows][cols];

        printf("Enter elements of first matrix:\n");
        for(i = 0; i < rows; i++) {
            for(j = 0; j < cols; j++) {
                printf("Element [%d][%d]: ", i + 1, j + 1);
                scanf("%d", &matrix1[i][j]);
            }
        }

        printf("Enter elements of second matrix:\n");
        for(i = 0; i < rows; i++) {
            for(j = 0; j < cols; j++) {
                printf("Element [%d][%d]: ", i + 1, j + 1);
                scanf("%d", &matrix2[i][j]);
            }
        }
